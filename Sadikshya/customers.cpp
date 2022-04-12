#include "customers.h"
#include "ui_customers.h"
#include "customerregister.h"
#include <QMessageBox>
#include "customermenu.h"


customers::customers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customers)
{
    ui->setupUi(this);
    customerdb =QSqlDatabase :: addDatabase("QSQLITE");
    customerdb.setDatabaseName("C:/Users/Shashank/OneDrive/Desktop/the final project/The-Winkel/database/winkel.db");
    if (customerdb.open())
    {
        qDebug()<<"opened\n";
    }
    else {
        qDebug()<<"Failed";
    }
    //customerdb.close();
    //ui->inputpassword->setDisabled(true);
}

customers::~customers()
{
    delete ui;    
    customerdb.close();

}

QString customers::usname="";
void customers::on_loginbutton_clicked()
{
    QString username, password;

    username =ui->inputusername->text();
    password =ui->inputpassword->text();
    usname=username;
    if (!customerdb.open())
    {
        qDebug()<<"failed to connect\n";
    }

    QSqlQuery qry;


    customerdb.open();
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
                     customermenu cmenu;
                     cmenu.setModal(true);
                     cmenu.exec();
                }
                else if (count<1)
                {
                    QMessageBox :: warning (this,"Failed","Incorrect username or password. Try again ");
                }
    }
   qry.finish();

}

void customers::on_commandLinkButton_clicked()
{
    customerregister registeer;
    registeer.setModal(true);
    registeer.exec();
    hide();
}

