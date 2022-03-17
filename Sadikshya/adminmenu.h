#ifndef ADMINMENU_H
#define ADMINMENU_H

#include <QDialog>

namespace Ui {
class adminmenu;
}

class adminmenu : public QDialog
{
    Q_OBJECT

public:
    explicit adminmenu(QWidget *parent = nullptr);
    ~adminmenu();

private slots:
    void on_pushButtonmodify_clicked();

    void on_pushButtonview_clicked();

private:
    Ui::adminmenu *ui;
};

#endif // ADMINMENU_H
