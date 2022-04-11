#ifndef FEEDBACK_H
#define FEEDBACK_H

#include <QDebug>
#include <QDialog>
#include <QtSql>
#include <QFileInfo>

namespace Ui {
class feedback;
}

class feedback : public QDialog
{
    Q_OBJECT

public:
    explicit feedback(QWidget *parent = nullptr);
    ~feedback();

private slots:
    void on_submit_clicked();

private:
    Ui::feedback *ui;
    QSqlDatabase feedbackdb;
};

#endif // FEEDBACK_H
