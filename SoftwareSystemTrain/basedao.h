#ifndef BASEDAO_H
#define BASEDAO_H

#include<QSqlDriver>
#include<QSqlDatabase>
#include <QSqlQuery>
#include<QDebug>
#include <QString>
#include <string>
#include <member.h>
#include <vector>
#include <QSqlTableModel>
#include <mysqltablemodel.h>
#include <mymenuitem.h>
#include <mainmenu.h>
#include <map>
using namespace  std;
class Basedao
{
public:
    Basedao();
    Member getUser(QString username);
    bool registerUser(Member m);
    QSqlQuery* execQuery(QString sql);
    QSqlTableModel* getTableModelStock();
    QSqlTableModel* getTableModelStaff();
    QSqlTableModel* getTableModelOrder();
    int getIngredientNum(QString name);
    bool setIngresientNum(QString name,int num);
    bool addNewIngredient(QString name,int num);
    bool addNewOrder(QString name,int num,double money);
    double getExpenseToday();
    double getIncomeToday();
    bool hasFinancialToday();
    bool setExpenseToday(double price);
    bool setIncomeToday(double price);
    bool addNewFinancialAnaReport(double income,double expense);
    bool execStr(QString str);
    void loadMenu(MainMenu* menu);
    bool addOneSelles(QString name,int num,double price);
    map<QString,int>* getIngredientNumFromMenu(MainMenu* menu);
    bool canOredrMenu(MainMenu* menu);
    bool orderMenu(MainMenu* menu);
    bool orderDamage(MainMenu* menu);
    void clearMenumoney(MainMenu* menu);
private:
    QSqlTableModel * stock;
    QSqlTableModel * staff;
    QSqlTableModel * order;
};

#endif // BASEDAO_H
