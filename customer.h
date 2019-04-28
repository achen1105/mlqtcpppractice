#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QWidget>
#include <QPixmap>
#include <QMovie>
#include "order.h"

namespace Ui {
class customer;
}

class customer : public QWidget
{
    Q_OBJECT

public:
    explicit customer(QWidget *parent = nullptr);
    ~customer();

private:
    Ui::customer *ui;
    QPixmap pixmap; // for displaying the customer's image
    QMovie* movie; // for displaying the customer's gif
    order* myOrder; // for storing the customer's order

};

#endif // CUSTOMER_H
