#ifndef MYMENUITEM_H
#define MYMENUITEM_H

#include <QWidget>

namespace Ui {
class MyMenuItem;
}

class MyMenuItem : public QWidget
{
    Q_OBJECT

public:
    explicit MyMenuItem(QWidget *parent = nullptr);
    ~MyMenuItem();
    void setIcon(QPixmap photo);
    void setName(QString name);
    void setPrice(double price);
    QString getName();
    int getNum();

    void clear();
    double getSumPrice();
signals:
    void priceChange();
private slots:
    void on_buttonPurchase_clicked();

private:
    Ui::MyMenuItem *ui;
    double price;
    QString name;
};

#endif // MYMENUITEM_H
