#ifndef KITCHEN_H
#define KITCHEN_H

#include <QWidget>

namespace Ui {
class kitchen;
}

class kitchen : public QWidget
{
    Q_OBJECT

public:
    explicit kitchen(QWidget *parent = nullptr);
    ~kitchen();

private:
    Ui::kitchen *ui;
};

#endif // KITCHEN_H
