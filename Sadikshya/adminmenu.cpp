#include "adminmenu.h"
#include "ui_adminmenu.h"
#include "modifyproduct.h"
#include "viewcustomer.h"
adminmenu::adminmenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminmenu)
{
    ui->setupUi(this);
}

adminmenu::~adminmenu()
{
    delete ui;
}

void adminmenu::on_pushButtonmodify_clicked()
{
    modifyproduct mdyproduct;
    mdyproduct.setModal(true);
    mdyproduct.exec();
}


void adminmenu::on_pushButtonview_clicked()
{
    viewcustomer vcustomer;
    vcustomer.setModal(true);
    vcustomer.exec();
}

