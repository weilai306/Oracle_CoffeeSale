#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->hide();
    bs=new Basedao();
    login=new Login();
    staff=new StaffUi();
    regist=new Register();
    login->setBaseDao(bs);

    login->show();
    connect(login,&Login::clickRegister,this,&Widget::recvRegister);
    connect(login,&Login::loggedin,this,&Widget::recvLoggedin);
    connect(regist,&Register::regitered,this,&Widget::recvRegisteded);
    connect(regist,&Register::clickback,this,&Widget::recvRegiserBack);
    connect(staff,&StaffUi::staffExit,this,&Widget::recvStaffExit);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::recvLoggedin(Member m)
{
    qDebug()<<"Logged Success";
    login->hide();
    staff->show();
    staff->setBasedao(bs);
    Member* mm=new Member;
    *mm=m;
    staff->setUser(mm);
}

void Widget::recvRegister()
{
    login->hide();
    regist->show();
}

void Widget::recvRegisteded(Member m)
{
    regist->hide();
    login->show();
}

void Widget::recvRegiserBack()
{
    regist->hide();
    login->show();
}

void Widget::recvStaffExit()
{
    staff->hide();
    login->show();
    login->clearPassword();

}

