#ifndef VIEWPRODUCT_H
#define VIEWPRODUCT_H

#include <QDialog>

#include<QtSql>
#include<QDebug>
#include<QFileInfo>

namespace Ui {
class viewproduct;
}

class viewproduct : public QDialog
{
    Q_OBJECT

public:
    explicit viewproduct(QWidget *parent = nullptr);
    ~viewproduct();

private:
    Ui::viewproduct *ui;
    QSqlDatabase productdb;
};

#endif // VIEWPRODUCT_H
