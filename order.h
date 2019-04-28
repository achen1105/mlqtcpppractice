#ifndef ORDER_H
#define ORDER_H

#include <QWidget>
#include "drink.h"
#include "pastry.h"

namespace Ui {
class order;
}

class order : public QWidget
{
    Q_OBJECT

public:
    explicit order(QWidget *parent = nullptr);
    ~order();

private:
    Ui::order *ui;
    drink myDrink;
    pastry myPastry;
};

#endif // ORDER_H
