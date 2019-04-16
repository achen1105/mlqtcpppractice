#include "windows.h"
#include "ui_windows.h"

windows::windows(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::windows)
{
    ui->setupUi(this);

    mlwindows = new QStackedWidget();
    home* mlhome = new home();
    help* mlhelp = new help();
    about* mlabout = new about();
    mlwindows->addWidget(mlhome); // 0
    mlwindows->addWidget(mlhelp); // 1
    mlwindows->addWidget(mlabout); // 2
    // stackedWindows->addWidget(gameTitle);  3
}


windows::~windows()
{
    delete ui;
}
