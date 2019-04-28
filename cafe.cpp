#include "cafe.h"
#include "ui_cafe.h"

cafe::cafe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cafe)
{
    ui->setupUi(this);
}

cafe::~cafe()
{
    delete ui;
}
