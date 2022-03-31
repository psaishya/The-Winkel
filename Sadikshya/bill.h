#ifndef BILL_H
#define BILL_H

#include <QDialog>

#include<QtSql>
#include<QDebug>
namespace Ui {
class bill;
}

class bill : public QDialog
{
    Q_OBJECT

public:
    explicit bill(QWidget *parent = nullptr);
    ~bill();

private:
    Ui::bill *ui;
    QSqlDatabase viewbilldb;
};

#endif // BILL_H
