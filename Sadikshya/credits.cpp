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
     QMessageBox::information(this,"Payment check","THANK YOU! The products will be available to you as soon as the verification of credit card is complete.");
     hide();
}

