#include "basedao.h"
#include <QDateTime>
#include <QMessageBox>
Basedao::Basedao()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setPort(1521);
    db.setDatabaseName("orcl");
    db.setUserName("weilai");
    db.setPassword("weilai");
    bool ok = db.open();
    if (ok){
        qDebug()<<"ok";
    }
    else {
        qDebug()<<"failed connect";
        QMessageBox::information(NULL,"ERROR","Failed connect to the datebase");
    }
    stock=NULL;
    staff=NULL;
}


Member Basedao::getUser(QString userid)
{
    QString sql=QString("select * from member where member_ID = %1").arg(userid);
    Member m;
    QSqlQuery query;
    query.exec(sql);
    if(query.next())
    {
        m.setId(query.value(0).toString());
        m.setName(query.value(1).toString());
        m.setPassword(query.value(2).toString());
        m.setLevel(query.value(4).toString());
        m.setMsg(QString("success"));
    }
    else m.setMsg("error");
    return m;
}

bool Basedao::registerUser(Member m)
{
    QSqlQuery query;
    QDateTime dt=QDateTime::currentDateTime();
    QString date=dt.toString("yyyy-MM-dd");
    query.prepare("INSERT INTO member (member_ID,name, password, member_level,time) VALUES (:id,:username, :password, :level,to_date(:date,'yyyy-MM-dd'))");
    query.bindValue(":id",m.getID());
    query.bindValue(":username",m.getName());
    query.bindValue(":password",m.getPassword());
    query.bindValue(":level",m.getLevel());
    query.bindValue(":date",date);
    bool isOk=query.exec();
    return isOk;
}

QSqlQuery* Basedao::execQuery(QString sql)
{
    QSqlQuery* resQuery=new QSqlQuery;
    bool isOk=resQuery->exec(sql);
    if(isOk)
    {
        return resQuery;
    }
    return NULL;
}

QSqlTableModel *Basedao::getTableModelStock()
{
    if(stock==NULL)
    {
        stock=new MySqlTableModel();
        stock->setTable("STOCK");
        stock->setEditStrategy(QSqlTableModel::OnManualSubmit);
    }
    return stock;
}

QSqlTableModel *Basedao::getTableModelStaff()
{
    if(staff==NULL)
    {
        staff=new MySqlTableModel();
        staff->setTable("MEMBER");
        staff->setEditStrategy(QSqlTableModel::OnManualSubmit);
    }
    return staff;
}

QSqlTableModel *Basedao::getTableModelOrder()
{
    if(order==NULL)
    {
        order=new MySqlTableModel();
        order->setTable("order");
    }
    return staff;
}

int Basedao::getIngredientNum(QString name)
{
    QString sql=QString("select * from stock where ingredient_name = '%1'").arg(name);
    QSqlQuery query;
    query.exec(sql);
    if(query.next())
    {
        int num=query.value(1).toInt();
        return num;
    }
    return  -1;
}


bool Basedao::setIngresientNum(QString name,int num)
{
    if(num<0)
    {
        return false;
    }
    QSqlQuery query;
    QString sql=QString("update stock set ingredient_number= %1 where ingredient_name= '%2' ").arg(num).arg(name);
    bool ok=query.exec(sql);
    return ok;
}

bool Basedao::addNewIngredient(QString name, int num)
{
    QSqlQuery query;
    query.prepare("Insert into stock(ingredient_name,ingredient_number) values(:name,:num)");
    query.bindValue(":name",name);
    query.bindValue(":num",num);
    bool ok=query.exec();
    return ok;
}

bool Basedao::addNewOrder(QString name, int num, double price)
{
    if(price<=0||num<=0)
        return false;
    QSqlQuery query2;
    QString str="select max(orders_id) from orders";
    query2.exec(str);
    int orders_id=0;
    if(query2.next())
    {
        orders_id=query2.value(0).toInt()+1;
    }

    QDate date=QDate::currentDate();
    QSqlQuery query;
    query.prepare("Insert into orders(orders_id,ingredient_name,ingredient_number,price,time) values(:orders_id,:name,:num,:price,to_date(:date,'yyyy-MM-dd'))");
    query.bindValue(":orders_id",orders_id);
    query.bindValue(":name",name);
    query.bindValue(":num",num);
    query.bindValue(":price",price);
    query.bindValue(":date",date.toString("yyyy-MM-dd"));
    query.exec();
    return true;
}

double Basedao::getExpenseToday()
{
    QDate date=QDate::currentDate();
    QSqlQuery query;
    query.prepare("select expense from financialanalysis where to_char(time,'yyyy-mm-dd')= :date ");
    query.bindValue(":date",date.toString("yyyy-MM-dd"));
    query.exec();
    if(query.next())
    {
        return query.value(0).toDouble();
    }
    else return 0;
}

double Basedao::getIncomeToday()
{
    QDate date=QDate::currentDate();
    QSqlQuery query;
     query.prepare("select income from financialanalysis where to_char(time,'yyyy-mm-dd')= :date");
     query.bindValue(":date",date.toString("yyyy-MM-dd"));
    query.exec();
    if(query.next())
    {
        return query.value(0).toDouble();
    }
    else return 0;
}

bool Basedao::hasFinancialToday()
{
    QDate date=QDate::currentDate();
    QSqlQuery query;
    query.prepare("select * from financialanalysis where to_char(time,'yyyy-mm-dd')= :date");
    query.bindValue(":date",date.toString("yyyy-MM-dd"));
    query.exec();
    if(query.next())
    {
        return true;
    }
    return false;
}

bool Basedao::setExpenseToday(double price)
{
    if(this->hasFinancialToday()==false)
    {
        bool ok=this->addNewFinancialAnaReport(0,price);
        return ok;
    }
    else
    {
        QDate date=QDate::currentDate();
        QSqlQuery query;
        query.prepare("update financialanalysis set expense=:expense where to_char(time,'yyyy-mm-dd')= :date");
        query.bindValue(":expense",price);
        query.bindValue(":date",date.toString("yyyy-MM-dd"));
        bool ok=query.exec();
        return ok;
    }
    return false;
}

bool Basedao::setIncomeToday(double price)
{
    if(this->hasFinancialToday()==false)
    {
        bool ok=this->addNewFinancialAnaReport(price,0);
        return ok;
    }
    else
    {
        QDate date=QDate::currentDate();
        QSqlQuery query;
        query.prepare("update financialanalysis set income=:income where to_char(time,'yyyy-mm-dd')= :date");
        query.bindValue(":date",date.toString("yyyy-MM-dd"));
         query.bindValue(":income",price);
        query.exec();
        return true;
    }
    return false;
}

bool Basedao::addNewFinancialAnaReport(double income, double expense)
{
    if(income<0||expense<0)
    {
        return false;
    }
    QDate date=QDate::currentDate();
    QSqlQuery query;
    query.prepare("insert into financialanalysis(income,expense,time) values(:income,:expense,to_date(:date,'yyyy-mm-dd'))");
     query.bindValue(":date",date.toString("yyyy-MM-dd"));
    query.bindValue(":income",income);
    query.bindValue(":expense",expense);
    query.exec();
    return true;
}

bool Basedao::execStr(QString str)
{
    QSqlQuery query;
    bool ok=query.exec(str);
    return ok;
}

void Basedao::loadMenu(MainMenu *menu)
{
    QString sql="select * from menu";
    QSqlQuery query;
    MyMenuItem* item;
    QPixmap photo;
    query.exec(sql);
    while (query.next()) {
        item=new MyMenuItem;;
        QString name=query.value(1).toString();
        double price=query.value(3).toDouble();
        photo.loadFromData(query.value(4).toByteArray(),query.value(5).toString().toLatin1());
        item->setIcon(photo);
        item->setName(name);
        item->setPrice(price);
        menu->addItem(item);
    }
}



map<QString, int> *Basedao::getIngredientNumFromMenu(MainMenu *menu)
{
    map<QString,int >* m=new map<QString,int>();
    int size=menu->items.size();
    for(int i=0;i<size;i++)
    {
        QString product=menu->items[i]->getName();
        int orderNum=menu->items[i]->getNum();
        if(orderNum>0)
        {
            QString sql=QString("Select ingredient,contains from ingredient where name='%1'").arg(product);
            QSqlQuery query;
            query.exec(sql);
            while(query.next())
            {
                QString ingredientName=query.value(0).toString();
                int containNum=query.value(1).toInt();
                if(m->find(ingredientName)!=m->end())
                {
                    (*m)[ingredientName]=(*m)[ingredientName]+containNum;
                }
                else
                {
                    m->insert(pair<QString,int>(ingredientName,containNum));
                }
            }
        }
    }
    return m;
}

bool Basedao::canOredrMenu(MainMenu *menu)
{
    map<QString,int >* m=getIngredientNumFromMenu(menu);
    map<QString,int>::iterator ite;
    for(ite=m->begin();ite!=m->end();ite++)
    {
        QString ingredientName=ite->first;
        int needNum=ite->second;
        QString sql=QString("select ingredient_number from stock where ingredient_name='%1'").arg(ingredientName);
        QSqlQuery query;
        query.exec(sql);
        if(query.next())
        {
            int stockNum=query.value(0).toInt();
            if(stockNum<needNum)
            {
                qDebug()<<QString("stock num not enough ").arg(ingredientName);
                return false;
            }
        }
        else
        {
            qDebug()<<"not found ingredient_name from stock";
            return false;
        }
    }
    return true;
}

bool Basedao::orderMenu(MainMenu *menu)
{
    bool canOrder=canOredrMenu(menu);
    if(canOrder==false)
    {
        qDebug()<<"order cant order";
        return false;
    }
    //减少库存
    map<QString,int >* m=getIngredientNumFromMenu(menu);
    map<QString,int>::iterator ite;
    for(ite=m->begin();ite!=m->end();ite++)
    {
        QString ingredientName=ite->first;
        int needNum=ite->second;
        this->setIngresientNum(ingredientName,this->getIngredientNum(ingredientName)-needNum);
    }

    //添加销售
    for(uint i=0;i<menu->items.size();i++)
    {
        QString productName=menu->items[i]->getName();
        int productNum=menu->items[i]->getNum();
        double price=menu->items[i]->getSumPrice();
        if(productNum>0)
        {
            addOneSelles(productName,productNum,price);
        }
    }

    //添加income
    double income=menu->getSumPrice();
    bool ok=setIncomeToday(getIncomeToday()+income);
    return ok;
}

bool Basedao::orderDamage(MainMenu *menu)
{
    bool canOrder=canOredrMenu(menu);
    if(canOrder==false)
    {
        qDebug()<<"order cant order";
        return false;
    }
    //减少库存
    map<QString,int >* m=getIngredientNumFromMenu(menu);
    map<QString,int>::iterator ite;
    for(ite=m->begin();ite!=m->end();ite++)
    {
        QString ingredientName=ite->first;
        int needNum=ite->second;
        this->setIngresientNum(ingredientName,this->getIngredientNum(ingredientName)-needNum);
    }

    //添加销售
    for(uint i=0;i<menu->items.size();i++)
    {
        QString productName=menu->items[i]->getName();
        int productNum=menu->items[i]->getNum();
        double price=menu->items[i]->getSumPrice();
        if(productNum>0)
        {
            addOneSelles(productName,productNum,price);
        }
    }

    return true;
}

void Basedao::clearMenumoney(MainMenu *menu)
{
    for(uint i=0;i<menu->items.size();i++)
    {
        menu->items[i]->setPrice(0.00);
    }
}

bool Basedao::addOneSelles(QString name,int num,double price)
{
    QDate date=QDate::currentDate();

    QSqlQuery query2;
    QString sql2="select max(selles_id) from selles;";
    int selles_id=0;
    query2.exec(sql2);
    if(query2.next())
    {
        selles_id=query2.value(0).toInt()+1;
    }
    QSqlQuery query;
    query.prepare("insert into selles(selles_id,product_name,product_number,price,time) values(:selles_id,:name,:number,:price,to_date(:date,'yyyy-mm-dd'))");
    query.bindValue(":selles_id",selles_id);
    query.bindValue(":name",name);
    query.bindValue(":number",num);
    query.bindValue(":price",price);
    query.bindValue(":date",date.toString("yyyy-MM-dd"));
    bool isOk=query.exec();
    return isOk;
}

