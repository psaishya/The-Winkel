#include "viewproduct.h"
#include "ui_viewproduct.h"

viewproduct::viewproduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewproduct)
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
    modal->setQuery("SELECT * FROM Productdetails");
    ui->tableView->setModel(modal);

}

viewproduct::~viewproduct()
{
    delete ui;
}
