/********************************************************************************
** Form generated from reading UI file 'mymenuitem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMENUITEM_H
#define UI_MYMENUITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMenuItem
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QSpinBox *editNum;
    QPushButton *buttonPurchase;
    QLabel *labelName;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelIcon;
    QLabel *labelPrice;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *MyMenuItem)
    {
        if (MyMenuItem->objectName().isEmpty())
            MyMenuItem->setObjectName(QString::fromUtf8("MyMenuItem"));
        MyMenuItem->resize(614, 113);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MyMenuItem->sizePolicy().hasHeightForWidth());
        MyMenuItem->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(MyMenuItem);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(30, 79, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        editNum = new QSpinBox(MyMenuItem);
        editNum->setObjectName(QString::fromUtf8("editNum"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editNum->sizePolicy().hasHeightForWidth());
        editNum->setSizePolicy(sizePolicy1);
        editNum->setReadOnly(true);
        editNum->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_2->addWidget(editNum, 0, 0, 1, 1);

        buttonPurchase = new QPushButton(MyMenuItem);
        buttonPurchase->setObjectName(QString::fromUtf8("buttonPurchase"));
        sizePolicy1.setHeightForWidth(buttonPurchase->sizePolicy().hasHeightForWidth());
        buttonPurchase->setSizePolicy(sizePolicy1);
        buttonPurchase->setMinimumSize(QSize(24, 24));
        buttonPurchase->setMaximumSize(QSize(24, 24));
        buttonPurchase->setFocusPolicy(Qt::ClickFocus);
        buttonPurchase->setContextMenuPolicy(Qt::DefaultContextMenu);
        buttonPurchase->setToolTipDuration(0);
        buttonPurchase->setAutoFillBackground(false);
        buttonPurchase->setStyleSheet(QString::fromUtf8("border-image: url(:/new/icon/d15.ico);"));

        gridLayout_2->addWidget(buttonPurchase, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 6, 1, 1);

        labelName = new QLabel(MyMenuItem);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        sizePolicy1.setHeightForWidth(labelName->sizePolicy().hasHeightForWidth());
        labelName->setSizePolicy(sizePolicy1);
        labelName->setMinimumSize(QSize(100, 30));
        labelName->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(labelName, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(133, 79, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        labelIcon = new QLabel(MyMenuItem);
        labelIcon->setObjectName(QString::fromUtf8("labelIcon"));
        sizePolicy1.setHeightForWidth(labelIcon->sizePolicy().hasHeightForWidth());
        labelIcon->setSizePolicy(sizePolicy1);
        labelIcon->setMinimumSize(QSize(95, 95));
        labelIcon->setMaximumSize(QSize(95, 95));
        labelIcon->setBaseSize(QSize(95, 95));
        labelIcon->setCursor(QCursor(Qt::ArrowCursor));

        gridLayout->addWidget(labelIcon, 0, 0, 1, 1);

        labelPrice = new QLabel(MyMenuItem);
        labelPrice->setObjectName(QString::fromUtf8("labelPrice"));
        sizePolicy1.setHeightForWidth(labelPrice->sizePolicy().hasHeightForWidth());
        labelPrice->setSizePolicy(sizePolicy1);
        labelPrice->setMinimumSize(QSize(100, 30));
        labelPrice->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(labelPrice, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 3, 1, 1);


        retranslateUi(MyMenuItem);

        QMetaObject::connectSlotsByName(MyMenuItem);
    } // setupUi

    void retranslateUi(QWidget *MyMenuItem)
    {
        MyMenuItem->setWindowTitle(QApplication::translate("MyMenuItem", "Form", nullptr));
        buttonPurchase->setText(QString());
        labelName->setText(QString());
        labelIcon->setText(QString());
        labelPrice->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyMenuItem: public Ui_MyMenuItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMENUITEM_H
