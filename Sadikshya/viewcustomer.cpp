#include "viewcustomer.h"
#include "ui_viewcustomer.h"

viewcustomer::viewcustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewcustomer)
{
    ui->setupUi(this);
    QSqlDatabase customerdb =QSqlDatabase :: addDatabase("QSQLITE");
    customerdb.setDatabaseName("C:/Users/Shashank/OneDrive/Desktop/the final project/The-Winkel/database/winkel.db");
    if (customerdb.open())
    {
        qDebug()<<"opened\n";
    }
    else {
        qDebug()<<"Failed";
    }
    QSqlQueryModel *modal=new QSqlQueryModel();
    modal->setQuery("SELECT name,contact,username,feedback FROM register");
    ui->tableView->setModel(modal);
}

viewcustomer::~viewcustomer()
{
    delete ui;
}
