#ifndef DRINK_H
#define DRINK_H

#include <QWidget>
#include <QString>

namespace Ui {
class drink;
}

class drink : public QWidget
{
    Q_OBJECT

public:
    explicit drink(QWidget *parent = nullptr);
    ~drink();

private:
    Ui::drink *ui;
    QString base;
    QString creamer;
    QString flavoring;
    QString topping1;
    QString topping2;
};

#endif // DRINK_H
