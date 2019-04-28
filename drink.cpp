#include "drink.h"
#include "ui_drink.h"

drink::drink(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::drink)
{
    ui->setupUi(this);
}

drink::~drink()
{
    delete ui;
}
