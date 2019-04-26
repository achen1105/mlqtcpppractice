#include "about.h"
#include "ui_about.h"

about::about(QWidget *parent, windows *thewindows) :
    QWidget(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    thewindows->addWindows(this);

    // QPixmap name(":/aboutresources/mlbannerdraft.png");
    // ui->mlName->setPixmap(name.scaled(900, 200, Qt::KeepAspectRatio));
   // QPixmap backButton(":/aboutresources/backtest");
    //QIcon backButtonIcon(backButton);
   // ui->aboutBackButton->setIcon(backButtonIcon);
    //ui->aboutBackButton->setIconSize(backButton.rect().size());

    QObject::connect(ui->aboutBackButton, SIGNAL(clicked()), thewindows, SLOT(goToPage0()));
}

about::~about()
{
    delete ui;
}
