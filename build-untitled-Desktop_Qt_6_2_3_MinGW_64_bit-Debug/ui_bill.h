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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_bill
{
public:
    QTableView *viewbill;
    QPushButton *confirm;
    QLabel *label;
    QLineEdit *price;
    QLineEdit *vat;
    QLabel *label_2;
    QLineEdit *discount;
    QLabel *label_3;
    QLineEdit *total;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *bill)
    {
        if (bill->objectName().isEmpty())
            bill->setObjectName(QString::fromUtf8("bill"));
        bill->resize(630, 500);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../pictures/minilogo_g9m_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        bill->setWindowIcon(icon);
        viewbill = new QTableView(bill);
        viewbill->setObjectName(QString::fromUtf8("viewbill"));
        viewbill->setGeometry(QRect(220, 90, 408, 211));
        QFont font;
        viewbill->setFont(font);
        confirm = new QPushButton(bill);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(540, 400, 80, 24));
        confirm->setFont(font);
        label = new QLabel(bill);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 310, 41, 24));
        label->setFont(font);
        price = new QLineEdit(bill);
        price->setObjectName(QString::fromUtf8("price"));
        price->setGeometry(QRect(320, 310, 100, 22));
        price->setFont(font);
        vat = new QLineEdit(bill);
        vat->setObjectName(QString::fromUtf8("vat"));
        vat->setGeometry(QRect(520, 340, 100, 22));
        vat->setFont(font);
        label_2 = new QLabel(bill);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(450, 340, 71, 24));
        label_2->setFont(font);
        discount = new QLineEdit(bill);
        discount->setObjectName(QString::fromUtf8("discount"));
        discount->setGeometry(QRect(520, 310, 100, 22));
        discount->setFont(font);
        label_3 = new QLabel(bill);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(430, 310, 91, 24));
        label_3->setFont(font);
        total = new QLineEdit(bill);
        total->setObjectName(QString::fromUtf8("total"));
        total->setGeometry(QRect(520, 370, 100, 22));
        total->setFont(font);
        label_4 = new QLabel(bill);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 370, 101, 24));
        label_4->setFont(font);
        label_5 = new QLabel(bill);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 0, 630, 500));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../pictures/bill.jpg")));
        label_5->setScaledContents(true);
        label_5->raise();
        viewbill->raise();
        confirm->raise();
        label->raise();
        price->raise();
        vat->raise();
        label_2->raise();
        discount->raise();
        label_3->raise();
        total->raise();
        label_4->raise();

        retranslateUi(bill);

        QMetaObject::connectSlotsByName(bill);
    } // setupUi

    void retranslateUi(QDialog *bill)
    {
        bill->setWindowTitle(QCoreApplication::translate("bill", "Invoice", nullptr));
        confirm->setText(QCoreApplication::translate("bill", "Confirm", nullptr));
        label->setText(QCoreApplication::translate("bill", "Price", nullptr));
        label_2->setText(QCoreApplication::translate("bill", "VAT (13%)", nullptr));
        label_3->setText(QCoreApplication::translate("bill", "Discount(8%) ", nullptr));
        label_4->setText(QCoreApplication::translate("bill", "Grand Total", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bill: public Ui_bill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILL_H
