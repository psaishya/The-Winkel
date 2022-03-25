#include "addproduct.h"
#include "ui_addproduct.h"
#include <QMessageBox>
addproduct::addproduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addproduct)
{
    ui->setupUi(this);
    QSqlDatabase productdb =QSqlDatabase :: addDatabase("QSQLITE");
    productdb.setDatabaseName("E:/Sadikshya/KU/1st year 2nd sem/project/GITHUB/The-Winkel/database/product.db");

    if (productdb.open())
    {
        qDebug()<<"opened\n";
    }
    else {
        qDebug()<<"Failed";
    }

    QSqlQueryModel *modal=new QSqlQueryModel();
    //QSqlQuery *qry =new QSqlQuery(productdb);
    //qry->exec("SELECT * FROM Productdetails" );
    modal->setQuery("SELECT Product_Id FROM Productdetails");
    ui->listView->setModel(modal);


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
    if(ui->available->isChecked())
    {
        pstatus="Available";
    }
    else
        pstatus="Unavailable";
    //pstatus =ui->inputpstatus->text();
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
        if(ui->available->isChecked())
        {
            pstatus="Available";
        }
        else
            pstatus="Unavailable";
        //pstatus =ui->inputpstatus->text();
        QSqlQuery qry2;
        productdb.open();
        if(qry2.exec("update Productdetails set product_id='"+productid+"', pname='"+pname+"',pcompany='"+pcompany+"',pprice='"+pprice+"',pstatus='"+pstatus+"'where product_id='"+productid+"'"))
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






void addproduct::on_pushButtondelete_clicked()
{
    QString productid,pname, pcompany,pprice, pstatus;
    productid =ui->inputproductid->text();
    pname =ui->inputpname->text();
    pcompany =ui->inputpcompany->text();
    pprice =ui->inputpprice->text();
    if(ui->available->isChecked())
    {
        pstatus="Available";
    }
    else
        pstatus="Unavailable";

    //pstatus =ui->inputpstatus->text();
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


void addproduct::on_cbox_currentTextChanged(const QString &arg1)
{
    QString id=ui->cbox->currentText();
    QSqlQuery qry2;
    productdb.open();
    if(qry2.exec("SELECT * FROM Productdetails WHERE product_id='"+id+"'"))
    {
        while(qry2.next())
        {
            ui->inputproductid->setText(qry2.value(0).toString());
            ui->inputpname->setText(qry2.value(1).toString());
            ui->inputpcompany->setText(qry2.value(2).toString());
            ui->inputpprice->setText(qry2.value(3).toString());
            if(qry2.value(4).toString()=="Available")
            {
                ui->available->setChecked(true);
            }
            else
            {
                ui->unavailable->setChecked(true);
            }

        }
        qry2.finish();
    }
    else
    {
        qDebug()<<qry2.lastError();
    }




}


void addproduct::on_showbutton_clicked()
{
    QSqlDatabase productdb =QSqlDatabase :: addDatabase("QSQLITE");
    productdb.setDatabaseName("E:/Sadikshya/KU/1st year 2nd sem/project/GITHUB/The-Winkel/database/product.db");

        productdb.open();
        if (productdb.open())
        {
            qDebug()<<"opened\n";
        }
        else {
            qDebug()<<"Failed";
        }

        QSqlQueryModel *modal=new QSqlQueryModel();
        //QSqlQuery *qry =new QSqlQuery(productdb);
        //qry->exec("SELECT * FROM Productdetails" );
        modal->setQuery("SELECT Product_Id FROM Productdetails");

        ui->cbox->setModel(modal);

        //productdb.close();
}

