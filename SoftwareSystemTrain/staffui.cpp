#include "staffui.h"
#include "ui_staffui.h"
#include <QMessageBox>
StaffUi::StaffUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StaffUi)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("coffee.ico"));
    //ui->stackedWidget->setCurrentWidget(ui->pageMain);
}

StaffUi::~StaffUi()
{
    delete ui;
}

//设置数据库连接
void StaffUi::setBasedao(Basedao *bs)
{
    this->bs=bs;
    on_pushButton_clicked();
}

//根据员工级别设定可选功能
void StaffUi::setUser(Member *m)
{
    this->m=m;
    QString wel=QString("欢迎 %1:%2    Level: %3").arg(m->getID()).arg(m->getName()).arg(m->getLevel());
    setWindowTitle(wel);
    ui->pushButton->hide();//1
    ui->PushButtonViewReport->hide();//1
    ui->pushButtonViewInventory->hide();//2
    ui->pushButtonMaterialDamageReport->hide();//2
    ui->pushButtonMaterialOrder->hide();//2
    ui->pushButtonFinanceAnalyze->hide();//2
    ui->pushButtonStaffManage->hide();//3
    ui->pushButtonInventoryManage->hide();//3

    QString level=m->getLevel();
    int levelInt=0;
    if(level=="seller")
    {
        levelInt=1;
    }
    else if(level=="chief")
    {
        levelInt=2;
    }
    else if(level=="manager")
    {
        levelInt=3;
    }
    else
    {
        QMessageBox::information(this,"错误","错误权限，请联系管理员 level:"+level);
        levelInt=0;
        return;
    }
    if(levelInt>=1)
    {
         ui->pushButton->show();
         ui->PushButtonViewReport->show();//1
    }
    if(levelInt>=2)
    {
        ui->pushButtonViewInventory->show();//2
        ui->pushButtonMaterialDamageReport->show();//2
        ui->pushButtonMaterialOrder->show();//2
        ui->pushButtonFinanceAnalyze->show();//2
    }
    if(levelInt>=3)
    {
        ui->pushButtonStaffManage->show();//3
        ui->pushButtonInventoryManage->show();//3
    }
}



//查看库存选项
void StaffUi::on_pushButtonViewInventory_clicked()
{
    //查看orders；
    ui->stackedWidget->setCurrentWidget(ui->pageViewReport);
    QTableWidget* table=ui->tableViewReport;
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->setRowCount(0);
    QString sql="Select * from orders order by orders_id";
    QSqlQuery* query=bs->execQuery(sql);
    QTableWidgetItem* item0;
    QTableWidgetItem* item1;
    QTableWidgetItem* item2;
    QTableWidgetItem* item3;
    QTableWidgetItem* item4;
    table->clearContents();
    if(bs!=NULL)
    {
        while(query->next())
        {
            item0=new QTableWidgetItem;
            item1=new QTableWidgetItem;
            item2=new QTableWidgetItem;
            item3=new QTableWidgetItem;
            item4=new QTableWidgetItem;

            item0->setText(query->value(0).toString());
            item1->setText(query->value(1).toString());
            item2->setText(query->value(2).toString());
            item3->setText(query->value(3).toString());
            item4->setText(query->value(4).toDateTime().toString("yyyy-MM-dd"));

            table->setRowCount(table->rowCount()+1);
            table->setItem(table->rowCount()-1,0,item0);
            table->setItem(table->rowCount()-1,1,item1);
            table->setItem(table->rowCount()-1,2,item2);
            table->setItem(table->rowCount()-1,3,item3);
            table->setItem(table->rowCount()-1,4,item4);
        }
    }
}

//查看报表
void StaffUi::on_PushButtonViewReport_clicked()
{
    //查看selles；
    ui->stackedWidget->setCurrentWidget(ui->pageViewReport);
    QTableWidget* table=ui->tableViewReport;
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->setRowCount(0);
    QString sql="Select * from selles order by selles_id";
    QSqlQuery* query=bs->execQuery(sql);
    QTableWidgetItem* item0;
    QTableWidgetItem* item1;
    QTableWidgetItem* item2;
    QTableWidgetItem* item3;
    QTableWidgetItem* item4;
    table->clearContents();
    if(bs!=NULL)
    {
        while(query->next())
        {
            item0=new QTableWidgetItem;
            item1=new QTableWidgetItem;
            item2=new QTableWidgetItem;
            item3=new QTableWidgetItem;
            item4=new QTableWidgetItem;

            item0->setText(query->value(0).toString());
            item1->setText(query->value(1).toString());
            item2->setText(query->value(2).toString());
            item3->setText(query->value(3).toString());
            item4->setText(query->value(4).toDateTime().toString("yyyy-MM-dd"));

            table->setRowCount(table->rowCount()+1);
            table->setItem(table->rowCount()-1,0,item0);
            table->setItem(table->rowCount()-1,1,item1);
            table->setItem(table->rowCount()-1,2,item2);
            table->setItem(table->rowCount()-1,3,item3);
            table->setItem(table->rowCount()-1,4,item4);
        }
    }
}

//查看财务分析
void StaffUi::on_pushButtonFinanceAnalyze_clicked()
{
    //查看财务分析
    ui->stackedWidget->setCurrentWidget(ui->pageFinanceAnalyze);
    QTableWidget* table=ui->tableFinanceAnalyze;
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->setRowCount(0);
    QString sql="Select * from financialanalysis";
    QSqlQuery* query=bs->execQuery(sql);
    QTableWidgetItem* item0;
    QTableWidgetItem* item1;
    QTableWidgetItem* item2;

    table->clearContents();
    if(bs!=NULL)
    {
        while(query->next())
        {
            item0=new QTableWidgetItem;
            item1=new QTableWidgetItem;
            item2=new QTableWidgetItem;

            item0->setText(query->value(0).toString());
            item1->setText(query->value(1).toString());
            item2->setText(query->value(2).toDateTime().toString("yyyy-MM-dd"));

            table->setRowCount(table->rowCount()+1);
            table->setItem(table->rowCount()-1,0,item0);
            table->setItem(table->rowCount()-1,1,item1);
            table->setItem(table->rowCount()-1,2,item2);
        }
    }
}

//员工管理
void StaffUi::on_pushButtonStaffManage_clicked()
{
    QSqlTableModel* model;
    model=bs->getTableModelStaff();
    QWidget* widget=ui->pageStaffManage;
    QTableView* view=ui->tableStaffManage;
    ui->stackedWidget->setCurrentWidget(widget);
    view->setModel(model);
    view->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    view->horizontalHeader()->setSectionResizeMode(5,QHeaderView::ResizeToContents);
    model->select();
}


//员工管理-事务提交
void StaffUi::on_buttonStaffSubmit_clicked()
{
    QSqlTableModel* model=bs->getTableModelStaff();
    model->submitAll();
}

//员工管理-事务回滚
void StaffUi::on_buttonStaffCancel_clicked()
{
    QSqlTableModel* model=bs->getTableModelStaff();
    model->revertAll();
}

//员工管理-添加记录
void StaffUi::on_buttonStaffAdd_clicked()
{
    QSqlTableModel* model=bs->getTableModelStaff();
    QSqlRecord rerocd=model->record();
    model->insertRecord(model->rowCount(),rerocd);
}

//员工管理-删除记录
void StaffUi::on_buttonStaffDelete_clicked()
{
    QSqlTableModel* model=bs->getTableModelStaff();
    QTableView* view=ui->tableStaffManage;
    QItemSelectionModel* sModel=view->selectionModel();
    QModelIndexList indexList=sModel->selectedRows();
    for(int i=0;i<indexList.size();i++)
    {
        model->removeRow(indexList.at(i).row());
    }
}

//库存管理
void StaffUi::on_pushButtonInventoryManage_clicked()
{
    QSqlTableModel* model;
    model=bs->getTableModelStock();
    QWidget* widget=ui->pageInventoryManage;
    QTableView* view=ui->tableInventoryManage;
    ui->stackedWidget->setCurrentWidget(widget);
    view->setModel(model);
    view->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model->select();
}

//库存管理-添加记录
void StaffUi::on_buttonInventoryAdd_clicked()
{
    QSqlTableModel* model=bs->getTableModelStock();
    QSqlRecord rerocd=model->record();
    model->insertRecord(model->rowCount(),rerocd);
}

//库存管理-事务提交
void StaffUi::on_buttonInventorySubmit_clicked()
{
    QSqlTableModel* model=bs->getTableModelStock();
    bool ok=model->submitAll();
    if(ok==false)
    {
        QMessageBox::information(this,"错误","数据库修改失败");
    }
    else
    {
        QMessageBox::information(this,"成功","事务提交成功");
    }
}

//库存管理-事务回滚
void StaffUi::on_buttonInventoryCancel_clicked()
{
    QSqlTableModel* model=bs->getTableModelStock();
    model->revertAll();
}

//库存管理-删除记录
void StaffUi::on_buttonInventoryDelete_clicked()
{
    QSqlTableModel* model=bs->getTableModelStock();
    QTableView* view=ui->tableInventoryManage;
    QItemSelectionModel* sModel=view->selectionModel();
    QModelIndexList indexList=sModel->selectedRows();
    for(int i=0;i<indexList.size();i++)
    {
        model->removeRow(indexList.at(i).row());
    }
}

//退出
void StaffUi::on_PushButtonExit_clicked()
{
    emit(staffExit());
}

//物料订购
void StaffUi::on_pushButtonMaterialOrder_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageMaterialOrder);
    QSqlTableModel * tablemodel=(bs->getTableModelStock());
    ui->labelCheckNum->setText("");
    ui->editIngredientNum->setValue(0);
    ui->editIngredientName->setText("");
    tablemodel->select();
}

//物料订购-查询物料数量
void StaffUi::on_buttonIngredientNumCheck_clicked()
{
    int num= bs->getIngredientNum(ui->editIngredientName->text());
    if(num<0)
    {
        ui->labelCheckNum->setText("未找到该物料");
    }
    else{
        ui->labelCheckNum->setText(QString("物料 %1 数量为： %2").arg(ui->editIngredientName->text()).arg(num));
    }
}

//物料订购-提交订购
void StaffUi::on_buttonIngredientOrderSumbit_clicked()
{
    int num=bs->getIngredientNum(ui->editIngredientName->text());
    QString name=ui->editIngredientName->text();
    int appendNum=ui->editIngredientNum->value();
    double moneyNum=ui->editIngredientMoney->value();
    bool ok;
    if(appendNum<=0||moneyNum<=0)
    {
         QMessageBox::information(this,"错误","输入数量/金额不合法");
         return;
    }
    //添加stock记录
    if(num>=0)
    {
         ok=bs->setIngresientNum(name,num+appendNum);
    }
    else
    {
        ok=bs->addNewIngredient(name,appendNum);
    }
    //添加finance分析记录
    double tmp=bs->getExpenseToday();
    bool ok2=bs->setExpenseToday(tmp+moneyNum);
    ok&=ok2;
    //添加order记录
    bool ok3=bs->addNewOrder(name,appendNum,moneyNum);
    ok&=ok3;
    //判断结果
    if(ok)
    {
        QMessageBox::information(this,"成功","物料订购记录成功添加");
    }
    else
    {
        QMessageBox::information(this,"错误","物料订购添加失败");
    }
}

//主菜单-点单
void StaffUi::on_buttonMainOrder_clicked()
{
     bool ok=bs->orderMenu(menu);
     if(ok==true)
     {
         QMessageBox::information(this,"成功","购买成功");
     }
     else
     {
         QMessageBox::information(this,"错误","商品库存不足");
     }
}

//主菜单-清空
void StaffUi::on_buttonMainClear_clicked()
{
    ui->labelMainPriceSum->setText("");
    for(uint i=0;i<menu->items.size();i++)
    {
        menu->items[i]->clear();
    }
}

//主菜单
void StaffUi::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageMain);
    menu=new MainMenu;
    connect(menu,&MainMenu::newSum,this,&StaffUi::recvNewSumFromMainMenu);
    bs->loadMenu(menu);
    ui->labelMainPriceSum->setText("");
    QListWidget* widget=ui->listWidgetMain;
    QListWidgetItem* item;
    widget->clear();
    for(uint i=0;i<menu->items.size();i++)
    {
        item=new QListWidgetItem(widget);
        item->setSizeHint(QSize(500,100));
        widget->addItem(item);
        widget->setItemWidget(item,menu->items[i]);
    }
}

//主菜单-槽-接收点单按钮信号
void StaffUi::recvNewSumFromMainMenu()
{
    ui->labelMainPriceSum->setText(QString("总计:￥")+QString::number(menu->getSumPrice()));
}

//物料报损
void StaffUi::on_pushButtonMaterialDamageReport_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageMaterialDamageReport);
    menu=new MainMenu;
    bs->loadMenu(menu);
    bs->clearMenumoney(menu);
    QListWidget* widget=ui->listWidgetDamage;
    QListWidgetItem* item;
    widget->clear();
    for(uint i=0;i<menu->items.size();i++)
    {
        item=new QListWidgetItem(widget);
        item->setSizeHint(QSize(500,100));
        widget->addItem(item);
        widget->setItemWidget(item,menu->items[i]);
    }
}


//物料报损-报损
void StaffUi::on_buttonDamageOrder_clicked()
{
    bool ok=bs->orderDamage(menu);
    if(ok==true)
    {
        QMessageBox::information(this,"成功","报损成功");
    }
    else
    {
        QMessageBox::information(this,"错误","商品库存不足");
    }
}

//物料报损-清空
void StaffUi::on_buttonDamageClear_clicked()
{
    for(uint i=0;i<menu->items.size();i++)
    {
        menu->items[i]->clear();
    }
}
