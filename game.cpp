#include "game.h"
#include "ui_game.h"

game::game(QWidget *parent, windows *thewindows) :
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);

    thewindows->addWindows(this);
    QObject::connect(ui->homeButton, SIGNAL(clicked()), thewindows, SLOT(goToPage0()));
    QObject::connect(ui->helpButton, SIGNAL(clicked()), thewindows, SLOT(goToPage2()));
}

game::~game()
{
    delete ui;
}
