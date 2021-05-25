#ifndef MAINMENU_H
#define MAINMENU_H
#include <vector>
#include <mymenuitem.h>
using namespace std;
class MainMenu:public QObject
{
    Q_OBJECT
public:
    MainMenu();
    void addItem(MyMenuItem* item);
    double getSumPrice();
    ~MainMenu();
     vector<MyMenuItem*> items;
signals:
    void newSum();
private slots:
     void recvSumChange();
};

#endif // MAINMENU_H
