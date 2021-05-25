/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonLogin;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonRegister;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editUsername;
    QLabel *label_2;
    QLineEdit *editPassword;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(315, 254);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        Login->setFont(font);
        Login->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(Login);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(38, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        buttonLogin = new QPushButton(Login);
        buttonLogin->setObjectName(QString::fromUtf8("buttonLogin"));
        buttonLogin->setFont(font);
        buttonLogin->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(buttonLogin, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(38, 38, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        buttonRegister = new QPushButton(Login);
        buttonRegister->setObjectName(QString::fromUtf8("buttonRegister"));

        gridLayout_2->addWidget(buttonRegister, 1, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(38, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 4, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editUsername = new QLineEdit(Login);
        editUsername->setObjectName(QString::fromUtf8("editUsername"));
        editUsername->setMinimumSize(QSize(0, 26));

        gridLayout->addWidget(editUsername, 0, 1, 1, 1);

        label_2 = new QLabel(Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        editPassword = new QLineEdit(Login);
        editPassword->setObjectName(QString::fromUtf8("editPassword"));
        editPassword->setMinimumSize(QSize(0, 26));
        QFont font1;
        font1.setPointSize(8);
        editPassword->setFont(font1);
        editPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(editPassword, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 5);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", nullptr));
        buttonLogin->setText(QApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        buttonRegister->setText(QApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        label->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QApplication::translate("Login", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
