#ifndef SUPERVIOR_H
#define SUPERVIOR_H

#include <QWidget>

namespace Ui {
class Supervior;
}

class Supervior : public QWidget
{
    Q_OBJECT

public:
    explicit Supervior(QWidget *parent = nullptr);
    ~Supervior();

private:
    Ui::Supervior *ui;
};

#endif // SUPERVIOR_H
