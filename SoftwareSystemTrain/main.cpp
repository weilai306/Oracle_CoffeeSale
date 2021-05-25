#include "widget.h"
#include "basedao.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    a.exec();
    return 0;
}
