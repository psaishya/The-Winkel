#include "credits.h"
#include "ui_credits.h"
#include <QMessageBox>

credits::credits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::credits)
{
    ui->setupUi(this);
}

credits::~credits()
{
    delete ui;
}



void credits::on_paybutton_clicked()
{
    QString cardnob = ui ->cardnumber->text();
    if (cardnob==""){
        QMessageBox :: warning (this,"","Enter a valid card no ");
        QString pin = ui -> pin->text();
        if (pin==""){
            QMessageBox :: warning (this,"","Enter a valid pin no ");

        }

    }

       else{
     QMessageBox::information(this,"Payment check","THANK YOU! The products will be available to you as soon as the verification of credit card is complete.");
     hide();
    }
}

