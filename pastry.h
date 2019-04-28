#ifndef PASTRY_H
#define PASTRY_H

#include <QWidget>
#include <QString>

namespace Ui {
class pastry;
}

class pastry : public QWidget
{
    Q_OBJECT

public:
    explicit pastry(QWidget *parent = nullptr);
    ~pastry();

private:
    Ui::pastry *ui;
    QString pastryType;

};

#endif // PASTRY_H
