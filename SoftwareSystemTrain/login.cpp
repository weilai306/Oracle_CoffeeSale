#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowTitle("登录");
    setWindowIcon(QIcon("coffee.ico"));
}

Login::~Login()
{
    delete ui;
}

//设置连接对象
void Login::setBaseDao(Basedao *bs)
{
    this->bs=bs;
}

void Login::clearInput()
{
    ui->editUsername->setText("");
    ui->editPassword->setText("");
}

void Login::clearPassword()
{
    ui->editPassword->setText("");
}

//登录按钮事件
void Login::on_buttonLogin_clicked()
{
    QString username;
    QString password;
    username=ui->editUsername->text();
    password=ui->editPassword->text();
    Member m=bs->getUser(username);
    QString msg=m.getMsg();

    if(msg=="error"||password!=m.getPassword())
    {
        qDebug()<<m.getID()<<" "<<m.getName()<<" "<<m.getPassword();
        QMessageBox::information(this,"ERROR","ERROR:USER ID OR PASSWORD IS ERROR:34");
        return;
    }
    emit(loggedin(m));
}

//发出注册信号
void Login::on_buttonRegister_clicked()
{
    emit(clickRegister());
}
