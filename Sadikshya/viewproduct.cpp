#include "viewproduct.h"
#include "ui_viewproduct.h"

viewproduct::viewproduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewproduct)
{
    ui->setupUi(this);
}

viewproduct::~viewproduct()
{
    delete ui;
}
