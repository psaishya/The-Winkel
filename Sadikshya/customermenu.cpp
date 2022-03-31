#include "customermenu.h"
#include "ui_customermenu.h"
#include "buyproducts.h"
#include "feedback.h"

customermenu::customermenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customermenu)
{
    ui->setupUi(this);
}

customermenu::~customermenu()
{
    delete ui;
}

void customermenu::on_Buyproductsbutton_clicked()
{
    buyproducts bproduct;
    bproduct.setModal(true);
    bproduct.exec();
}


void customermenu::on_Givefeedbackbutton_clicked()
{
    feedback gfeedback;
    gfeedback.setModal(true);
    gfeedback.exec();
}

