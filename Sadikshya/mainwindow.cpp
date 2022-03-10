#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginpage.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_nextbutton_clicked()
{
    hide();
    loginpage Login;
    Login.setModal(true);
    Login.exec();
}

