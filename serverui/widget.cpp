#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <cmath>
#include <limits>
#include <QByteArray>
#include <QMap>
#include <QPair>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTextStream>
#include <QTimer>
#include <QDebug>
#include <QCryptographicHash>
#include <QDateTime>
#include <QtSql/QSqlDatabase>
#include <QRandomGenerator>
#include <QtSql/QSqlError>


QMap<QTcpSocket*, QDateTime> clientConnectionTimes;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , tcpServer(new QTcpServer(this))
    , clientSocket(nullptr)
{
    ui->setupUi(this);
    if (!tcpServer->listen(QHostAddress::Any, 12345)) {
        qWarning() << "Server could not start!";
    } else {
        qDebug() << "Server started!";
    }


    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DNS=TestSQL01;DRIVER={SQL Server};SERVER=LAPTOP-8G40GCUN;DATABASE=Test01;UID=sa;PWD=123456");
    if (!db.open()) {
        qWarning() << "Unable to open database:" << db.lastError();
    } else {
        qDebug() << "Database opened successfully";
    }
    connect(tcpServer, &QTcpServer::newConnection, this, &Widget::onNewConnection);
    //connect(ui->pushButton, &QPushButton::clicked, this, &Widget::onGenerateOtpClicked);
}


void Widget::appendToTextEdit(const QString &message) {
    ui->textEdit->append(message); // 将消息添加到文本框
}


QString Widget::generateHOTP(const QString &secret, int counter) {
    QByteArray secretBytes = secret.toUtf8();
    QByteArray counterBytes = QByteArray::number(counter, 10).leftJustified(8, '0');

    // Prepare the input for HMAC-SHA1
    QByteArray hashInput = secretBytes.append(counterBytes);

    // Compute HMAC-SHA1
    QCryptographicHash hash(QCryptographicHash::Sha1);
    hash.addData(hashInput);
    QByteArray hashValue = hash.result();

    // Dynamic truncation to determine the offset
    quint32 offset = hashValue.mid(hashValue.size() - 4).toUInt(nullptr, 16) % hashValue.size();

    // Extract 4 bytes from the offset position
    quint32 binaryCode = ((hashValue[offset] & 0x7f) << 24)
                         | ((hashValue[offset + 1] & 0xff) << 16)
                         | ((hashValue[offset + 2] & 0xff) << 8)
                         | ((hashValue[offset + 3] & 0xff));

    // Compute the OTP value modulo 10^6 to get a 6-digit number
    binaryCode = binaryCode % static_cast<quint32>(pow(10, 6));

    // Format the OTP as a 6-digit string, padded with leading zeros if necessary
    QString otp = QString::number(binaryCode, 10).rightJustified(6, '0');
    return otp;
}




void Widget::storeOTP(QSqlDatabase& db, const QString &username, const QString &otp, int counter) {
    QSqlQuery query(db);
    QString hashedPassword = QCryptographicHash::hash(otp.toUtf8(), QCryptographicHash::Sha256).toHex();
    QString sql = "UPDATE Table_3 SET N = :N , otp = :otp WHERE Username = :username";
    query.prepare(sql);
    query.bindValue(":username", username);
    query.bindValue(":N", counter);
    query.bindValue(":otp", hashedPassword);
    if (!query.exec()) { // 检查查询是否成功执行
        qDebug() << "Failed to update OTP:" << query.lastError().text();
        // 这里可以添加更多的错误处理逻辑，比如重试连接、记录日志等
    } else {
        qDebug() << "OTP updated successfully.";
    }
}


bool Widget::verifyOTP(QSqlDatabase& db, const QString &username, const QString &otp) {
    QSqlQuery query(db);
    QString hashedPassword = QCryptographicHash::hash(otp.toUtf8(), QCryptographicHash::Sha256).toHex();
    QString sql = "SELECT otp FROM Table_3 WHERE Username = :username";
    query.prepare(sql);
    query.bindValue(":username", username);

    if (!query.exec()) { // 执行查询并检查是否成功
        qDebug() << "Query failed:" << query.lastError().text();
        return false; // 查询失败，返回false
    }

    while (query.next()) { // 检查是否有结果行
        QString storedHashedPassword = query.value(0).toString();
        qDebug() << "Stored hashed OTP:" << storedHashedPassword;
        if (hashedPassword == storedHashedPassword) {
            qDebug() << "Hashed OTP matched.";
            return true; // 哈希密码匹配，返回true
        }
    }

    qDebug() << "Hashed OTP did not match any stored OTP.";
    return false; // 没有找到匹配的记录，返回false
}

void Widget::onNewConnection()
{

    clientSocket = tcpServer->nextPendingConnection();
    connect(clientSocket, &QTcpSocket::readyRead, this, &Widget::onReadyRead);


    clientConnectionTimes[clientSocket] = QDateTime::currentDateTime();
    QTextStream out(clientSocket);
    out << "REQUEST_TIME\n";
    out.flush();
}

void Widget::onReadyRead()
{
    QTextStream in(clientSocket);
    QString request = in.readLine().trimmed();
    QString admin;
    if (request == "CLIENT_TIME") {
        QString clientTimeStr = in.readLine().trimmed();
        QDateTime clientTime = QDateTime::fromString(clientTimeStr, "yyyy-MM-dd HH:mm:ss");
        if (clientTime.isValid()) {
            QDateTime serverTime = QDateTime::currentDateTime();
            qint64 timeDiffInSeconds = clientTime.secsTo(serverTime);
            if (timeDiffInSeconds <= 60){
            QString logMessage = QString("客户端时间: %1").arg(clientTime.toString(Qt::ISODate));
            appendToTextEdit(logMessage);
            }
            else{
                QString logMessage2 = "客户端时间与服务器时间相差超过一分钟，拒绝连接。";
                appendToTextEdit(logMessage2);
                }
        }
        else{
            QString logMessage3 = "Received invalid client time format.";
            appendToTextEdit(logMessage3);
        }
    }else if(request.startsWith("GETOTP:")){
        QStringList parts3 = request.split(":", Qt::SkipEmptyParts);
        QString username3 = parts3[1];
        onGenerateOtpClicked(db,username3);
    }
    else if (request.startsWith("USERNAME:")) {
        QStringList parts = request.split(":", Qt::SkipEmptyParts);
        if (parts.size() == 3) { // 正确的格式应该是 "USERNAME:<username>:<password>"
            QString username = parts[1];
            QString password = parts[2];

            int authenticated = loginManager(db, username, password);
            if(authenticated!=0){
                onGenerateOtpClicked(db,username);
            }
        } else {
            QString unknownMessage = QString("收到格式错误的登录请求: %1").arg(request);
            appendToTextEdit(unknownMessage);
        }
    }   else if(request.startsWith("OTP:")){
        QStringList parts2 = request.split(":", Qt::SkipEmptyParts);
        if (parts2.size() == 4){
            QString otp = parts2[1];
            QString username2 = parts2[2];
            QString password2 = parts2[3];

            int authenticated = loginManager(db, username2, password2);
            if(verifyOTP(db,username2,otp)){
                QTextStream out(clientSocket);
                out << "OTP:" << (authenticated) << "\n";
                out.flush();
                if(authenticated==1){
                    admin = "安全管理员";
                }
                else if(authenticated==2){
                    admin = "日志管理员";
                }
                else if(authenticated==3){
                    admin = "普通用户";
                }
                QString logMessage2 = QString("客户端信息: %1:%2 - Authenticated: %3")
                                          .arg(username2).arg(password2).arg(admin);
                appendToTextEdit(logMessage2);
            }

        }
    }
    else {
        QString unknownMessage = QString("收到未知消息: %1").arg(request);
        appendToTextEdit(unknownMessage);
    }
}

void Widget::onDisconnected()
{
    clientSocket->deleteLater();
    clientSocket = nullptr;
    clientConnectionTimes.remove(clientSocket);
}




int Widget::loginManager(QSqlDatabase& db, const QString& username, const QString& password) {
    QSqlQuery query(db);
    QString hashedPassword = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();
    QString sql = "SELECT password,time,quanxian FROM Table_3 WHERE username = :username";
    query.prepare(sql);
    query.bindValue(":username", username);
    query.bindValue("time", QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss"));
    if (!query.exec() || !query.next()) {
        qDebug() << "Error: User login failed. User not found or query error." << query.lastError().text();
        return false;
    }

    QString storedHashedPassword = query.value(0).toString();
    if (hashedPassword == storedHashedPassword) {
        QString userquanxian = query.value(2).toString();
        if (userquanxian == "SecurityAdministrator")
        {
            return 1;
        }
        if(userquanxian == "LogAdministrator"){
            return 2;
        }
        if(userquanxian == "User"){
            return 3;
        }
    }


    return 0;
}

void Widget::onGenerateOtpClicked(QSqlDatabase& db,const QString &username)
{
    QDateTime registrationTime = QDateTime::currentDateTime();
    //QString secret = registrationTime.toString("yyyy-MM-dd HH:mm:ss"); // 替换为您的秘密密钥
    QString secret = "123456";
    QSqlQuery query(db);
    QString sql = "SELECT N FROM Table_3 WHERE Username = :username";
    query.prepare(sql);
    query.bindValue(":username", username);
    if (query.exec()) { // 执行查询
        while (query.next()) { // 检查是否有结果行
            QString counter = query.value(0).toString(); // 获取第一列的值
            qDebug() << counter; // 输出值
            // 注意：如果查询返回多行，这里的代码将只输出第一行的值。
            // 如果需要处理多行，请将这段代码放在 while 循环内部。

            bool ok;
            int currentCounter = counter.toInt(&ok);
            if (!ok) {
                // 转换失败，处理错误
                qDebug() << "Conversion failed, counter value was not a valid integer.";
                // 你可以设置 currentCounter 为一个默认值或者进行其他错误处理
                currentCounter = -1; // 或者其他适当的默认值
            }
            QString randomNumber = generateRandomNumber(); // 生成随机数R
            currentCounter++;
            QString otp = generateHOTP(secret, currentCounter); // 使用N和秘密密钥生成OTP
            storeOTP(db,username, otp, currentCounter);  // 如果需要存储OTP，可以使用这个函数

            // 更新UI
            updateUiWithOtpInfo(currentCounter, randomNumber);
            // 可以在这里添加将OTP发送给用户的逻辑
            QTextStream out(clientSocket);
            out << "USERNAME:" << otp;
            out.flush();

        }
    } else {
        qDebug() << "Query failed:" << query.lastError().text(); // 输出错误信息
    }


}

QString Widget::generateRandomNumber()
{
    // 生成一个6位的随机数作为R
    int randomInt = QRandomGenerator::global()->bounded(100000, 999999);
    return QString::number(randomInt);
}

void Widget::updateUiWithOtpInfo(int counter, QString randomNumber)
{
    ui->lineEdit->setText(QString::number(counter)); // 更新计数器N的显示
    ui->lineEdit_2->setText(randomNumber); // 更新随机数R的显示
}


Widget::~Widget()
{
    db.close();
    delete ui;
}


