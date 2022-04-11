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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bill
{
public:
    QTableView *viewbill;
    QPushButton *confirm;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *price;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *vat;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *discount;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *total;

    void setupUi(QDialog *bill)
    {
        if (bill->objectName().isEmpty())
            bill->setObjectName(QString::fromUtf8("bill"));
        bill->resize(487, 412);
        viewbill = new QTableView(bill);
        viewbill->setObjectName(QString::fromUtf8("viewbill"));
        viewbill->setGeometry(QRect(0, 40, 451, 211));
        confirm = new QPushButton(bill);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(400, 380, 80, 24));
        widget = new QWidget(bill);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(320, 260, 151, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        price = new QLineEdit(widget);
        price->setObjectName(QString::fromUtf8("price"));

        horizontalLayout->addWidget(price);

        widget1 = new QWidget(bill);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(300, 290, 171, 26));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        vat = new QLineEdit(widget1);
        vat->setObjectName(QString::fromUtf8("vat"));

        horizontalLayout_2->addWidget(vat);

        widget2 = new QWidget(bill);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(270, 320, 201, 26));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        discount = new QLineEdit(widget2);
        discount->setObjectName(QString::fromUtf8("discount"));

        horizontalLayout_3->addWidget(discount);

        widget3 = new QWidget(bill);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(280, 350, 191, 26));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        total = new QLineEdit(widget3);
        total->setObjectName(QString::fromUtf8("total"));

        horizontalLayout_4->addWidget(total);


        retranslateUi(bill);

        QMetaObject::connectSlotsByName(bill);
    } // setupUi

    void retranslateUi(QDialog *bill)
    {
        bill->setWindowTitle(QCoreApplication::translate("bill", "Dialog", nullptr));
        confirm->setText(QCoreApplication::translate("bill", "Confirm", nullptr));
        label->setText(QCoreApplication::translate("bill", "Price", nullptr));
        label_2->setText(QCoreApplication::translate("bill", "VAT (13%)", nullptr));
        label_3->setText(QCoreApplication::translate("bill", "Discount(8%) ", nullptr));
        label_4->setText(QCoreApplication::translate("bill", "TOTAL PRICE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bill: public Ui_bill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILL_H
