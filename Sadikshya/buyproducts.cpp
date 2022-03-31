#include "buyproducts.h"
#include "ui_buyproducts.h"

buyproducts::buyproducts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buyproducts)
{
    ui->setupUi(this);
    QSqlDatabase productdb =QSqlDatabase :: addDatabase("QSQLITE");
    productdb.setDatabaseName("E:/Sadikshya/KU/1st year 2nd sem/project/GITHUB/The-Winkel/database/winkel.db");

    if (productdb.open())
    {
        qDebug()<<"opened\n";
    }
    else {
        qDebug()<<"Failed";
    }



    QSqlQueryModel *id=new QSqlQueryModel();
    id->setQuery("SELECT Product_Id FROM Productdetails where PStatus='Available'");
     ui->id->setModel(id);
     QSqlQueryModel *name=new QSqlQueryModel();
     name->setQuery("SELECT PName FROM Productdetails where PStatus='Available'");
      ui->productname->setModel(name);


    QSqlQueryModel *ids=new QSqlQueryModel();
    ids->setQuery("SELECT Product_Id FROM Productdetails where PStatus='Available'");
    ui->comboBox->setModel(ids);



}

buyproducts::~buyproducts()
{
    delete ui;
    productdb.close();


}

void buyproducts::on_comboBox_currentTextChanged(const QString &arg1)
{

    QString id=ui->comboBox->currentText();
    QSqlQuery qry2;
    productdb.open();
    if(qry2.exec("SELECT * FROM Productdetails WHERE product_id='"+id+"'"))
    {
        while(qry2.next())
        {
            ui->pid->setText(qry2.value(0).toString());
            ui->pname->setText(qry2.value(1).toString());
            ui->pcompany->setText(qry2.value(2).toString());
            ui->pprice->setText(qry2.value(3).toString());


        }
        qry2.finish();
    }
    else
    {
        qDebug()<<qry2.lastError();
    }


}


void buyproducts::on_addtocart_clicked()
{

    /*//QSqlDatabase selecteddb =QSqlDatabase :: addDatabase("QSQLITE");
    //selecteddb.setDatabaseName("E:/Sadikshya/KU/1st year 2nd sem/project/GITHUB/The-Winkel/database/cart.db");

    //if (selecteddb.open())
    {
        qDebug()<<"opened selected db\n";
    }
    else {
        qDebug()<<"Failed";
    }
    */
    QString pname, pprice,pquantity;
    pname =ui->pname->text();
    pprice =ui->pprice->text();
    pquantity=ui->quantity->text();

    QSqlQuery qrycart;
    //productdb.open();
    if(qrycart.exec("insert into cart (Name,Price,Quantity) VALUES ('"+pname+"','"+pprice+"','"+pquantity+"')"))
    {
        qDebug()<<"Added to cart has been saved";
       qDebug()<<qrycart.lastError();
    }
    else
    {
        qDebug()<<"failed to add to cart";
    }


     qrycart.finish();


     QSqlQueryModel *nm=new QSqlQueryModel();
     nm->setQuery("SELECT name FROM cart");
      ui->name1->setModel(nm);
      QSqlQueryModel *qnt=new QSqlQueryModel();
      qnt->setQuery("SELECT quantity FROM cart ");
       ui->quantity1->setModel(qnt);
       QSqlQueryModel *prc=new QSqlQueryModel();
       prc->setQuery("SELECT price FROM cart ");
        ui->price1->setModel(prc);

}


void buyproducts::on_remove_clicked()
{
    /*QSqlDatabase selecteddb =QSqlDatabase :: addDatabase("QSQLITE");
    selecteddb.setDatabaseName("E:/Sadikshya/KU/1st year 2nd sem/project/GITHUB/The-Winkel/database/cart.db");

    if (selecteddb.open())
    {
        qDebug()<<"opened selected db for removing\n";
    }
    else {
        qDebug()<<"Failed";
    }
    */
    QString pname, pprice,pquantity;
    pname =ui->pname->text();
    pprice =ui->pprice->text();
    pquantity=ui->quantity->text();

    QSqlQuery qrycart2;
    //selecteddb.open();
    if(qrycart2.exec("delete * from cart where Name='"+pname+"' "))
    {
        qDebug()<<"deleted from cart";
        qDebug()<<qrycart2.lastError();
    }
    else
    {
        qDebug()<<"failed to delete from cart";
    }


     qrycart2.finish();
}

