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

private:
    Ui::buyproducts *ui;
     QSqlDatabase productdb;
};

#endif // BUYPRODUCTS_H
