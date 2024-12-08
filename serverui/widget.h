#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QObject>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private slots:
    QString generateHOTP(const QString &secret, int counter);


    void onNewConnection();
    void onReadyRead();
    void onDisconnected();
    void appendToTextEdit(const QString &message);

    QString generateRandomNumber();
    void updateUiWithOtpInfo(int counter, QString randomNumber);


private:
    Ui::Widget *ui;
    QTcpServer *tcpServer;
    QTcpSocket *clientSocket;

    QSqlDatabase db;
    int loginManager(QSqlDatabase& db, const QString& username, const QString& password);
    bool verifyOTP(QSqlDatabase& db,const QString &username, const QString &otp);
    void onGenerateOtpClicked(QSqlDatabase &db, const QString &username);
    void storeOTP(QSqlDatabase& db, const QString &username, const QString &otp, int counter);
};
#endif // WIDGET_H
