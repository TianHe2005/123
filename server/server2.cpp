#include "server1.h"
#include <QDebug>
#include <QString>
#include <QTextStream>
#include <QCryptographicHash>
#include <QDateTime>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>


Server::Server(QObject *parent)
    : QObject(parent), tcpServer(new QTcpServer(this)), clientSocket(nullptr)
{
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
    connect(tcpServer, &QTcpServer::newConnection, this, &Server::onNewConnection);
}



void Server::onNewConnection()
{

    clientSocket = tcpServer->nextPendingConnection();
    connect(clientSocket, &QTcpSocket::readyRead, this, &Server::onReadyRead);
    connect(clientSocket, &QTcpSocket::disconnected, this, &Server::onDisconnected);
}

void Server::onReadyRead()
{
    QTextStream in(clientSocket);
    QString data = in.readLine().trimmed();
    QStringList parts = data.split(":", Qt::SkipEmptyParts);

    if (parts.size() == 2) {
        QString username = parts[0];
        QString password = parts[1];

        int authenticated = loginManager(db,username, password);
        QTextStream out(clientSocket);
        out << (authenticated) << "\n";
        out.flush();
    }
}

void Server::onDisconnected()
{
    clientSocket->deleteLater();
    clientSocket = nullptr;
}

int Server::loginManager(QSqlDatabase& db, const QString& username, const QString& password) {
    QSqlQuery query(db);
    QString hashedPassword = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();
    QString sql = "SELECT password,time,quanxian,type FROM Table_3 WHERE Username = :username";
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
        QString type = query.value(3).toString();
        if (userquanxian == "SecurityAdministrator")
        {
            if(type == "pass" )
                return 1;
        }
        if(userquanxian == "LogAdministrator"){
            if(type == "pass")
                return 2;
        }

    }


    return 0;
}


Server::~Server()
{
    db.close();
}
