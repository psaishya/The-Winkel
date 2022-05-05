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
           ui->msglabel->setText("<font color = green>Correct username, enter password </font>");
           ui->inputpassword->setDisabled(false);
       }

       else
       {
           ui->msglabel->setText("<font color= red >Incorrect username, enter again</font>");
       }
}

void admin::on_loginbutton_clicked()
{
    password=ui->inputpassword->text();
    if(password=="admin")
    {
        ui->msglabel->setText("Login successful");
        adminmenu admenu;
        admenu.setModal(true);
        admenu.exec();
    }

    else
    {
        ui->msglabel->setText("");
        QMessageBox::warning(this,"Password error","You have entered wrong password. Try again");

    }
}

