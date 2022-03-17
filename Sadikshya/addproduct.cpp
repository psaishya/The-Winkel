#include "addproduct.h"
#include "ui_addproduct.h"
#include <QMessageBox>
addproduct::addproduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addproduct)
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

    //productdb.close();

}

addproduct::~addproduct()
{
    delete ui;
    productdb.close();
}

 void addproduct::on_pushButtonenter_clicked()
{
    QString productid,pname, pcompany,pprice, pstatus;
    productid =ui->inputproductid->text();
    pname =ui->inputpname->text();
    pcompany =ui->inputpcompany->text();
    pprice =ui->inputpprice->text();
    pstatus =ui->inputpstatus->text();
    QSqlQuery qry2;
    productdb.open();
    if(qry2.exec("insert into Productdetails (product_id,pname,pcompany,pprice,pstatus) VALUES ('"+productid+"','"+pname+"','"+pcompany+"','"+pprice+"','"+pstatus+"')"))
    {
        QMessageBox :: information (this,"","Product details has been saved");
       qDebug()<<qry2.lastError();
    }
    else
    {
        QMessageBox :: information (this,"","failed saved");
    }

    qDebug()<<qry2.lastError();
     qry2.finish();
     hide();
 }




void addproduct::on_pushButtonupdate_clicked()
{
        QString productid,pname, pcompany,pprice, pstatus;
        productid =ui->inputproductid->text();
        pname =ui->inputpname->text();
        pcompany =ui->inputpcompany->text();
        pprice =ui->inputpprice->text();
        pstatus =ui->inputpstatus->text();
        QSqlQuery qry2;
        productdb.open();
        if(qry2.exec("update  Productdetails set product_id='"+productid+"',pname='"+pname+"',pcompany='"+pcompany+"',pprice='"+pprice+"',pstatus='"+pstatus+"'where product_id='"+productid+"'"))
        {
            QMessageBox :: information (this,"","Product details has been updated");
           qDebug()<<qry2.lastError();
        }
        else
        {
            QMessageBox :: information (this,"","failed update");
        }

        qDebug()<<qry2.lastError();
         qry2.finish();

              hide();
    }





