/********************************************************************************
** Form generated from reading UI file 'manage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGE_H
#define UI_MANAGE_H

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

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *widget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *tab_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QTableWidget *tableWidget;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QWidget *tab_4;
    QWidget *widget_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QWidget *widget_5;
    QPushButton *pushButton_7;
    QTableView *tableView;
    QWidget *widget_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(729, 634);
        widget = new QWidget(Form);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(179, 69, 521, 521));
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(-4, -1, 531, 521));
        tab = new QWidget();
        tab->setObjectName("tab");
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 80, 331, 61));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        tabWidget_2 = new QTabWidget(widget);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(0, 0, 531, 521));
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tableWidget = new QTableWidget(tab_3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(-20, 20, 521, 451));
        layoutWidget1 = new QWidget(tab_3);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(70, 90, 341, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout->addWidget(lineEdit_3);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget_2->addTab(tab_4, QString());
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(10, 10, 521, 521));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        layoutWidget2 = new QWidget(widget_3);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(80, 50, 311, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        lineEdit_4 = new QLineEdit(layoutWidget2);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_2->addWidget(lineEdit_4);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(10, 10, 521, 521));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_7 = new QPushButton(widget_5);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(20, 20, 75, 24));
        tableView = new QTableView(widget_5);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 90, 451, 391));
        widget_5->raise();
        widget_3->raise();
        tabWidget->raise();
        tabWidget_2->raise();
        widget_2 = new QWidget(Form);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(30, 70, 151, 521));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 30, 75, 24));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 80, 75, 24));
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 130, 75, 24));
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(30, 180, 75, 24));
        pushButton_5 = new QPushButton(widget_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(20, 230, 101, 24));

        retranslateUi(Form);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "\345\242\236\345\212\240\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "\345\242\236\345\212\240\347\224\250\346\210\267\345\220\215\345\257\206\347\240\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Form", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Form", "Tab 2", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "\345\210\240\351\231\244\347\232\204\347\224\250\346\210\267\345\220\215", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("Form", "Tab 1", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("Form", "Tab 2", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "\346\237\245\350\257\242\347\232\204\347\224\250\346\210\267\345\220\215", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Form", "\345\210\267\346\226\260", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "\345\242\236\345\212\240\347\224\250\346\210\267", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Form", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Form", "\346\237\245\350\257\242\347\224\250\346\210\267", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Form", "\344\277\256\346\224\271\347\224\250\346\210\267", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Form", "\347\224\250\346\210\267\347\231\273\345\275\225\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGE_H
