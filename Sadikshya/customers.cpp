#include "customers.h"
#include "ui_customers.h"
#include "customerregister.h"
#include <QMessageBox>


customers::customers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customers)
{
    ui->setupUi(this);
    mydb =QSqlDatabase :: addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/hp/Desktop/new project/The-Winkel/database/customer.db");
    if (mydb.open())
    {
        qDebug()<<"opened\n";
    }
    else {
        qDebug()<<"Failed";
    }
    mydb.close();

}

customers::~customers()
{
    delete ui;    
    mydb.close();

}



void customers::on_registerbutton_clicked()
{
    customerregister registeer;
    registeer.setModal(true);
    registeer.exec();
}


void customers::on_loginbutton_clicked()
{
    QString username, password;
    username =ui->inputusername->text();
    password =ui->inputpassword->text();
    mydb.open();
    QSqlQuery qry;

   if (qry.exec(" select * from register where username = '"+username+"' and password = '"+password+"'"))
    {
            QString username_db;
            QString password_db;

                while (qry.next()){
                username_db = qry.value(2).toString();
                password_db = qry.value(3).toString();
                }
                if (username_db==username && password_db==password){
                     QMessageBox :: information (this,"","Welcome to customer interface ");
                }
                else
                     QMessageBox :: warning (this,"","try again ");
                qry.finish();


    }

   mydb.close();
}

