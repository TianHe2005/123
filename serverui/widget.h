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
    void storeOTP(const QString &userId, const QString &otp, int counter);
    bool verifyOTP(const QString &userId, const QString &otp);
    void onNewConnection();
    void onReadyRead();
    void onDisconnected();
    void appendToTextEdit(const QString &message);
    void onGenerateOtpClicked(const QString userid);
    QString generateRandomNumber();
    void updateUiWithOtpInfo(int counter, QString randomNumber);


private:
    Ui::Widget *ui;
    QTcpServer *tcpServer;
    QTcpSocket *clientSocket;

    QSqlDatabase db;
    int loginManager(QSqlDatabase& db, const QString& username, const QString& password);
    int currentCounter;
};
#endif // WIDGET_H
