#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <basedao.h>
#include <member.h>
namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    void setBaseDao(Basedao* bs);
    void clearInput();
    void clearPassword();
signals:
    void clickRegister();
    void loggedin(Member m);
private slots:
    void on_buttonLogin_clicked();
    void on_buttonRegister_clicked();

private:
    Ui::Login *ui;
    Basedao* bs;
};

#endif // LOGIN_H
