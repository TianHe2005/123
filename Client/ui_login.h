/********************************************************************************
** Form generated from reading UI file 'loginVIQgvs.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LOGINVIQGVS_H
#define LOGINVIQGVS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

#include <QVBoxLayout>
#include <QObject>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDialog>
#include <QCryptographicHash>
#include <QString>
#include <QDateTime>
#include "ui_manage.h"
#include "ui_logadmin.h"
#include <QComboBox>
#include <QTcpSocket>
#include <QTextStream>

#include <QRegularExpression>




QT_BEGIN_NAMESPACE

int i, j = 0;


class Ui_Form : public QWidget
{

public:
    QWidget *widget;
    QWidget *widget_2;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget_3;
    QPushButton *pushButton_4;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_5;
    QWidget *widget_4;
    QPushButton *pushButton_7;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QLabel *label_6;
    QLineEdit *lineEdit_7;
    QWidget *widget_5;
    QPushButton *pushButton_8;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QComboBox *comboBox;
    QTcpSocket* tcpSocket;
    QLineEdit *lineEdit_12;
    QLabel *label_12;
    QPushButton *pushButton_12;
    QLineEdit *lineEdit_13;
    QLabel *label_13;
    QPushButton *pushButton_13;
    QLineEdit *lineEdit_14;
    QLabel *label_14;
    QPushButton *pushButton_14;

    void setupUi(QWidget* Form)
    {
        tcpSocket = new QTcpSocket(this);
        connect(tcpSocket, &QTcpSocket::readyRead, this, &Ui_Form::readData);
        connectToServer("127.0.0.1", 12345);
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(356, 494);
        widget = new QWidget(Form);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 351, 491));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(10, 190, 351, 281));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 200, 251, 31));
        connect(pushButton, &QPushButton::clicked, this, &Ui_Form::login);
        pushButton_13 = new QPushButton(widget_2);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(40, 240, 251, 31));
        connect(pushButton_13, &QPushButton::clicked, this, &Ui_Form::sendOTP2);
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 30, 251, 121));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout_2->addWidget(lineEdit_2, 1, 1, 1, 1);
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");

        gridLayout_2->addWidget(label_13, 2, 0, 1, 1);

        lineEdit_13 = new QLineEdit(layoutWidget);
        lineEdit_13->setObjectName("lineEdit_13");

        gridLayout_2->addWidget(lineEdit_13, 2, 1, 1, 1);


        pushButton_6 = new QPushButton(widget_2);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(50, 170, 75, 24));
        connect(pushButton_6, &QPushButton::clicked, this, &Ui_Form::show_forgot_password_ui);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(21, 113, 80, 41));
        connect(pushButton_2, &QPushButton::clicked, this, &Ui_Form::show_login_ui);
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(126, 113, 80, 41));
        connect(pushButton_3, &QPushButton::clicked, this, &Ui_Form::show_register_ui);
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(10, 170, 331, 301));
        pushButton_4 = new QPushButton(widget_3);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(40, 220, 251, 41));
        connect(pushButton_4, &QPushButton::clicked, this, &Ui_Form::registerUsers);
        pushButton_14 = new QPushButton(widget_3);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(250, 190, 100, 30));
        connect(pushButton_14, &QPushButton::clicked, this, &Ui_Form::sendrequest);
        layoutWidget1 = new QWidget(widget_3);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(40, 30, 251, 171));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget1);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setPlaceholderText("\u8bf7\u8f93\u5165\u5bc6\u7801\uff08\u81f3\u5c116\u4f4d\u4e14\u5305\u542b\u5b57\u6bcd\uff09");

        gridLayout->addWidget(lineEdit_4, 1, 1, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget1);
        lineEdit_5->setObjectName("lineEdit_5");

        gridLayout->addWidget(lineEdit_5, 2, 1, 1, 1);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->setObjectName("comboBox");
        comboBox->addItem("User");
        comboBox->addItem("LogAdministrator");
        comboBox->addItem("SecurityAdministrator");

        gridLayout->addWidget(comboBox, 3, 1, 1, 1);

        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 4, 0, 1, 1);

        lineEdit_14 = new QLineEdit(layoutWidget1);
        lineEdit_14->setObjectName("lineEdit_14");

        gridLayout->addWidget(lineEdit_14, 4, 1, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(231, 113, 80, 41));
        connect(pushButton_5, &QPushButton::clicked, this, &Ui_Form::show_manage_ui);
        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(40, 160, 271, 401));
        pushButton_7 = new QPushButton(widget_4);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(50, 160, 171, 24));
        connect(pushButton_7, &QPushButton::clicked, this, &Ui_Form::getotp);
        pushButton_12 = new QPushButton(widget_4);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(50, 220, 171, 24));
        connect(pushButton_12, &QPushButton::clicked, this, &Ui_Form::sendOTP);
        layoutWidget2 = new QWidget(widget_4);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 50, 231, 91));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName("label_7");

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        lineEdit_6 = new QLineEdit(layoutWidget2);
        lineEdit_6->setObjectName("lineEdit_6");

        gridLayout_3->addWidget(lineEdit_6, 0, 1, 1, 1);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName("label_6");

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        lineEdit_7 = new QLineEdit(layoutWidget2);
        lineEdit_7->setObjectName("lineEdit_7");

        gridLayout_3->addWidget(lineEdit_7, 1, 1, 1, 1);

        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName("label_12");

        gridLayout_3->addWidget(label_12, 2, 0, 1, 1);

        lineEdit_12 = new QLineEdit(layoutWidget2);
        lineEdit_12->setObjectName("lineEdit_12");

        gridLayout_3->addWidget(lineEdit_12, 2, 1, 1, 1);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(0, 150, 331, 281));
        pushButton_8 = new QPushButton(widget_5);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(40, 200, 251, 41));
        connect(pushButton_8, &QPushButton::clicked, this, &Ui_Form::updatePassword);
        layoutWidget_2 = new QWidget(widget_5);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(40, 30, 251, 121));
        gridLayout_4 = new QGridLayout(layoutWidget_2);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        lineEdit_8 = new QLineEdit(layoutWidget_2);
        lineEdit_8->setObjectName("lineEdit_8");

        gridLayout_4->addWidget(lineEdit_8, 0, 1, 1, 1);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName("label_9");

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        lineEdit_9 = new QLineEdit(layoutWidget_2);
        lineEdit_9->setObjectName("lineEdit_9");

        gridLayout_4->addWidget(lineEdit_9, 1, 1, 1, 1);


        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName("label_9");

        gridLayout_4->addWidget(label_10, 2, 0, 1, 1);

        lineEdit_10 = new QLineEdit(layoutWidget_2);
        lineEdit_10->setObjectName("lineEdit_10");

        gridLayout_4->addWidget(lineEdit_10, 2, 1, 1, 1);


        widget_3->raise();
        widget_4->raise();
        widget_2->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_5->raise();
        widget_5->raise();

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget* Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "\u83b7\u53d6otp", nullptr));
        label->setText(QCoreApplication::translate("Form", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "\345\257\206\347\240\201", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Form", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Form", "\347\231\273\345\275\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Form", "\346\263\250\345\206\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Form", "\346\263\250\345\206\214", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "\350\264\246\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "\345\257\206\347\240\201", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Form", "\347\256\241\347\220\206\345\221\230", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Form", "\u83b7\u53d6otp", nullptr));
        label_7->setText(QCoreApplication::translate("Form", "\347\256\241\347\220\206\345\221\230\350\264\246\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("Form", "\347\256\241\347\220\206\345\221\230\345\257\206\347\240\201", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Form", "\347\231\273\345\275\225", nullptr));
        label_8->setText(QCoreApplication::translate("Form", "\350\264\246\345\217\267", nullptr));
        label_9->setText(QCoreApplication::translate("Form", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_10->setText(QCoreApplication::translate("Form", "\u65e7\u5bc6\u7801", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Form", "\347\231\273\345\275\225", nullptr));
        label_12->setText(QCoreApplication::translate("Form", "OTP", nullptr));
        label_13->setText(QCoreApplication::translate("Form", "OTP", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Form", "\347\231\273\345\275\225", nullptr));
        label_14->setText(QCoreApplication::translate("Form", "OTP", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Form", "\u83b7\u53d6otp", nullptr));
    } // retranslateUi

    void show_login_ui()
    {
        widget_2->show();
        widget_3->hide();
        widget_4->hide();
        widget_5->hide();

    }

    void show_register_ui()
    {
        widget_2->hide();
        widget_3->show();
        widget_4->hide();
        widget_5->hide();
    }
    void show_forgot_password_ui()
    {
        widget_2->hide();
        widget_3->hide();
        widget_4->hide();
        widget_5->show();
    }
    void show_manage_ui() {
        widget_2->hide();
        widget_3->hide();
        widget_4->show();
        widget_5->hide();
    }

    void sendOTP2(){
        QString username = lineEdit->text();
        QString password = lineEdit_2->text();
        QString OTP = lineEdit_13->text();
        if (tcpSocket->state() == QAbstractSocket::ConnectedState) {
            QTextStream out(tcpSocket);
            out << "OTP:" << OTP << ":" << username << ":" << password <<"\n";
            out.flush();
        }
        else {
            qWarning() << "没有连接到服务器，无法发送";
        }
        i++;
        if (i == 4) {
            QMessageBox::warning(nullptr, "Login Failed", "Too many failed attempts. Please try again later.");
            exit(0);
        }
        readData();
    }
    void sendOTP(){
        QString username = lineEdit_6->text();
        QString password = lineEdit_7->text();
        QString OTP = lineEdit_12->text();
        if (tcpSocket->state() == QAbstractSocket::ConnectedState) {
            QTextStream out(tcpSocket);
            out << "OTP:" << OTP << ":" << username << ":" << password <<"\n";
            out.flush();
        }
        else {
            qWarning() << "没有连接到服务器，无法发送";
        }
        readData();
    }
    void sendCredentials(const QString& username, const QString& password)
    {
        if (tcpSocket->state() == QAbstractSocket::ConnectedState) {
            QTextStream out(tcpSocket);
            out << "USERNAME:" << username << ":" << password << "\n";
            out.flush();
        }
        else {
            qWarning() << "没有连接到服务器，无法发送";
        }
    }
    void sendrequest()
    {
        QString username = lineEdit_4->text();
        QString password = lineEdit_5->text();
        if (tcpSocket->state() == QAbstractSocket::ConnectedState) {
            QTextStream out(tcpSocket);
            out << "GETOTP:" << username << ":" << password << "\n";
            out.flush();
        }
        else {
            qWarning() << "没有连接到服务器，无法发送";
        }
    }
    void sendCurrentTime() {
        QDateTime currentTime = QDateTime::currentDateTime();
        QString formattedTime = currentTime.toString("yyyy-MM-dd HH:mm:ss");
        QTextStream out(tcpSocket);
        out << "CLIENT_TIME\n" << formattedTime << "\n";
        out.flush();
    }
    int readData() {
        QTextStream in(tcpSocket);
        QString request = in.readLine().trimmed();

        if (request == "REQUEST_TIME") {
            sendCurrentTime();
        } else if (request.startsWith("USERNAME:")) {
            // Handle login response if needed
            QMessageBox::information(nullptr, "Title", request);
            qDebug() << "\u6536\u5230\u767b\u5f55\u8bf7\u6c42:" << request;
            return 0;
        } else if(request.startsWith("OTP:")){
            QStringList parts2 = request.split(":", Qt::SkipEmptyParts);
            if(parts2.size()==2){
                int a = parts2[1].toInt();
                if( a == 1 ){
                    loginmanager(a);
                }
                else if(a == 2){
                    loginmanager(a);
                }
                else if(a == 3){
                    QMessageBox::information(nullptr, "Title", "success");
                    return 0;
                }
            }
        }
        else {
            qDebug() << "未知请求:" << request;
        }
    }

    void connectToServer(const QString& host, quint16 port)
    {
        tcpSocket->connectToHost(host, port);
        if (!tcpSocket->waitForConnected(100)) { // ???3??????
            qWarning() << "连接到服务器失败:" << tcpSocket->errorString();
        }
        else {
            qDebug() << "连接到服务器";
        }
    }
    void disconnectFromServer() {
        tcpSocket->disconnectFromHost();
    }
    int receiveResponse(QString request)
    {
        QStringList parts = request.split(":", Qt::SkipEmptyParts);
        QString response = parts[1];
            if (response == "1") {
                // ????????????????
                return 1;
                // ????????????н??????????????????????
            }
            else if (response == "2") {
                return 2; // 处理响应2
            }
            else if (response == "0") {
                // ???????????????
                return 0;
            }
    }


    bool loginUser(QSqlDatabase& db, const QString& username, const QString& password) {
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
        if (hashedPassword != storedHashedPassword) {
            qDebug() << "Error: User login failed. Incorrect password.";


            return false;
        }
        QString userquanxian= query.value(2).toString();
        if(userquanxian !="User")
        {
            qDebug()<<"quanxian error";
            return false;
        }
        QString type = query.value(3).toString();
        if(type != "pass"){
            QMessageBox::warning(nullptr, "Login Failed", "The administrator not pass");
            return false;
        }

        return true;
    }



    bool registerUser(QSqlDatabase& db, const QString& username, const QString& password,const QString& confirmPassword, const QString& quanxian,const QString& N,const QString& otp) {
        QDateTime registrationTime = QDateTime::currentDateTime();
        QSqlQuery query(db);
        QString hashedPassword = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();
        QString hashedPassword2 = QCryptographicHash::hash(otp.toUtf8(), QCryptographicHash::Sha256).toHex();
        QString sql = "INSERT INTO Table_3 (username, password,time,ypwd,quanxian,N,otp) VALUES (:username, :password, :time, :ypwd, :quanxian,:N,:otp)";
        query.prepare(sql);
        query.bindValue(":username", username);
        query.bindValue(":password", hashedPassword);
        query.bindValue(":time", registrationTime.toString("yyyy-MM-dd HH:mm:ss"));
        query.bindValue(":ypwd", confirmPassword);
        query.bindValue(":quanxian", quanxian);
        query.bindValue(":N", N);
        query.bindValue(":otp", hashedPassword2);
        if (!query.exec()) {
            qDebug() << "Error: User registration failed." << query.lastError().text();
            return false;
        }

        return true;
    }

    void login() {

            QString username = lineEdit->text();
            QString password = lineEdit_2->text();
            sendCredentials(username,password);

    }

    void getotp(){
        if (tcpSocket->state() == QAbstractSocket::ConnectedState) {
            QString username = lineEdit_6->text();
            QString password = lineEdit_7->text();
            sendCredentials(username, password);
            readData();
        }


    }
    void loginmanager(int response) {

            if (response == 1) {
                QMessageBox::information(nullptr, "Login Success", "Login success!");
                this->close(); 
                UI_Form* uiForm = new UI_Form(); 
                uiForm->setupUi(uiForm);
                uiForm->show(); 
            }
            else if (response == 2) {
                QMessageBox::information(nullptr, "Login Success", "Login success!");
                this->close();
                UI_Formm* uiFormm = new UI_Formm();
                uiFormm->setupUi(uiFormm);
                uiFormm->show();
            }
            else if(response == 0) {
                QMessageBox::warning(nullptr, "Login Failed", "Incorrect username or password.");
                j++;
                if (j == 3) {
                    QMessageBox::warning(nullptr, "Login Failed", "Too many failed attempts. Please try again later.");
                    exit(0);
                }
            }
    }

    void registerUsers() {
        QSqlDatabase db = QSqlDatabase::database();
        if (db.isValid()) {
            QString username = lineEdit_3->text();
            QString password = lineEdit_4->text();
            QString confirmPassword = lineEdit_5->text();
            QString quanxian = comboBox->currentText();
            QString N ="1";
            QString otp = lineEdit_14->text();


            QRegularExpression regex("^(?=.*[A-Za-z]).{6,}$");  // 正则表达式

            if (regex.match(password).hasMatch()) {
                QMessageBox::information(this, "\u63d0\u793a", "\u5bc6\u7801\u683c\u5f0f\u6b63\u786e\uff0c\u53ef\u4ee5\u767b\u5f55\uff01");
                if (password != confirmPassword) {
                    QMessageBox::warning(nullptr, "Registration Failed", "Passwords do not match.");
                }
                else if (registerUser(db, username, password, confirmPassword, quanxian,N,otp)) {
                    QMessageBox::information(nullptr, "Registration Success", "Registration success!");
                }
                else {
                    QMessageBox::warning(nullptr, "Registration Failed", "Registration failed.");
                }
                
            }
            else {
                QMessageBox::warning(this, "\u63d0\u793a", "\u5bc6\u7801\u683c\u5f0f\u4e0d\u6b63\u786e\uff01\u8bf7\u786e\u4fdd\u5bc6\u7801\u81f3\u5c11 6 \u4f4d\u5e76\u5305\u542b\u5b57\u6bcd\u3002");
            }
        }
    }

    bool updateUserPassword(QSqlDatabase& db, const QString& username,const QString& oldPassword,const QString& newPassword) {


        
        QString hashedNewPassword = QCryptographicHash::hash(newPassword.toUtf8(), QCryptographicHash::Sha256).toHex();
        QString hashedNewPassword2 = QCryptographicHash::hash(oldPassword.toUtf8(), QCryptographicHash::Sha256).toHex();
       
        QSqlQuery query(db);
        QString sql = "UPDATE Table_3 SET password = :password , ypwd = :ypwd WHERE Username = :username";
        query.prepare(sql);
        query.bindValue(":username", username);
        query.bindValue(":password", hashedNewPassword);
        query.bindValue(":ypwd",newPassword);
        QString storedHashedPassword = query.value(0).toString();
        if (storedHashedPassword == hashedNewPassword2) {



            return true;
        }

        if (!query.exec()) {
            qDebug() << "Error: Failed to update password." << query.lastError().text();
            return false;
        }

    }

    
    void updatePassword() {
        QSqlDatabase db = QSqlDatabase::database();
        if (db.isValid()) {
            QString username = lineEdit_8->text(); 
            QString oldPassword = lineEdit_10->text(); 
            QString newPassword = lineEdit_9->text(); 
            QString hashedNewPassword = QCryptographicHash::hash(newPassword.toUtf8(), QCryptographicHash::Sha256).toHex();
            if (updateUserPassword(db, username,oldPassword, newPassword)) {


                QMessageBox::information(nullptr, "Update Password", "Password updated successfully!");
            }
            else {
                QMessageBox::warning(nullptr, "Update Password", "Failed to update password. Please check your old password.");
            }
        }
    }

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LOGINVIQGVS_H
