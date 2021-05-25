#include "register.h"
#include "ui_register.h"
#include <QMessageBox>
Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    setWindowTitle("注册");
    setWindowIcon(QIcon("coffee.ico"));
}

Register::~Register()
{
    delete ui;
}

void Register::setBaseDao(Basedao *bs)
{
    this->bs=bs;
}

void Register::on_buttonRegister_2_clicked()
{
    Member newm;
    QString userId;
    QString userName;
    QString password;
    QString level=QString("seller");//注册的新用户 默认权限为seller 需要在manager账户权限下提升其他用户账户权限
    userId=ui->editID->text();
    userName=ui->editName->text();
    password=ui->editPassword->text();
    if(ui->editConfirm->text()!=password)
    {
        QMessageBox::information(this,"ERROR","The two passwords are inconsistent");
        return;
    }
    newm.setId(userId);
    newm.setName(userName);
    newm.setPassword(password);
    newm.setLevel(level);

    bool isOk=bs->registerUser(newm);
    if(isOk)
    {
        QMessageBox::information(this,"SUCCESS","Register SUCCESS");
        emit(regitered(newm));
    }
    else
    {
        QMessageBox::information(this,"ERROR","Register failed:45");
    }
}

void Register::on_buttonBack_clicked()
{
    emit(clickback());
}
