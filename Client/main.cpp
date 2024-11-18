#include "ui_login.h"
#include "ui_manage.h"
#include "ui_logadmin.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DNS=TestSQL01;DRIVER={SQL Server};SERVER=LAPTOP-8G40GCUN;DATABASE=Test01;UID=sa;PWD=123456");
    if (!db.open()) {
        qDebug() << "Error: Unable to establish a database connection." << db.lastError().text();
    }
    QApplication a(argc, argv);
    Ui_Form w;
    w.setupUi(&w);

    w.show();
    return a.exec();
}
