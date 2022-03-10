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
    mydb.setDatabaseName("E:/Sadikshya/KU/1st year 2nd sem/project/GITHUB/The-Winkel/database/customer.db");
    if (mydb.open())
    {
        qDebug()<<"opened\n";
    }
    else {
        qDebug()<<"Failed";
    }
    //mydb.close();
    //ui->inputpassword->setDisabled(true);
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
    if (!mydb.open())
    {
        qDebug()<<"failed to connect\n";
    }

    QSqlQuery qry;


    mydb.open();
    //QSqlQuery qry;

   if (qry.exec(" select * from register where username = '"+username+"' and password = '"+password+"'"))
    {
            //QString username_db;
            //QString password_db;
            int count=0;

                while (qry.next()){
                    count ++;
                 //username_db = qry.value(2).toString();
                // password_db = qry.value(3).toString();
                }
               //if (username_db==username && password_db==password){
               //      QMessageBox :: information (this,"","Welcome to customer interface ");
              // }
               //else
                //     QMessageBox :: warning (this,"","try again ");
                if(count==1)
                {
                     QMessageBox :: information (this,"","Welcome to customer interface ");
                }
                else if (count<1)
                {
                    QMessageBox :: warning (this,"Failed","Incorrect username or password. Try again ");
                }

   // mydb.close();
    }
   qry.finish();

}




