#include "supervior.h"
#include "ui_supervior.h"

Supervior::Supervior(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Supervior)
{
    ui->setupUi(this);
}

Supervior::~Supervior()
{
    delete ui;
}
