#include "mainmenu.h"

MainMenu::MainMenu()
{

}

void MainMenu::addItem(MyMenuItem *item)
{
    items.push_back(item);
    connect(item,&MyMenuItem::priceChange,this,&MainMenu::recvSumChange);
}

double MainMenu::getSumPrice()
{
    double sum=0;
    for(uint i=0;i<items.size();i++)
    {
        double res=items[i]->getSumPrice();
        sum+=res;
    }
    return sum;
}

MainMenu::~MainMenu()
{
    for(uint i=0;i<items.size();i++)
    {
        delete items[i];
    }
}

void MainMenu::recvSumChange()
{
    emit(this->newSum());
}
