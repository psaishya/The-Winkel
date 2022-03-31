#ifndef BUYPRODUCTS_H
#define BUYPRODUCTS_H

#include <QDialog>

#include<QtSql>
#include<QDebug>


namespace Ui {
class buyproducts;
}

class buyproducts : public QDialog
{
    Q_OBJECT

public:
    explicit buyproducts(QWidget *parent = nullptr);
    ~buyproducts();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_addtocart_clicked();

    void on_remove_clicked();

private:
    Ui::buyproducts *ui;
     QSqlDatabase productdb;
     QSqlDatabase selecteddb;
};

#endif // BUYPRODUCTS_H
