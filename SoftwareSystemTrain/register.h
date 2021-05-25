#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include <basedao.h>
#include <member.h>
namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();
    void setBaseDao(Basedao* bs);
signals:
    void regitered(Member m);
    void clickback();
private slots:
    void on_buttonRegister_2_clicked();

    void on_buttonBack_clicked();

private:
    Ui::Register *ui;
    Basedao* bs;
};

#endif // REGISTER_H
