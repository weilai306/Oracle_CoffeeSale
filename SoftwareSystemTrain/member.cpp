#include "member.h"

Member::Member()
{

}

void Member::setName(QString name)
{
    this->name=name;
}
void Member::setPassword(QString password)
{
    this->password=password;
}
void Member::setLevel(QString level)
{
    this->level=level;
}
void Member::setMsg(QString msg)
{
    this->msg=msg;
}

void Member::setId(QString id)
{
    this->id=id;
}

QString Member::getMsg()
{
    return this->msg;
}
QString Member::getPassword()
{
    return this->password;
}
QString Member::getLevel()
{
    return this->level;
}
QString Member::getName()
{
    return this->name;
}

QString Member::getID()
{
    return id;
}
