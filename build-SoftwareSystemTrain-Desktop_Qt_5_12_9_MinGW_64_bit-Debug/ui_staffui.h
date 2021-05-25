/********************************************************************************
** Form generated from reading UI file 'staffui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFUI_H
#define UI_STAFFUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StaffUi
{
public:
    QGridLayout *gridLayout_6;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *PushButtonViewReport;
    QPushButton *pushButtonViewInventory;
    QPushButton *pushButtonMaterialDamageReport;
    QPushButton *pushButtonMaterialOrder;
    QPushButton *pushButtonFinanceAnalyze;
    QPushButton *pushButtonStaffManage;
    QPushButton *pushButtonInventoryManage;
    QSpacerItem *verticalSpacer;
    QPushButton *PushButtonExit;
    QStackedWidget *stackedWidget;
    QWidget *pageMain;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonMainOrder;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *buttonMainClear;
    QSpacerItem *horizontalSpacer_5;
    QListWidget *listWidgetMain;
    QLabel *labelMainPriceSum;
    QWidget *pageViewReport;
    QGridLayout *gridLayout;
    QTableWidget *tableViewReport;
    QWidget *pageViewInventory;
    QGridLayout *gridLayout_3;
    QTableWidget *tableViewInventory;
    QWidget *pageMaterialDamageReport;
    QGridLayout *gridLayout_9;
    QSpacerItem *horizontalSpacer_7;
    QListWidget *listWidgetDamage;
    QPushButton *buttonDamageOrder;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *buttonDamageClear;
    QWidget *pageMaterialOrder;
    QGridLayout *gridLayout_7;
    QLabel *labelCheckNum;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLabel *label;
    QPushButton *buttonIngredientOrderSumbit;
    QDoubleSpinBox *editIngredientMoney;
    QLabel *label_3;
    QSpinBox *editIngredientNum;
    QPushButton *buttonIngredientNumCheck;
    QLineEdit *editIngredientName;
    QSpacerItem *horizontalSpacer;
    QWidget *pageFinanceAnalyze;
    QGridLayout *gridLayout_4;
    QTableWidget *tableFinanceAnalyze;
    QWidget *pageStaffManage;
    QGridLayout *gridLayout_5;
    QPushButton *buttonStaffAdd;
    QPushButton *buttonStaffDelete;
    QPushButton *buttonStaffSubmit;
    QPushButton *buttonStaffCancel;
    QTableView *tableStaffManage;
    QWidget *pageInventoryManage;
    QGridLayout *gridLayout_2;
    QPushButton *buttonInventoryAdd;
    QPushButton *buttonInventoryDelete;
    QPushButton *buttonInventorySubmit;
    QPushButton *buttonInventoryCancel;
    QTableView *tableInventoryManage;

    void setupUi(QWidget *StaffUi)
    {
        if (StaffUi->objectName().isEmpty())
            StaffUi->setObjectName(QString::fromUtf8("StaffUi"));
        StaffUi->resize(808, 594);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        StaffUi->setFont(font);
        gridLayout_6 = new QGridLayout(StaffUi);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        widget_5 = new QWidget(StaffUi);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        verticalLayout = new QVBoxLayout(widget_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(widget_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        PushButtonViewReport = new QPushButton(widget_5);
        PushButtonViewReport->setObjectName(QString::fromUtf8("PushButtonViewReport"));

        verticalLayout->addWidget(PushButtonViewReport);

        pushButtonViewInventory = new QPushButton(widget_5);
        pushButtonViewInventory->setObjectName(QString::fromUtf8("pushButtonViewInventory"));

        verticalLayout->addWidget(pushButtonViewInventory);

        pushButtonMaterialDamageReport = new QPushButton(widget_5);
        pushButtonMaterialDamageReport->setObjectName(QString::fromUtf8("pushButtonMaterialDamageReport"));

        verticalLayout->addWidget(pushButtonMaterialDamageReport);

        pushButtonMaterialOrder = new QPushButton(widget_5);
        pushButtonMaterialOrder->setObjectName(QString::fromUtf8("pushButtonMaterialOrder"));

        verticalLayout->addWidget(pushButtonMaterialOrder);

        pushButtonFinanceAnalyze = new QPushButton(widget_5);
        pushButtonFinanceAnalyze->setObjectName(QString::fromUtf8("pushButtonFinanceAnalyze"));

        verticalLayout->addWidget(pushButtonFinanceAnalyze);

        pushButtonStaffManage = new QPushButton(widget_5);
        pushButtonStaffManage->setObjectName(QString::fromUtf8("pushButtonStaffManage"));

        verticalLayout->addWidget(pushButtonStaffManage);

        pushButtonInventoryManage = new QPushButton(widget_5);
        pushButtonInventoryManage->setObjectName(QString::fromUtf8("pushButtonInventoryManage"));

        verticalLayout->addWidget(pushButtonInventoryManage);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        PushButtonExit = new QPushButton(widget_5);
        PushButtonExit->setObjectName(QString::fromUtf8("PushButtonExit"));

        verticalLayout->addWidget(PushButtonExit);


        gridLayout_6->addWidget(widget_5, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(StaffUi);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageMain = new QWidget();
        pageMain->setObjectName(QString::fromUtf8("pageMain"));
        gridLayout_8 = new QGridLayout(pageMain);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalSpacer_3 = new QSpacerItem(159, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        buttonMainOrder = new QPushButton(pageMain);
        buttonMainOrder->setObjectName(QString::fromUtf8("buttonMainOrder"));

        gridLayout_8->addWidget(buttonMainOrder, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(159, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_4, 2, 2, 1, 1);

        buttonMainClear = new QPushButton(pageMain);
        buttonMainClear->setObjectName(QString::fromUtf8("buttonMainClear"));

        gridLayout_8->addWidget(buttonMainClear, 2, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(159, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_5, 2, 4, 1, 1);

        listWidgetMain = new QListWidget(pageMain);
        listWidgetMain->setObjectName(QString::fromUtf8("listWidgetMain"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        listWidgetMain->setFont(font1);

        gridLayout_8->addWidget(listWidgetMain, 0, 0, 1, 5);

        labelMainPriceSum = new QLabel(pageMain);
        labelMainPriceSum->setObjectName(QString::fromUtf8("labelMainPriceSum"));

        gridLayout_8->addWidget(labelMainPriceSum, 1, 0, 1, 5);

        stackedWidget->addWidget(pageMain);
        pageViewReport = new QWidget();
        pageViewReport->setObjectName(QString::fromUtf8("pageViewReport"));
        gridLayout = new QGridLayout(pageViewReport);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableViewReport = new QTableWidget(pageViewReport);
        if (tableViewReport->columnCount() < 5)
            tableViewReport->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableViewReport->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableViewReport->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableViewReport->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableViewReport->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableViewReport->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableViewReport->setObjectName(QString::fromUtf8("tableViewReport"));

        gridLayout->addWidget(tableViewReport, 0, 0, 1, 1);

        stackedWidget->addWidget(pageViewReport);
        pageViewInventory = new QWidget();
        pageViewInventory->setObjectName(QString::fromUtf8("pageViewInventory"));
        gridLayout_3 = new QGridLayout(pageViewInventory);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableViewInventory = new QTableWidget(pageViewInventory);
        if (tableViewInventory->columnCount() < 2)
            tableViewInventory->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableViewInventory->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableViewInventory->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        tableViewInventory->setObjectName(QString::fromUtf8("tableViewInventory"));

        gridLayout_3->addWidget(tableViewInventory, 0, 0, 1, 1);

        stackedWidget->addWidget(pageViewInventory);
        pageMaterialDamageReport = new QWidget();
        pageMaterialDamageReport->setObjectName(QString::fromUtf8("pageMaterialDamageReport"));
        gridLayout_9 = new QGridLayout(pageMaterialDamageReport);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        horizontalSpacer_7 = new QSpacerItem(159, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        listWidgetDamage = new QListWidget(pageMaterialDamageReport);
        listWidgetDamage->setObjectName(QString::fromUtf8("listWidgetDamage"));
        listWidgetDamage->setFont(font1);

        gridLayout_9->addWidget(listWidgetDamage, 0, 0, 1, 5);

        buttonDamageOrder = new QPushButton(pageMaterialDamageReport);
        buttonDamageOrder->setObjectName(QString::fromUtf8("buttonDamageOrder"));

        gridLayout_9->addWidget(buttonDamageOrder, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(159, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(159, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_8, 1, 4, 1, 1);

        buttonDamageClear = new QPushButton(pageMaterialDamageReport);
        buttonDamageClear->setObjectName(QString::fromUtf8("buttonDamageClear"));

        gridLayout_9->addWidget(buttonDamageClear, 1, 3, 1, 1);

        stackedWidget->addWidget(pageMaterialDamageReport);
        pageMaterialOrder = new QWidget();
        pageMaterialOrder->setObjectName(QString::fromUtf8("pageMaterialOrder"));
        gridLayout_7 = new QGridLayout(pageMaterialOrder);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        labelCheckNum = new QLabel(pageMaterialOrder);
        labelCheckNum->setObjectName(QString::fromUtf8("labelCheckNum"));

        gridLayout_7->addWidget(labelCheckNum, 3, 0, 1, 6);

        horizontalSpacer_2 = new QSpacerItem(210, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 6, 0, 1, 2);

        label_2 = new QLabel(pageMaterialOrder);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_7->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(pageMaterialOrder);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_7->addWidget(label, 0, 0, 1, 1);

        buttonIngredientOrderSumbit = new QPushButton(pageMaterialOrder);
        buttonIngredientOrderSumbit->setObjectName(QString::fromUtf8("buttonIngredientOrderSumbit"));

        gridLayout_7->addWidget(buttonIngredientOrderSumbit, 6, 2, 1, 2);

        editIngredientMoney = new QDoubleSpinBox(pageMaterialOrder);
        editIngredientMoney->setObjectName(QString::fromUtf8("editIngredientMoney"));
        editIngredientMoney->setMaximum(99999999.989999994635582);

        gridLayout_7->addWidget(editIngredientMoney, 2, 1, 1, 4);

        label_3 = new QLabel(pageMaterialOrder);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_7->addWidget(label_3, 2, 0, 1, 1);

        editIngredientNum = new QSpinBox(pageMaterialOrder);
        editIngredientNum->setObjectName(QString::fromUtf8("editIngredientNum"));
        editIngredientNum->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        editIngredientNum->setMinimum(0);
        editIngredientNum->setMaximum(999999);
        editIngredientNum->setValue(0);

        gridLayout_7->addWidget(editIngredientNum, 1, 1, 1, 4);

        buttonIngredientNumCheck = new QPushButton(pageMaterialOrder);
        buttonIngredientNumCheck->setObjectName(QString::fromUtf8("buttonIngredientNumCheck"));

        gridLayout_7->addWidget(buttonIngredientNumCheck, 0, 5, 1, 1);

        editIngredientName = new QLineEdit(pageMaterialOrder);
        editIngredientName->setObjectName(QString::fromUtf8("editIngredientName"));

        gridLayout_7->addWidget(editIngredientName, 0, 1, 1, 4);

        horizontalSpacer = new QSpacerItem(236, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 6, 4, 1, 2);

        stackedWidget->addWidget(pageMaterialOrder);
        pageFinanceAnalyze = new QWidget();
        pageFinanceAnalyze->setObjectName(QString::fromUtf8("pageFinanceAnalyze"));
        gridLayout_4 = new QGridLayout(pageFinanceAnalyze);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tableFinanceAnalyze = new QTableWidget(pageFinanceAnalyze);
        if (tableFinanceAnalyze->columnCount() < 3)
            tableFinanceAnalyze->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableFinanceAnalyze->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableFinanceAnalyze->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableFinanceAnalyze->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        tableFinanceAnalyze->setObjectName(QString::fromUtf8("tableFinanceAnalyze"));

        gridLayout_4->addWidget(tableFinanceAnalyze, 0, 0, 1, 1);

        stackedWidget->addWidget(pageFinanceAnalyze);
        pageStaffManage = new QWidget();
        pageStaffManage->setObjectName(QString::fromUtf8("pageStaffManage"));
        gridLayout_5 = new QGridLayout(pageStaffManage);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        buttonStaffAdd = new QPushButton(pageStaffManage);
        buttonStaffAdd->setObjectName(QString::fromUtf8("buttonStaffAdd"));

        gridLayout_5->addWidget(buttonStaffAdd, 1, 0, 1, 1);

        buttonStaffDelete = new QPushButton(pageStaffManage);
        buttonStaffDelete->setObjectName(QString::fromUtf8("buttonStaffDelete"));

        gridLayout_5->addWidget(buttonStaffDelete, 1, 1, 1, 1);

        buttonStaffSubmit = new QPushButton(pageStaffManage);
        buttonStaffSubmit->setObjectName(QString::fromUtf8("buttonStaffSubmit"));

        gridLayout_5->addWidget(buttonStaffSubmit, 1, 2, 1, 1);

        buttonStaffCancel = new QPushButton(pageStaffManage);
        buttonStaffCancel->setObjectName(QString::fromUtf8("buttonStaffCancel"));

        gridLayout_5->addWidget(buttonStaffCancel, 1, 3, 1, 1);

        tableStaffManage = new QTableView(pageStaffManage);
        tableStaffManage->setObjectName(QString::fromUtf8("tableStaffManage"));

        gridLayout_5->addWidget(tableStaffManage, 0, 0, 1, 4);

        stackedWidget->addWidget(pageStaffManage);
        pageInventoryManage = new QWidget();
        pageInventoryManage->setObjectName(QString::fromUtf8("pageInventoryManage"));
        gridLayout_2 = new QGridLayout(pageInventoryManage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonInventoryAdd = new QPushButton(pageInventoryManage);
        buttonInventoryAdd->setObjectName(QString::fromUtf8("buttonInventoryAdd"));

        gridLayout_2->addWidget(buttonInventoryAdd, 1, 0, 1, 1);

        buttonInventoryDelete = new QPushButton(pageInventoryManage);
        buttonInventoryDelete->setObjectName(QString::fromUtf8("buttonInventoryDelete"));

        gridLayout_2->addWidget(buttonInventoryDelete, 1, 1, 1, 1);

        buttonInventorySubmit = new QPushButton(pageInventoryManage);
        buttonInventorySubmit->setObjectName(QString::fromUtf8("buttonInventorySubmit"));

        gridLayout_2->addWidget(buttonInventorySubmit, 1, 2, 1, 1);

        buttonInventoryCancel = new QPushButton(pageInventoryManage);
        buttonInventoryCancel->setObjectName(QString::fromUtf8("buttonInventoryCancel"));

        gridLayout_2->addWidget(buttonInventoryCancel, 1, 3, 1, 1);

        tableInventoryManage = new QTableView(pageInventoryManage);
        tableInventoryManage->setObjectName(QString::fromUtf8("tableInventoryManage"));

        gridLayout_2->addWidget(tableInventoryManage, 0, 0, 1, 4);

        stackedWidget->addWidget(pageInventoryManage);

        gridLayout_6->addWidget(stackedWidget, 0, 1, 1, 1);


        retranslateUi(StaffUi);

        QMetaObject::connectSlotsByName(StaffUi);
    } // setupUi

    void retranslateUi(QWidget *StaffUi)
    {
        StaffUi->setWindowTitle(QApplication::translate("StaffUi", "Form", nullptr));
        pushButton->setText(QApplication::translate("StaffUi", "\344\270\273\350\217\234\345\215\225", nullptr));
        PushButtonViewReport->setText(QApplication::translate("StaffUi", "\346\237\245\347\234\213\346\212\245\350\241\250", nullptr));
        pushButtonViewInventory->setText(QApplication::translate("StaffUi", "\346\237\245\347\234\213\345\272\223\345\255\230", nullptr));
        pushButtonMaterialDamageReport->setText(QApplication::translate("StaffUi", "\347\211\251\346\226\231\346\212\245\346\215\237", nullptr));
        pushButtonMaterialOrder->setText(QApplication::translate("StaffUi", "\347\211\251\346\226\231\350\256\242\350\264\255", nullptr));
        pushButtonFinanceAnalyze->setText(QApplication::translate("StaffUi", "\350\264\242\345\212\241\345\210\206\346\236\220", nullptr));
        pushButtonStaffManage->setText(QApplication::translate("StaffUi", "\345\221\230\345\267\245\347\256\241\347\220\206", nullptr));
        pushButtonInventoryManage->setText(QApplication::translate("StaffUi", "\345\272\223\345\255\230\347\256\241\347\220\206", nullptr));
        PushButtonExit->setText(QApplication::translate("StaffUi", "\351\200\200\345\207\272", nullptr));
        buttonMainOrder->setText(QApplication::translate("StaffUi", "\347\202\271\345\215\225", nullptr));
        buttonMainClear->setText(QApplication::translate("StaffUi", "\346\270\205\347\251\272", nullptr));
        labelMainPriceSum->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableViewReport->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("StaffUi", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableViewReport->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("StaffUi", "name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableViewReport->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("StaffUi", "number", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableViewReport->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("StaffUi", "price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableViewReport->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("StaffUi", "date", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableViewInventory->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("StaffUi", "name", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableViewInventory->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("StaffUi", "number", nullptr));
        buttonDamageOrder->setText(QApplication::translate("StaffUi", "\346\212\245\346\215\237", nullptr));
        buttonDamageClear->setText(QApplication::translate("StaffUi", "\346\270\205\347\251\272", nullptr));
        labelCheckNum->setText(QString());
        label_2->setText(QApplication::translate("StaffUi", "\350\256\242\350\264\255\346\225\260\351\207\217", nullptr));
        label->setText(QApplication::translate("StaffUi", "\347\211\251\346\226\231\345\220\215\347\247\260", nullptr));
        buttonIngredientOrderSumbit->setText(QApplication::translate("StaffUi", "\347\241\256\345\256\232", nullptr));
        label_3->setText(QApplication::translate("StaffUi", "\350\256\242\350\264\255\351\207\221\351\242\235", nullptr));
        buttonIngredientNumCheck->setText(QApplication::translate("StaffUi", "\346\225\260\351\207\217\346\243\200\346\237\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableFinanceAnalyze->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("StaffUi", "income", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableFinanceAnalyze->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("StaffUi", "expense", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableFinanceAnalyze->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("StaffUi", "date", nullptr));
        buttonStaffAdd->setText(QApplication::translate("StaffUi", "\346\267\273\345\212\240", nullptr));
        buttonStaffDelete->setText(QApplication::translate("StaffUi", "\345\210\240\351\231\244", nullptr));
        buttonStaffSubmit->setText(QApplication::translate("StaffUi", "\346\217\220\344\272\244", nullptr));
        buttonStaffCancel->setText(QApplication::translate("StaffUi", "\345\217\226\346\266\210", nullptr));
        buttonInventoryAdd->setText(QApplication::translate("StaffUi", "\346\267\273\345\212\240", nullptr));
        buttonInventoryDelete->setText(QApplication::translate("StaffUi", "\345\210\240\351\231\244", nullptr));
        buttonInventorySubmit->setText(QApplication::translate("StaffUi", "\346\217\220\344\272\244", nullptr));
        buttonInventoryCancel->setText(QApplication::translate("StaffUi", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StaffUi: public Ui_StaffUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFUI_H
