#include "buyproducts.h"
#include "ui_buyproducts.h"

buyproducts::buyproducts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buyproducts)
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

    QSqlQueryModel *id=new QSqlQueryModel();
    id->setQuery("SELECT Product_Id FROM Productdetails");
     ui->id->setModel(id);
     QSqlQueryModel *name=new QSqlQueryModel();
     name->setQuery("SELECT PName FROM Productdetails");
      ui->productname->setModel(name);


    QSqlQueryModel *ids=new QSqlQueryModel();
    ids->setQuery("SELECT Product_Id FROM Productdetails");
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

