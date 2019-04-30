#include "art.h"
#include "ui_art.h"

art::art(QWidget *parent, windows *thewindows) :
    QWidget(parent),
    ui(new Ui::art)
{
    ui->setupUi(this);
    thewindows->addWindows(this);

     QObject::connect(ui->homeButton, SIGNAL(clicked()), thewindows, SLOT(goToPage0()));
}

art::~art()
{
    delete ui;
}
