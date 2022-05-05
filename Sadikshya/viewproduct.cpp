#include "viewproduct.h"
#include "ui_viewproduct.h"

viewproduct::viewproduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewproduct)
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
    QSqlQueryModel *vpd=new QSqlQueryModel();

    qDebug()<<"view product selected now displaying";
    vpd->setQuery("SELECT * FROM productdetails");
    ui->tableView->setModel(vpd);

}

viewproduct::~viewproduct()
{
    delete ui;
}
