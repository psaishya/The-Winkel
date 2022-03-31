/********************************************************************************
** Form generated from reading UI file 'bill.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILL_H
#define UI_BILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_bill
{
public:
    QTableView *viewbill;
    QPushButton *confirm;

    void setupUi(QDialog *bill)
    {
        if (bill->objectName().isEmpty())
            bill->setObjectName(QString::fromUtf8("bill"));
        bill->resize(485, 331);
        viewbill = new QTableView(bill);
        viewbill->setObjectName(QString::fromUtf8("viewbill"));
        viewbill->setGeometry(QRect(0, 40, 481, 192));
        confirm = new QPushButton(bill);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(380, 270, 80, 24));

        retranslateUi(bill);

        QMetaObject::connectSlotsByName(bill);
    } // setupUi

    void retranslateUi(QDialog *bill)
    {
        bill->setWindowTitle(QCoreApplication::translate("bill", "Dialog", nullptr));
        confirm->setText(QCoreApplication::translate("bill", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bill: public Ui_bill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILL_H
