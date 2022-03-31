#include "bill.h"
#include "ui_bill.h"

bill::bill(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bill)
{
    ui->setupUi(this);
    QSqlDatabase viewbilldb =QSqlDatabase :: addDatabase("QSQLITE");
    viewbilldb.setDatabaseName("E:/Sadikshya/KU/1st year 2nd sem/project/GITHUB/The-Winkel/database/winkel.db");
    if (viewbilldb.open())
    {
        qDebug()<<"opened\n";
    }
    else {
        qDebug()<<"Failed";
    }
    QSqlQueryModel *vb=new QSqlQueryModel();

    vb->setQuery("SELECT * FROM cart");
    ui->viewbill->setModel(vb);
}

bill::~bill()
{
    delete ui;
}
