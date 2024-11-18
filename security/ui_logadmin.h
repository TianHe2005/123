/********************************************************************************
** Form generated from reading UI file 'manageriBkEq.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MANAGERIBKEQLOG_H
#define MANAGERIBKEQLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QDialog>
#include <QCryptographicHash>
#include <QString>
#include <QTableView>
#include <QVBoxLayout>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QDateTime>
#include <QComboBox>
#include <QIdentityProxyModel>

QT_BEGIN_NAMESPACE
int kkz = 2;

class UI_Formm : public QWidget
{
public:
    QWidget* widget;

    QWidget* widget_3;
    QWidget* layoutWidget3;
    QHBoxLayout* horizontalLayout_2;
    QLabel* label_4;
    QLineEdit* lineEdit_4;
    QWidget* widget_5;
    QWidget* widget_2;
    QPushButton* pushButton_7;
    QTableView* tableView;
    QPushButton* pushButton_5;
    QLineEdit* lineEdit_10;




    void setupUi(QWidget* UI_Formm)
    {
        if (UI_Formm->objectName().isEmpty())
            UI_Formm->setObjectName("UI_Formm");
        UI_Formm->resize(729, 634);
        widget = new QWidget(UI_Formm);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(179, 69, 521, 521));


        widget_5 = new QWidget(widget);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(10, 10, 521, 521));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_7 = new QPushButton(widget_5);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(20, 20, 75, 24));
        connect(pushButton_7, &QPushButton::clicked, this, &UI_Formm::shuaxing);
        tableView = new QTableView(widget_5);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 90, 451, 391));



        widget_5->raise();
        widget_2 = new QWidget(UI_Formm);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(30, 70, 151, 521));
     
        pushButton_5 = new QPushButton(widget_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 230, 81, 24));
        connect(pushButton_5, &QPushButton::clicked, this, &UI_Formm::show_record_ui);

   
        retranslateUi(UI_Formm);




        QMetaObject::connectSlotsByName(UI_Formm);
    } 

    void retranslateUi(QWidget* UI_Formm)
    {
        UI_Formm->setWindowTitle(QCoreApplication::translate("UI_Formm", "UI_Formm", nullptr));
        pushButton_7->setText(QCoreApplication::translate("UI_Formm", "\345\210\267\346\226\260", nullptr));
        pushButton_5->setText(QCoreApplication::translate("UI_Formm", "\347\224\250\346\210\267\347\231\273\345\275\225\350\256\260\345\275\225", nullptr));
     
    } // retranslateUi
    void shuaxing(){
        QSqlDatabase db = QSqlDatabase::database();
        QSqlTableModel* model = new QSqlTableModel(this, db);
        model->setTable("Table_3"); // ?滻????????
        model->select(); // ????????



        class CustomProxyModel : public QIdentityProxyModel
        {
        public:
            CustomProxyModel(QObject *parent = nullptr) : QIdentityProxyModel(parent) {}

            QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override
            {
                if (index.column() == kkz && role == Qt::DisplayRole)
                {
                    return "******";
                }
                if (index.column() == 4 && role == Qt::DisplayRole){
                    return "******";
                }
                return QIdentityProxyModel::data(index, role);
            }
        };

        CustomProxyModel *proxyModel = new CustomProxyModel(this);
        proxyModel->setSourceModel(model);
        tableView->setColumnHidden(0, true);
        tableView->setModel(proxyModel);




    }
 
    void show_record_ui()
    {
        shuaxing();
        widget_5->show();

    }
 



private:
    UI_Formm* uiFormm; // 声明一个指向UI_Form的指针

};

namespace Ui {
    class Formm : public UI_Formm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MANAGERIBKEQ_H
