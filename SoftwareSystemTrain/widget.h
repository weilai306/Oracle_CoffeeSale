#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <basedao.h>
#include <login.h>
#include <register.h>
#include <staffui.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void recvLoggedin(Member m);
    void recvRegister();
    void recvRegisteded(Member m);
    void recvRegiserBack();
    void recvStaffExit();
private:
    Ui::Widget *ui;
    Basedao* bs;
    Login* login;
    Register* regist;
    StaffUi* staff;
};
#endif // WIDGET_H
