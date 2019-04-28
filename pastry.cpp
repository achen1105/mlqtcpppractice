#include "pastry.h"
#include "ui_pastry.h"

pastry::pastry(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pastry)
{
    ui->setupUi(this);
}

pastry::~pastry()
{
    delete ui;
}
