#include "viewcustomer.h"
#include "ui_viewcustomer.h"

viewcustomer::viewcustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewcustomer)
{
    ui->setupUi(this);
    QSqlDatabase customerdb =QSqlDatabase :: addDatabase("QSQLITE");
    customerdb.setDatabaseName("E:/Sadikshya/KU/1st year 2nd sem/project/GITHUB/The-Winkel/database/customer.db");
    if (customerdb.open())
    {
        qDebug()<<"opened\n";
    }
    else {
        qDebug()<<"Failed";
    }
    QSqlQueryModel *modal=new QSqlQueryModel();
    modal->setQuery("SELECT name,contact,username FROM register");
    ui->tableView->setModel(modal);
}

viewcustomer::~viewcustomer()
{
    delete ui;
}
