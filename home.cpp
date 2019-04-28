#include "home.h"
#include "ui_home.h"

home::home(QWidget *parent, windows* thewindows) :
    QWidget(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);

    thewindows->addWindows(this);

    QObject::connect(ui->helpButton, SIGNAL(clicked()), thewindows, SLOT(goToPage2()));
    QObject::connect(ui->aboutButton, SIGNAL(clicked()), thewindows, SLOT(goToPage1()));

    QMovie* background = new QMovie(":/images/molang-transparent-food.gif");
    ui->molangEating->setMovie(background);
    background->setPaused(false);
    background->setScaledSize(ui->molangEating->size());
    background->start();

}

home::~home()
{
    delete ui;
}

