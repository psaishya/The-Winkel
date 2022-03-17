#ifndef CUSTOMERREGISTER_H
#define CUSTOMERREGISTER_H
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QDialog>

namespace Ui {
class customerregister;
}

class customerregister : public QDialog
{
    Q_OBJECT

public:
    explicit customerregister(QWidget *parent = nullptr);
    ~customerregister();

private slots:


    void on_pushbutton_register_clicked();

private:
    Ui::customerregister *ui;
    QSqlDatabase mydb;
};

#endif // CUSTOMERREGISTER_H
