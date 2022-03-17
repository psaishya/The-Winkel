#include "admin.h"
#include "ui_admin.h"
#include "adminmenu.h"
#include <QMessageBox>

admin::admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
    ui->inputpassword->setDisabled(true);
}

admin::~admin()
{
    delete ui;
}

void admin::on_checkusernamebutton_clicked()
{
       username=ui->inputusername->text();
       if(username=="admin")
       {
           ui->msglabel->setText("Correct username, enter password");
           ui->inputpassword->setDisabled(false);
       }

       else
       {
           ui->msglabel->setText("Incorrect username, enter again");
       }
}

void admin::on_loginbutton_clicked()
{
    ui->inputpassword->setDisabled(false);
    password=ui->inputpassword->text();
    if(password=="admin")
    {
        ui->msglabel->setText("Login successful");
        adminmenu admenu;
        admenu.setModal(true);
        admenu.exec();

        //break;
    }

    else
    {
        ui->msglabel->setText("");
        QMessageBox::warning(this,"Password error","You have entered wrong password. Try again");

    }
}

