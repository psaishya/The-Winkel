#include "feedback.h"
#include "ui_feedback.h"

feedback::feedback(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::feedback)
{
    ui->setupUi(this);
}

feedback::~feedback()
{
    delete ui;
}

void feedback::on_submit_clicked()
{
    QString feedback;
    if(ui->poor->isChecked())
    {
        feedback="Poor";
    }
    else if(ui->satisfactory->isChecked())
    {
        feedback="Satisfactory";
    }
    else
    {
        feedback="Good";
    }
    hide();
}

