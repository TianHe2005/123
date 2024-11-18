/********************************************************************************
** Form generated from reading UI file 'manageriBkEq.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MANAGERIBKEQ_H
#define MANAGERIBKEQ_H

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

int passwordColumnIndex = 2;

class UI_Form : public QWidget
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
    QWidget *widget_4;
    QPushButton *pushButton_6;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    //QLabel *label_6;
    //QLineEdit *lineEdit_6;
    QWidget *widget_3;
    QWidget *layoutWidget3;
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
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLineEdit* lineEdit_10;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit* lineEdit_11;
    QLineEdit* lineEdit_12;
    QLineEdit* lineEdit_13;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QTableView* tableView_2;
    QSqlTableModel* model_1;
    QTableWidget* tableWidget_3;
    QTableWidget* tableWidget_4;
    QPushButton* deleteButton;
    QPushButton* shuaxingButton;
    QPushButton* xiugaiButton;
    QPushButton* shuaxing_2Button;
    QTableView* tableView_3;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QWidget *tab_6;
    QTabWidget *tabWidget_4;
    QWidget *tab_7;
    QWidget *tab_8;

    QPushButton* xiugai_1Button;
    QPushButton* shuaxing_3Button;
    QTableWidget* tableWidget_5;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout8;


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



        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        comboBox_3 = new QComboBox(layoutWidget);
        comboBox_3->setObjectName("comboBox_3");

        comboBox_3->addItem("User");
        comboBox_3->addItem("LogAdministrator");
        comboBox_3->addItem("SecurityAdministrator");
        gridLayout->addWidget(comboBox_3, 2, 1, 1, 1);


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
        tableWidget->setGeometry(QRect(-5, 1, 521, 451));


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



        // 创建表格和按钮
        tableWidget_3 = new QTableWidget(tab_4);
        deleteButton = new QPushButton("\u5220\u9664\u9009\u4e2d\u9879", tab_4);
        shuaxingButton = new QPushButton("\345\210\267\346\226\260", tab_4);
        // 设置布局
        QVBoxLayout* layout = new QVBoxLayout(tab_4);
        layout->addWidget(tableWidget_3);
        layout->addWidget(deleteButton);
        layout->addWidget(shuaxingButton);
        tab_4->setLayout(layout);

        loadData();

        connect(shuaxingButton, &QPushButton::clicked, this, &UI_Form::shuaxing_1);
        // 连接信号与槽
        connect(deleteButton, &QPushButton::clicked, this, &UI_Form::deleteSelectedRows);

        tabWidget_3 = new QTabWidget(widget);
        tabWidget_3->setObjectName("tabWidget_3");
        tabWidget_3->setGeometry(QRect(0, 0, 531, 521));
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");



        pushButton_6 = new QPushButton(tab_5);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(200, 230, 75, 24));
        connect(pushButton_6, &QPushButton::clicked, this, &UI_Form::updatePassword);
        layoutWidget2 = new QWidget(tab_5);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(120, 150, 271, 48));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget2);
        lineEdit_5->setObjectName("lineEdit_5");

        gridLayout_2->addWidget(lineEdit_5, 0, 1, 1, 1);

        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        tabWidget_3->addTab(tab_6, QString());



        tableWidget_4 = new QTableWidget(tab_6);
        xiugaiButton = new QPushButton("\u91cd\u7f6e\u5bc6\u7801", tab_6);
        shuaxing_2Button = new QPushButton("\345\210\267\346\226\260", tab_6);
        // 设置布局
        QVBoxLayout* layout_3 = new QVBoxLayout(tab_6);
        layout_3->addWidget(tableWidget_4);
        layout_3->addWidget(shuaxing_2Button);
        layout_3->addWidget(xiugaiButton);
        tab_6->setLayout(layout_3);

        loadData_1();
        connect(shuaxing_2Button, &QPushButton::clicked, this, &UI_Form::shuaxing_2);
        // 连接信号与槽
        connect(xiugaiButton, &QPushButton::clicked, this, &UI_Form::deleteSelectedRows_2);



        tabWidget_4 = new QTabWidget(widget);
        tabWidget_4->setObjectName("tabWidget_4");
        tabWidget_4->setGeometry(QRect(0, 0, 531, 521));
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");

        layoutWidget3 = new QWidget(tab_7);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(80, 50, 311, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName("label_7");
        horizontalLayout_2->addWidget(label_7);

        lineEdit_4 = new QLineEdit(layoutWidget3);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_2->addWidget(lineEdit_4);

        comboBox = new QComboBox(layoutWidget3);
        comboBox->setObjectName("comboBox");
        
        comboBox->addItem("User");
        comboBox->addItem("LogAdministrator");
        comboBox->addItem("SecurityAdministrator");
        horizontalLayout_2->addWidget(comboBox);

        comboBox_2 = new QComboBox(layoutWidget3);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->addItem("pass");
        comboBox_2->addItem("NO");
        horizontalLayout_2->addWidget(comboBox_2);



        tabWidget_4->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        tabWidget_4->addTab(tab_8, QString());

        layoutWidget8 = new QWidget(tab_8);
        layoutWidget8->setObjectName("layoutWidget8");
        layoutWidget3->setGeometry(QRect(80, 400, 311, 22));
        horizontalLayout8 = new QHBoxLayout(layoutWidget8);
        horizontalLayout8->setObjectName("horizontalLayout8");
        horizontalLayout8->setContentsMargins(0, 0, 0, 0);
        tableWidget_5 = new QTableWidget(tab_8);
        xiugai_1Button = new QPushButton("\u8bbe\u7f6e\u6743\u9650", tab_8);
        shuaxing_3Button = new QPushButton("\345\210\267\346\226\260",tab_8 );
        comboBox_4 = new QComboBox(layoutWidget8);
        comboBox_4->setObjectName("comboBox_4");

        comboBox_4->addItem("User");
        comboBox_4->addItem("LogAdministrator");
        comboBox_4->addItem("SecurityAdministrator");
        horizontalLayout8->addWidget(comboBox_4);

        comboBox_5 = new QComboBox(layoutWidget8);
        comboBox_5->setObjectName("comboBox_5");
        comboBox_5->addItem("pass");
        comboBox_5->addItem("NO");
        horizontalLayout8->addWidget(comboBox_5);
        // 设置布局
        QVBoxLayout* layout_4 = new QVBoxLayout(tab_8);
        layout_4->addWidget(tableWidget_5);
        layout_4->addWidget(layoutWidget8);
        layout_4->addWidget(xiugai_1Button);
        layout_4->addWidget(shuaxing_3Button);
        tab_8->setLayout(layout_4);

        loadData_3();
        connect(shuaxing_3Button, &QPushButton::clicked, this, &UI_Form::shuaxing_3);
        // 连接信号与槽
        connect(xiugai_1Button, &QPushButton::clicked, this, &UI_Form::xiugai_3);


        widget_5 = new QWidget(widget);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(10, 10, 521, 521));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_7 = new QPushButton(widget_5);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(20, 20, 75, 24));
        connect(pushButton_7, &QPushButton::clicked, this, &UI_Form::shuaxing);
        tableView = new QTableView(widget_5);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 90, 451, 391));




        tabWidget->raise();
        tabWidget_2->raise();
        tabWidget_3->raise();
        tabWidget_4->raise();

        widget_5->raise();
        widget_2 = new QWidget(Form);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(30, 70, 151, 521));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 30, 75, 24));
        connect(pushButton, &QPushButton::clicked, this, &UI_Form::show_add_ui);
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 80, 75, 24));
        connect(pushButton_2, &QPushButton::clicked, this, &UI_Form::show_delete_ui);
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 130, 75, 24));
        connect(pushButton_3, &QPushButton::clicked, this, &UI_Form::show_Check_ui);
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(30, 180, 75, 24));
        connect(pushButton_4, &QPushButton::clicked, this, &UI_Form::show_xiugai_ui);
        pushButton_5 = new QPushButton(widget_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 230, 81, 24));
        connect(pushButton_5, &QPushButton::clicked, this, &UI_Form::show_record_ui);

        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(200, 400, 81, 24));
        connect(pushButton_8, &QPushButton::clicked, this, &UI_Form::add_user);

        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(200, 400, 81, 24));
        connect(pushButton_9, &QPushButton::clicked, this, &UI_Form::delete_user);

        pushButton_10 = new QPushButton(widget_3);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(200, 400, 81, 24));
        connect(pushButton_10, &QPushButton::clicked, this, &UI_Form::quanxian);


        retranslateUi(Form);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "\345\242\236\345\212\240\347\224\250\346\210\267\345\220\215", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Form", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Form", "Tab 2", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "\345\210\240\351\231\244\347\232\204\347\224\250\346\210\267\345\220\215", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("Form", "Tab 1", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("Form", "Tab 2", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QCoreApplication::translate("Form", "Tab 5", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QCoreApplication::translate("Form", "Tab 6", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_7), QCoreApplication::translate("Form", "Tab 7", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_8), QCoreApplication::translate("Form", "Tab 8", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Form", "\347\241\256\345\256\232", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "\344\277\256\346\224\271\347\232\204\347\224\250\346\210\267\345\220\215", nullptr));
        
        label_4->setText(QCoreApplication::translate("Form", "\u7528\u6237\u540d", nullptr));
        label_7->setText(QCoreApplication::translate("Form", "\u4fee\u6539\u6743\u9650", nullptr));
        label_8->setText(QCoreApplication::translate("Form", "\u6743\u9650", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Form", "\345\210\267\346\226\260", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "\345\242\236\345\212\240\347\224\250\346\210\267", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Form", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Form", "\u4fee\u6539\u7528\u6237\u6743\u9650", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Form", "\344\277\256\346\224\271\347\224\250\346\210\267", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Form", "\347\224\250\346\210\267\347\231\273\345\275\225\350\256\260\345\275\225", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Form","\u589e\u52a0\u7528\u6237", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Form","\u5220\u9664\u7528\u6237",nullptr));
        pushButton_10->setText(QCoreApplication::translate("Form","\u786e\u8ba4",nullptr));
    } // retranslateUi

    void shuaxing_1(){
        tableWidget_3->clear();
        int currentRowCount = tableWidget_3->rowCount();
        tableWidget_3->setRowCount(0);
        tableWidget_3->setColumnCount(0);
        tableWidget_3->setColumnCount(3);
        loadData();



    }
    void shuaxing_2(){
        tableWidget_4->clear();
        int currentRowCount = tableWidget_4->rowCount();
        tableWidget_4->setRowCount(0);
        tableWidget_4->setColumnCount(0);
        tableWidget_4->setColumnCount(3);
        loadData_1();
    }
    void shuaxing_3(){
        tableWidget_5->clear();
        int currentRowCount = tableWidget_5->rowCount();
        tableWidget_5->setRowCount(0);
        tableWidget_5->setColumnCount(0);
        tableWidget_5->setColumnCount(5);
        loadData_3();
    }
    void loadData_1() {


        QSqlQuery query("SELECT id, username,password,ypwd FROM Table_3");
        int row = 0;

        // 设置表格列数

        tableWidget_4->setColumnCount(3);
        tableWidget_4->setHorizontalHeaderLabels(QStringList() << "\u9009\u62e9" << "ID" << "\u540d\u79f0");
        // 遍历查询结果
        while (query.next()) {
            tableWidget_4->insertRow(row);

            // 添加复选框
            QTableWidgetItem* checkItem = new QTableWidgetItem();
            checkItem->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
            checkItem->setCheckState(Qt::Unchecked);
            tableWidget_4->setItem(row, 0, checkItem);

            // 添加 ID 和名称
            tableWidget_4->setItem(row, 1, new QTableWidgetItem(query.value(0).toString()));
            tableWidget_4->setItem(row, 2, new QTableWidgetItem(query.value(1).toString()));
            row++;
        }


    }
    void deleteSelectedRows_2() {
        QSqlDatabase db = QSqlDatabase::database();
        QList<int> idsToDelete;

        // 收集需要删除的 ID
        for (int row = 0; row < tableWidget_4->rowCount(); ++row) {
            QTableWidgetItem* checkItem = tableWidget_4->item(row, 0);
            if (checkItem && checkItem->checkState() == Qt::Checked) {
                int id = tableWidget_4->item(row, 1)->text().toInt();
                idsToDelete.append(id);
            }
        }

        // 删除选中的记录
        if (!idsToDelete.isEmpty()) {
            QSqlQuery query(db);

            QString newPassword = "123456";
            query.prepare("UPDATE Table_3 SET Password = :password ,ypwd = :ypwd WHERE id = :id"); // 替换成你的表名
            for (int id : idsToDelete) {



                // 哈希新密码
                QString hashedNewPassword = QCryptographicHash::hash(newPassword.toUtf8(), QCryptographicHash::Sha256).toHex();
                query.bindValue(":id", id);
                query.bindValue(":password", hashedNewPassword);
                query.bindValue(":ypwd", newPassword);


                if (!query.exec()) {
                    qDebug() << "Delete failed:" << query.lastError().text();
                }
            }

            tableWidget_4->clear();
            loadData_1();
        }
        else {
            QMessageBox::information(this, "信息", "未选择任何项进行删除");
        }
    }

    void loadData() {


        QSqlQuery query("SELECT id, username FROM Table_3");
        int row = 0;

        // 设置表格列数

        tableWidget_3->setColumnCount(3);
        tableWidget_3->setHorizontalHeaderLabels(QStringList() << "\u9009\u62e9" << "ID" << "\u540d\u79f0");
        // 遍历查询结果
        while (query.next()) {
            tableWidget_3->insertRow(row);

            // 添加复选框
            QTableWidgetItem* checkItem = new QTableWidgetItem();
            checkItem->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
            checkItem->setCheckState(Qt::Unchecked);
            tableWidget_3->setItem(row, 0, checkItem);

            // 添加 ID 和名称
            tableWidget_3->setItem(row, 1, new QTableWidgetItem(query.value(0).toString()));
            tableWidget_3->setItem(row, 2, new QTableWidgetItem(query.value(1).toString()));
            row++;
        }


    }
    void deleteSelectedRows() {
        QSqlDatabase db = QSqlDatabase::database();
        QList<int> idsToDelete;

        // 收集需要删除的 ID
        for (int row = 0; row < tableWidget_3->rowCount(); ++row) {
            QTableWidgetItem* checkItem = tableWidget_3->item(row, 0);
            if (checkItem && checkItem->checkState() == Qt::Checked) {
                int id = tableWidget_3->item(row, 1)->text().toInt();
                idsToDelete.append(id);
            }
        }

        // 删除选中的记录
        if (!idsToDelete.isEmpty()) {
            QSqlQuery query(db);
            query.prepare("DELETE FROM Table_3 WHERE id = :id"); // 替换成你的表名

            for (int id : idsToDelete) {
                query.bindValue(":id", id);
                if (!query.exec()) {
                    qDebug() << "Delete failed:" << query.lastError().text();
                }
            }

            // 刷新表格数据
            tableWidget_3->clear();
            loadData();
        }
        else {
            QMessageBox::information(this, "信息", "未选择任何项进行删除");
        }
    }
    void loadData_3() {


        QSqlQuery query("SELECT id, username,quanxian,type FROM Table_3");
        int row = 0;

        // 设置表格列数

        tableWidget_5->setColumnCount(3);
        tableWidget_5->setHorizontalHeaderLabels(QStringList() << "\u9009\u62e9" << "ID" << "\u540d\u79f0"<<"quanxian"<<"type");
        // 遍历查询结果
        while (query.next()) {
            tableWidget_5->insertRow(row);

            // 添加复选框
            QTableWidgetItem* checkItem = new QTableWidgetItem();
            checkItem->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
            checkItem->setCheckState(Qt::Unchecked);
            tableWidget_5->setItem(row, 0, checkItem);

            // 添加 ID 和名称
            tableWidget_5->setItem(row, 1, new QTableWidgetItem(query.value(0).toString()));
            tableWidget_5->setItem(row, 2, new QTableWidgetItem(query.value(1).toString()));
            row++;
        }


    }
    void xiugai_3() {
        QSqlDatabase db = QSqlDatabase::database();
        QList<int> idsToDelete;

        // 收集需要删除的 ID
        for (int row = 0; row < tableWidget_5->rowCount(); ++row) {
            QTableWidgetItem* checkItem = tableWidget_5->item(row, 0);
            if (checkItem && checkItem->checkState() == Qt::Checked) {
                int id = tableWidget_5->item(row, 1)->text().toInt();
                idsToDelete.append(id);
            }
        }

        // 删除选中的记录
        if (!idsToDelete.isEmpty()) {
            QSqlQuery query(db);
            QString quanxian = comboBox_4->currentText();
            QString type = comboBox_5->currentText();
            query.prepare("UPDATE Table_3 SET quanxian = :quanxian ,type = :type WHERE id = :id"); // 替换成你的表名
            for (int id : idsToDelete) {


                query.bindValue(":id", id);
                query.bindValue(":quanxian",quanxian);
                query.bindValue(":type",type);


                if (!query.exec()) {
                    qDebug() << "Delete failed:" << query.lastError().text();
                }
            }

            tableWidget_5->clear();
            loadData_3();
        }
        else {
            QMessageBox::information(this, "信息", "未选择任何项进行删除");
        }
    }
    void shuaxing(){
        QSqlDatabase db = QSqlDatabase::database();
        QSqlTableModel* model = new QSqlTableModel(this, db);
        model->setTable("Table_3"); // 替换为实际的表名
        model->select(); // 加载数据



        class CustomProxyModel : public QIdentityProxyModel
        {
        public:
            CustomProxyModel(QObject *parent = nullptr) : QIdentityProxyModel(parent) {}

            QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override
            {
                if (index.column() == passwordColumnIndex && role == Qt::DisplayRole)
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
    void show_add_ui()
    {
        tabWidget->show();
        tabWidget_2->hide();
        tabWidget_4->hide();
        widget_5->hide();
        tabWidget_3->hide();

    }

    void show_Check_ui()
    {
        tabWidget->hide();
        tabWidget_2->hide();
        tabWidget_3->hide();
        tabWidget_4 ->show();
        widget_5->hide();
    }
    void show_record_ui()
    {
        shuaxing();
        tabWidget->hide();
        tabWidget_2->hide();       
        tabWidget_4->hide();
        widget_5->show();
        tabWidget_3->hide();

    }
    void show_xiugai_ui() {
        tabWidget->hide();
        tabWidget_2->hide();

        tabWidget_3->show();
        widget_5->hide();
        tabWidget_4->hide();
    }
    void show_delete_ui() {
        tabWidget->hide();
        tabWidget_2->show();

        tabWidget_4->hide();
        widget_5->hide();
        tabWidget_3->hide();
    }




    void check_user() {
        QSqlDatabase db = QSqlDatabase::database();
        if (db.isValid()) {
            QSqlQuery query(db);
            query.exec("SELECT username,password,time,quanxian,type FROM Table_3");
            while (query.next()) {
                qDebug() << query.value(0).toString() << query.value(1).toString() << query.value(2).toString() << query.value(3).toString();
            }
        }
    }
    void add_user() {
        QString username = lineEdit->text();
        QString password = "123456";
        QString quanxian = comboBox_3->currentText();
        QString hashedPassword = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();
        QDateTime registrationTime = QDateTime::currentDateTime();
        QSqlDatabase db = QSqlDatabase::database();
        QSqlQuery query(db);

        // 检查是否存在重复的用户名
        query.prepare("SELECT COUNT(*) FROM Table_3 WHERE username =?");
        query.addBindValue(username);
        query.exec();
        if (query.next()) {
            int count = query.value(0).toInt();
            if (count > 0) {
                QMessageBox::warning(this, "Error", "Username already exists.");
                return;
            }
        }

        // 如果没有重复，则插入新用户
        query.prepare("INSERT INTO Table_3 (username, password,time,ypwd,quanxian) VALUES (?,?,?,?,?)");
        query.addBindValue(username);
        query.addBindValue(hashedPassword);
        query.addBindValue(registrationTime.toString("yyyy-MM-dd HH:mm:ss"));
        query.addBindValue(password);
        query.addBindValue(quanxian);
        if (query.exec()) {
            QMessageBox::information(this, "Success", "User added successfully!");
        } else {
            QMessageBox::warning(this, "Error", "Failed to add user: " + query.lastError().text());
        }
    }
    void delete_user() {
        QString username = lineEdit_3->text();
        QSqlDatabase db = QSqlDatabase::database();
        if (db.isValid()) {
            QSqlQuery query(db);
            query.prepare("DELETE FROM Table_3 WHERE username =?");
            query.addBindValue(username);
            if (query.exec()) {
                QMessageBox::information(this, "Success", "User deleted successfully!");
            }
            else {
                QMessageBox::warning(this, "Error", "Failed to delete user: " + query.lastError().text());
            }
        }
    }
    bool updateUserPassword(QSqlDatabase& db, const QString& username) {

        QString newPassword = "123456";
        // 哈希新密码
        QString hashedNewPassword = QCryptographicHash::hash(newPassword.toUtf8(), QCryptographicHash::Sha256).toHex();

        // 更新密码SQL语句
        QSqlQuery query(db);
        QString sql = "UPDATE Table_3 SET Password = :password ,ypwd = :ypwd WHERE username = :username";
        query.prepare(sql);
        query.bindValue(":password", hashedNewPassword);
        query.bindValue(":username", username);
        query.bindValue(":ypwd", newPassword);

        if (!query.exec()) {
            qDebug() << "Error: Failed to update password." << query.lastError().text();
            return false;
        }

        return true;
    }

    void updatePassword() {
        QSqlDatabase db = QSqlDatabase::database();
        if (db.isValid()) {
            QString username = lineEdit_5->text();  // 假设用户名输入框是lineEdit
            

            if (updateUserPassword(db, username)) {
                QMessageBox::information(nullptr, "Update Password", "Password updated successfully!");
            }
            else {
                QMessageBox::warning(nullptr, "Update Password", "Failed to update password. Please check your old password.");
            }
        }
    }
    bool setQuanxian(QString username, QString quanxian,QString type) {
        QSqlDatabase db = QSqlDatabase::database();
        if (db.isValid()) {
            QSqlQuery query(db);
            QString sql = "UPDATE Table_3 SET quanxian = :quanxian,type = :type WHERE username = :username";
            query.prepare(sql);
            query.bindValue(":quanxian", quanxian);
            query.bindValue(":username", username);
            query.bindValue(":type", type);

            if (!query.exec()) {
                qDebug() << "Error: Failed to set quanxian." << query.lastError().text();
                return false;
            }

            return true;
        }
    }

    void quanxian() {
        QSqlDatabase db = QSqlDatabase::database();
            if (db.isValid()) {
                QString username = lineEdit_4->text();
                QString quanxian = comboBox->currentText();
                QString type = comboBox_2->currentText();
                if (setQuanxian(username, quanxian,type)) {
                    QMessageBox::information(nullptr, "Set Quanxian", "Quanxian set successfully!");
                }

                else {
                    QMessageBox::warning(nullptr, "Set Quanxian", "Failed to set quanxian. Please check your username.");
                }

            }

    }



 private:
    UI_Form* uiForm; // 声明一个指向UI_Form的指针

};

namespace Ui {
    class Form2: public UI_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MANAGERIBKEQ_H
