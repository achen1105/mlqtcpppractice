#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    windows* mywindows = new windows();


    home* myhome = new home(this, mywindows); // Page 0
    about* myabout = new about(this, mywindows); // Page 1
    help* myhelp = new help(this, mywindows); // Page 2
    setCentralWidget(mywindows);

}

MainWindow::~MainWindow()
{
    delete ui;
}
