#ifndef CUSTOMERMENU_H
#define CUSTOMERMENU_H

#include <QDialog>

namespace Ui {
class customermenu;
}

class customermenu : public QDialog
{
    Q_OBJECT

public:
    explicit customermenu(QWidget *parent = nullptr);
    ~customermenu();

private:
    Ui::customermenu *ui;
};

#endif // CUSTOMERMENU_H
