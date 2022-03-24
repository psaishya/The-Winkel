#ifndef VIEWCUSTOMER_H
#define VIEWCUSTOMER_H

#include <QDialog>
#include<QtSql>
#include<QDebug>
#include<QFileInfo>

namespace Ui {
class viewcustomer;
}

class viewcustomer : public QDialog
{
    Q_OBJECT

public:
    explicit viewcustomer(QWidget *parent = nullptr);
    ~viewcustomer();

private:
    Ui::viewcustomer *ui;
     QSqlDatabase customerdb;;
};

#endif // VIEWCUSTOMER_H
