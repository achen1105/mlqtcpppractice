#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "windows.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    windows* mlwindows = new windows();
    setCentralWidget(mlwindows);
}

MainWindow::~MainWindow()
{
    delete ui;
}
