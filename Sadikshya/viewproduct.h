#ifndef VIEWPRODUCT_H
#define VIEWPRODUCT_H

#include <QDialog>

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
};

#endif // VIEWPRODUCT_H
