#include "loginpage.h"
#include "ui_loginpage.h"
#include "admin.h"
#include "customers.h"

loginpage::loginpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginpage)
{
    ui->setupUi(this);
}

loginpage::~loginpage()
{
    delete ui;
}

void loginpage::on_pushButtonadmin_clicked()
{
    admin adlogin;
    adlogin.setModal(true);
    adlogin.exec();
}



void loginpage::on_pushButton_custpmer_clicked()
{
    customers culogin;
    culogin.setModal(true);
    culogin.exec();
}

