#include "customerregistration.h"
#include "ui_customerregistration.h"
#include <QMessageBox>

customerregistration::customerregistration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerregistration)
{
    ui->setupUi(this);
    mydb =QSqlDatabase :: addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/Shashank/OneDrive/Desktop/qt/winkel/The-Winkel/database/customer.db");
    if (mydb.open())
    {
        qDebug()<<"opened\n";
    }
    else {
        qDebug()<<"Failed";
    }
    mydb.close();

}

customerregistration::~customerregistration()
{
    delete ui;
}

void customerregistration::on_registerbutton_clicked()
{
    QString name,contact,username,password;

    QMessageBox::information(this,"Registered","You have successfully registered. You may login now.");
    hide();
}

