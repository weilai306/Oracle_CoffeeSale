#ifndef STAFFUI_H
#define STAFFUI_H

#include <QWidget>
#include <member.h>
#include <basedao.h>
#include <QSqlQuery>
#include <QDateTime>
#include <QTabWidget>
#include <QTableWidgetItem>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QItemSelectionModel>
#include <algorithm>
#include <mainmenu.h>
namespace Ui {
class StaffUi;
}

class StaffUi : public QWidget
{
    Q_OBJECT

public:
    explicit StaffUi(QWidget *parent = nullptr);
    ~StaffUi();
    void setUser(Member* m);
    void setBasedao(Basedao* bs);
signals:
    void staffExit();
private slots:
    void on_pushButtonViewInventory_clicked();

    void on_PushButtonViewReport_clicked();

    void on_pushButtonFinanceAnalyze_clicked();

    void on_pushButtonStaffManage_clicked();

    void on_pushButtonInventoryManage_clicked();

    void on_buttonStaffSubmit_clicked();

    void on_buttonStaffCancel_clicked();

    void on_buttonStaffAdd_clicked();

    void on_buttonStaffDelete_clicked();

    void on_buttonInventoryAdd_clicked();

    void on_buttonInventorySubmit_clicked();

    void on_buttonInventoryCancel_clicked();

    void on_buttonInventoryDelete_clicked();

    void on_PushButtonExit_clicked();

    void on_buttonIngredientNumCheck_clicked();

    void on_buttonIngredientOrderSumbit_clicked();

    void on_pushButtonMaterialOrder_clicked();

    void on_buttonMainOrder_clicked();


    void on_buttonMainClear_clicked();

    void on_pushButton_clicked();

    void recvNewSumFromMainMenu();
    void on_pushButtonMaterialDamageReport_clicked();

    void on_buttonDamageOrder_clicked();

    void on_buttonDamageClear_clicked();

private:
    Ui::StaffUi *ui;
    Member* m;
    Basedao* bs;
    MainMenu* menu;
};

#endif // STAFFUI_H
