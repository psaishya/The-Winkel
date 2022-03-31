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
