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
    mydb.close();
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
    QSqlQuery qry2;
    if (password!=repassword){
        QMessageBox :: warning (this,"","re confirm your password ");
    }
    else{
         mydb.open();
         qry2.exec("insert into register (name,contact,username,password) VALUES ('"+name+"','"+contact+"','"+username+"','"+password+"')");
         qDebug()<<qry2.lastError();
         qry2.finish();
         QMessageBox :: information (this,"","congrats you have been registered");
         hide();

    }
}

