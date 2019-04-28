#ifndef CAFE_H
#define CAFE_H

#include <QWidget>
#include <QVector>
#include "customer.h"

namespace Ui {
class cafe;
}

class cafe : public QWidget
{
    Q_OBJECT

public:
    explicit cafe(QWidget *parent = nullptr);
    ~cafe();

private:
    Ui::cafe *ui;
    QVector<customer>* line;
};

#endif // CAFE_H
