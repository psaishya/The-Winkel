#ifndef ADDPRODUCT_H
#define ADDPRODUCT_H

#include <QDialog>
#include<QtSql>
#include<QDebug>
#include<QFileInfo>

namespace Ui {
class addproduct;
}

class addproduct : public QDialog
{
    Q_OBJECT

public:
    explicit addproduct(QWidget *parent = nullptr);
    ~addproduct();

private slots:
    void on_pushButtonenter_clicked();

    void on_pushButtonupdate_clicked();

    void on_pushButtondelete_clicked();

    void on_cbox_currentTextChanged(const QString &arg1);

    void on_cbox_activated(int index);

    void on_showbutton_clicked();

private:
    Ui::addproduct *ui;
      QSqlDatabase productdb;
};

#endif // ADDPRODUCT_H
