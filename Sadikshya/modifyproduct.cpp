#include "modifyproduct.h"
#include "ui_modifyproduct.h"
#include "addproduct.h"
#include "viewproduct.h"
#include "deleteproduct.h"

modifyproduct::modifyproduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifyproduct)
{
    ui->setupUi(this);

}

modifyproduct::~modifyproduct()
{
    delete ui;
}

void modifyproduct::on_pushButtonadd_clicked()
{
    addproduct adproduct;
    adproduct.setModal(true);
    adproduct.exec();
}


void modifyproduct::on_pushButtonview_clicked()
{
    viewproduct vproduct;
    vproduct.setModal(true);
    vproduct.exec();
}


void modifyproduct::on_pushButtondelete_clicked()
{
    deleteproduct dproduct;
    dproduct.setModal(true);
    dproduct.exec();
}

