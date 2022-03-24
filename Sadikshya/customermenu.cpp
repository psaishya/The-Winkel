#include "customermenu.h"
#include "ui_customermenu.h"

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
