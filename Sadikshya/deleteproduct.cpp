#include "deleteproduct.h"
#include "ui_deleteproduct.h"
#include<QMessageBox>

deleteproduct::deleteproduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteproduct)
{
    ui->setupUi(this);
    QSqlDatabase productdb =QSqlDatabase :: addDatabase("QSQLITE");
    productdb.setDatabaseName("D:/hh/The-Winkel/database/product.db");
    if (productdb.open())
    {
        qDebug()<<"opened\n";
    }
    else {
        qDebug()<<"Failed";
    }
}

deleteproduct::~deleteproduct()
{
    delete ui;
}

void deleteproduct::on_pushButtondelete_clicked()
{
    QString productid,pname, pcompany,pprice, pstatus;
    productid =ui->inputproductid->text();
    pname =ui->inputpname->text();
    pcompany =ui->inputpcompany->text();
    pprice =ui->inputpprice->text();
    pstatus =ui->inputpstatus->text();
    QSqlQuery qry2;
    productdb.open();
    if(qry2.exec("Delete from Productdetails where product_id='"+productid+"'"))
    {
        QMessageBox :: information (this,"","Product details has been deleted");
       qDebug()<<qry2.lastError();
    }
    else
    {
        QMessageBox :: information (this,"","failed to delete no such product is recorded");
    }

    qDebug()<<qry2.lastError();
     qry2.finish();
     hide();
}

