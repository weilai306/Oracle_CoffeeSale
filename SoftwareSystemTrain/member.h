#ifndef MEMBER_H
#define MEMBER_H

#include <QString>
class Member
{
public:
    Member();
    void setName(QString name);
    void setPassword(QString password);
    void setLevel(QString level);
    void setMsg(QString msg);
    void setId(QString id);
    QString getMsg();
    QString getPassword();
    QString getLevel();
    QString getName();
    QString getID();
private:
    QString name;
    QString password;
    QString level;
    QString msg;
    QString id;
};

#endif // MEMBER_H
