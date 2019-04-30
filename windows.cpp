#include "windows.h"
#include "ui_windows.h"

windows::windows(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::windows)
{
    ui->setupUi(this);

    mlwindows = new QStackedWidget();
    layout = new QVBoxLayout();

    // stackedWindows->addWidget(gameTitle);  3

    layout->addWidget(mlwindows);
    layout->setMargin(0);
    layout->setSpacing(0);
    setLayout(layout);
}

windows::~windows()
{
    delete ui;
}

void windows::addWindows(QWidget* window)
{
    mlwindows->addWidget(window);
}


void windows::goToPage0()
{
    mlwindows->setCurrentIndex(0);
}

void windows::goToPage1()
{
    mlwindows->setCurrentIndex(1);
}

void windows::goToPage2()
{
    mlwindows->setCurrentIndex(2);
}

void windows::goToPage3()
{
    mlwindows->setCurrentIndex(3);
}

void windows::goToPage4()
{
    mlwindows->setCurrentIndex(4);
}

/*
void windows::goToPageNum(int num)
{
    mlwindows->setCurrentIndex(num);
}
*/
