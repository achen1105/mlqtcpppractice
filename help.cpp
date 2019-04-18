#include "help.h"
#include "ui_help.h"

help::help(QWidget *parent, windows* thewindows) :
    QWidget(parent),
    ui(new Ui::help)
{
    ui->setupUi(this);
    thewindows->addWindows(this);

    QObject::connect(ui->helpBackButton, SIGNAL(clicked()), thewindows, SLOT(goToPage0()));
}

help::~help()
{
    delete ui;
}
