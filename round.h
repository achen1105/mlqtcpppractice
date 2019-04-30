#ifndef ROUND_H
#define ROUND_H

#include <QWidget>
#include <QStackedWidget>
#include <QGridLayout>
#include "cafe.h"
#include "kitchen.h"
#include "customer.h"
#include "drink.h"
#include "pastry.h"

namespace Ui {
class round;
}

class round : public QWidget
{
    Q_OBJECT

public:
    explicit round(QWidget *parent = nullptr);
    ~round();

private:
    Ui::round *ui;
};

#endif // ROUND_H
