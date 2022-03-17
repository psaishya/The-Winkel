#include "customerregister.h"
#include "ui_customerregister.h"
#include<QMessageBox>

customerregister::customerregister(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerregister)
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


}

customerregister::~customerregister()
{
    delete ui;
    mydb.close();
}

void customerregister::on_pushbutton_register_clicked()
{

    QString name,username, contact,password, repassword;
    name =ui->inputname->text();
    contact =ui->inputcontact->text();

    password =ui->inputpassword->text();
    repassword =ui->inputconfirm->text();

    username =ui->inputusername->text();
    mydb.open();
    QSqlQuery uncheck;
    if(uncheck.exec("SELECT * FROM REGISTER WHERE Username='" +username+ "' "))
    {
        int count=0;
        while(uncheck.next())
        {
            count++;
        }
        if (count>=1)
        {

            ui->usernametaken->setText("Username already taken. Choose another username.");


        }
        else if(count<1)
        {
             ui->usernametaken->setText("");
             if (password=="")
             {
                 QMessageBox :: warning (this,"","Enter a proper password ");
                 //ui->pushbutton_register->setDisabled(true);
             }

             if (password==repassword){
                 QSqlQuery qry2;
                 if (mydb.open())
                 {
                     qDebug()<<"opened\n";
                 }
                 else {
                     qDebug()<<"Failed";
                 }
                 mydb.open();
                  if(qry2.exec("INSERT INTO REGISTER (name,contact,username,password) VALUES ('"+name+"','"+contact+"','"+username+"','"+password+"')"))
                     {
                          QMessageBox :: information (this,"Welcome!","Congrats you have been registered");
                  }
                  else{
                      QMessageBox :: warning (this,"!!!","Failed to register. Try again.");
                      hide();
                  }
                  qDebug()<<qry2.lastError();
                  qry2.finish();
                      hide();
             }
             else{
                 QMessageBox :: warning (this,"","re confirm your password ");
             }

        }


    }
    uncheck.finish();
}

void customerregister::on_confirmButton_clicked()
{

}

