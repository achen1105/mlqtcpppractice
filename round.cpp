#include "round.h"
#include "ui_round.h"

round::round(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::round)
{
    ui->setupUi(this);

    QGridLayout *layout1 = new QGridLayout();
    QGridLayout *layout2 = new QGridLayout();

    cafe *myCafe = new cafe();
    layout1->addWidget(myCafe);
    kitchen *myKitchen = new kitchen();
    layout2->addWidget(myKitchen);

    ui->mainCafe->setLayout(layout1);
    ui->mainKitchen->setLayout(layout2);
}

round::~round()
{
    delete ui;
}
