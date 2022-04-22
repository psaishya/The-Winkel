#include "bill.h"
#include "ui_bill.h"
#include "credits.h"

bill::bill(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bill)
{
    ui->setupUi(this);
    QSqlDatabase viewbilldb =QSqlDatabase :: addDatabase("QSQLITE");
    viewbilldb.setDatabaseName("C:/Users/hp/Desktop/new project/The-Winkel/database/winkel.db");
    if (viewbilldb.open())
    {
        qDebug()<<"opened\n";
    }
    else {
        qDebug()<<"Failed";
    }
    QSqlQueryModel *vb=new QSqlQueryModel();
    vb->setQuery("SELECT Name, Price AS Rate, Quantity, price*Quantity AS PRICE FROM cart");
    ui->viewbill->setModel(vb);



    QSqlQuery priceqry;
    priceqry.exec("SELECT sum(price*quantity) FROM cart");
    while(priceqry.next())
    {
       QString price=priceqry.value(0).toString();
        ui->price->setText(price);

       double  discount =(QString(price).toDouble())*0.05;
       QString discounts= QString::number(discount);
       ui->discount->setText(discounts);


       double  vat =((QString(price).toDouble())-((QString(price).toDouble())*0.05))*0.13;
       QString vats= QString::number(vat);
       ui->vat->setText(vats);

       double  totalprice =QString(price).toDouble()-discount+vat;
       QString totalprices= QString::number(totalprice);
       ui->total->setText(totalprices);


}
}

bill::~bill()
{
    delete ui;
}

void bill::on_confirm_clicked()
{
    credits payment;
    payment.setModal(true);
    payment.exec();
    hide();
}

