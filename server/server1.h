#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QObject>

class Server : public QObject
{
    Q_OBJECT

public:
    Server(QObject *parent = nullptr);
    ~Server();

private slots:
    void onNewConnection();
    void onReadyRead();
    void onDisconnected();


private:
    QTcpServer *tcpServer;
    QTcpSocket *clientSocket;
    int loginManager(QSqlDatabase& db, const QString& username, const QString& password);

    QSqlDatabase db;
};

#endif // SERVER_H
