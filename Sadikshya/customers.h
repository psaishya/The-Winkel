#ifndef CUSTOMERS_H
#define CUSTOMERS_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>


namespace Ui {
class customers;
}

class customers : public QDialog
{
    Q_OBJECT

public:
    explicit customers(QWidget *parent = nullptr);
    ~customers();

private slots:


    void on_registerbutton_clicked();

    void on_loginbutton_clicked();

private:
    Ui::customers *ui;
    QSqlDatabase mydb;

};

#endif // CUSTOMERS_H
