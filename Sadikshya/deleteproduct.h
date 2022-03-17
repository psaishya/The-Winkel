#ifndef DELETEPRODUCT_H
#define DELETEPRODUCT_H

#include <QDialog>
#include<QtSql>
#include<QDebug>
#include<QFileInfo>


namespace Ui {
class deleteproduct;
}

class deleteproduct : public QDialog
{
    Q_OBJECT

public:
    explicit deleteproduct(QWidget *parent = nullptr);
    ~deleteproduct();

private slots:
    void on_pushButtondelete_clicked();

private:
    Ui::deleteproduct *ui;
    QSqlDatabase productdb;
};

#endif // DELETEPRODUCT_H
