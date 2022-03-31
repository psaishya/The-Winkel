#ifndef FEEDBACK_H
#define FEEDBACK_H

#include <QDialog>

namespace Ui {
class feedback;
}

class feedback : public QDialog
{
    Q_OBJECT

public:
    explicit feedback(QWidget *parent = nullptr);
    ~feedback();

private:
    Ui::feedback *ui;
};

#endif // FEEDBACK_H
