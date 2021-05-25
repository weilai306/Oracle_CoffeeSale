/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QSplitter *splitter;
    QPushButton *buttonRegister_2;
    QPushButton *buttonBack;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editID;
    QLabel *label_4;
    QLineEdit *editName;
    QLabel *label_2;
    QLineEdit *editPassword;
    QLabel *label_3;
    QLineEdit *editConfirm;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(296, 267);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        Register->setFont(font);
        splitter = new QSplitter(Register);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 230, 271, 23));
        splitter->setOrientation(Qt::Horizontal);
        buttonRegister_2 = new QPushButton(splitter);
        buttonRegister_2->setObjectName(QString::fromUtf8("buttonRegister_2"));
        splitter->addWidget(buttonRegister_2);
        buttonBack = new QPushButton(splitter);
        buttonBack->setObjectName(QString::fromUtf8("buttonBack"));
        splitter->addWidget(buttonBack);
        layoutWidget = new QWidget(Register);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 271, 191));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editID = new QLineEdit(layoutWidget);
        editID->setObjectName(QString::fromUtf8("editID"));

        gridLayout->addWidget(editID, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        editName = new QLineEdit(layoutWidget);
        editName->setObjectName(QString::fromUtf8("editName"));

        gridLayout->addWidget(editName, 1, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        editPassword = new QLineEdit(layoutWidget);
        editPassword->setObjectName(QString::fromUtf8("editPassword"));
        editPassword->setMinimumSize(QSize(0, 26));
        QFont font1;
        font1.setPointSize(8);
        editPassword->setFont(font1);
        editPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(editPassword, 2, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        editConfirm = new QLineEdit(layoutWidget);
        editConfirm->setObjectName(QString::fromUtf8("editConfirm"));
        editConfirm->setMinimumSize(QSize(0, 26));
        editConfirm->setFont(font1);
        editConfirm->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(editConfirm, 3, 1, 1, 1);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Form", nullptr));
        buttonRegister_2->setText(QApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
        buttonBack->setText(QApplication::translate("Register", "\350\277\224\345\233\236", nullptr));
        label->setText(QApplication::translate("Register", "\347\224\250\346\210\267ID", nullptr));
        label_4->setText(QApplication::translate("Register", "\347\224\250\346\210\267\346\230\265\347\247\260", nullptr));
        label_2->setText(QApplication::translate("Register", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
