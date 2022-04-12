#include "feedback.h"
#include "ui_feedback.h"
#include <customers.h>


feedback::feedback(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::feedback)
{
    ui->setupUi(this);

    QSqlDatabase feedbackdb =QSqlDatabase :: addDatabase("QSQLITE");
    feedbackdb.setDatabaseName("C:/Users/Shashank/OneDrive/Desktop/the final project/The-Winkel/database/winkel.db");
    if (feedbackdb.open())
    {
        qDebug()<<"opened\n";
    }
    else {
        qDebug()<<"Failed";
    }
}

feedback::~feedback()
{
    delete ui;
    feedbackdb.close();
}

void feedback::on_submit_clicked()
{
    QString fback;
    if(ui->poor->isChecked())
    {
        fback="Poor";
    }
    else if(ui->satisfactory->isChecked())
    {
        fback="Satisfactory";
    }
    else
    {
        fback="Good";
    }
    qDebug()<<customers::usname;
    QString usn=customers::usname;
    feedbackdb.open();
    QSqlQuery fb;

    fb.prepare("UPDATE register SET Feedback='"+fback+"' where username='"+usn+"'");
    if(fb.exec())
    {
      qDebug()<<"Feedback inserted";
    }

    else
    {
        qDebug()<<"Feedback insertion failed";
    }

    hide();
}

