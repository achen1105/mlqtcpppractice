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

}

home::~home()
{
    delete ui;
}

