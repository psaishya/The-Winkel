#ifndef CUSTOMERREGISTRATION_H
#define CUSTOMERREGISTRATION_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

namespace Ui {
class customerregistration;
}

class customerregistration : public QDialog
{
    Q_OBJECT

public:
    explicit customerregistration(QWidget *parent = nullptr);
    ~customerregistration();

private slots:
    void on_registerbutton_clicked();

private:
    Ui::customerregistration *ui;
    QSqlDatabase mydb;

};

#endif // CUSTOMERREGISTRATION_H
