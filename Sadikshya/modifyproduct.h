#ifndef MODIFYPRODUCT_H
#define MODIFYPRODUCT_H

#include <QDialog>

namespace Ui {
class modifyproduct;
}

class modifyproduct : public QDialog
{
    Q_OBJECT

public:
    explicit modifyproduct(QWidget *parent = nullptr);
    ~modifyproduct();

private slots:
    void on_pushButtonadd_clicked();

    void on_pushButtonview_clicked();

    void on_pushButtondelete_clicked();

private:
    Ui::modifyproduct *ui;
};

#endif // MODIFYPRODUCT_H
