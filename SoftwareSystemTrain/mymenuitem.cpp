#include "mymenuitem.h"
#include "ui_mymenuitem.h"
#include <QDebug>
MyMenuItem::MyMenuItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyMenuItem)
{
    ui->setupUi(this);
}

MyMenuItem::~MyMenuItem()
{
    delete ui;
}

void MyMenuItem::setIcon(QPixmap pixmap)
{
    ui->labelIcon->setPixmap(pixmap);
    ui->labelIcon->pixmap()->scaled(ui->labelIcon->size());
    ui->labelIcon->setScaledContents(true);
}

void MyMenuItem::setName(QString name)
{
    this->name=name;
    ui->labelName->setText(name);
}

void MyMenuItem::setPrice(double price)
{
    this->price=price;
    ui->labelPrice->setText(QString("￥ ")+QString::number(price));
}

QString MyMenuItem::getName()
{
    return name;
}

int MyMenuItem::getNum()
{
    return ui->editNum->value();
}

void MyMenuItem::clear()
{
    ui->editNum->setValue(0);
}

double MyMenuItem::getSumPrice()
{
    return price*ui->editNum->value();
}

void MyMenuItem::on_buttonPurchase_clicked()
{
    ui->editNum->setValue(ui->editNum->value()+1);
    emit(this->priceChange());
}
