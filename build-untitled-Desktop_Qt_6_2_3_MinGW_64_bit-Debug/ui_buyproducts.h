/********************************************************************************
** Form generated from reading UI file 'buyproducts.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYPRODUCTS_H
#define UI_BUYPRODUCTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buyproducts
{
public:
    QListView *id;
    QComboBox *comboBox;
    QListView *productname;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *pid;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *pname;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *pprice;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *pcompany;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *quantity;

    void setupUi(QDialog *buyproducts)
    {
        if (buyproducts->objectName().isEmpty())
            buyproducts->setObjectName(QString::fromUtf8("buyproducts"));
        buyproducts->resize(622, 435);
        id = new QListView(buyproducts);
        id->setObjectName(QString::fromUtf8("id"));
        id->setGeometry(QRect(450, 50, 61, 241));
        comboBox = new QComboBox(buyproducts);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(370, 50, 72, 31));
        productname = new QListView(buyproducts);
        productname->setObjectName(QString::fromUtf8("productname"));
        productname->setGeometry(QRect(510, 50, 101, 241));
        widget = new QWidget(buyproducts);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 60, 251, 18));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        pid = new QLabel(widget);
        pid->setObjectName(QString::fromUtf8("pid"));

        horizontalLayout->addWidget(pid);

        widget1 = new QWidget(buyproducts);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(80, 100, 251, 18));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pname = new QLabel(widget1);
        pname->setObjectName(QString::fromUtf8("pname"));

        horizontalLayout_2->addWidget(pname);

        widget2 = new QWidget(buyproducts);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(80, 140, 251, 18));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        pprice = new QLabel(widget2);
        pprice->setObjectName(QString::fromUtf8("pprice"));

        horizontalLayout_3->addWidget(pprice);

        widget3 = new QWidget(buyproducts);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(80, 190, 251, 18));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        pcompany = new QLabel(widget3);
        pcompany->setObjectName(QString::fromUtf8("pcompany"));

        horizontalLayout_4->addWidget(pcompany);

        widget4 = new QWidget(buyproducts);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(80, 240, 93, 27));
        horizontalLayout_5 = new QHBoxLayout(widget4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        quantity = new QSpinBox(widget4);
        quantity->setObjectName(QString::fromUtf8("quantity"));

        horizontalLayout_5->addWidget(quantity);


        retranslateUi(buyproducts);

        QMetaObject::connectSlotsByName(buyproducts);
    } // setupUi

    void retranslateUi(QDialog *buyproducts)
    {
        buyproducts->setWindowTitle(QCoreApplication::translate("buyproducts", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("buyproducts", "Product ID", nullptr));
        pid->setText(QString());
        label_2->setText(QCoreApplication::translate("buyproducts", "Product name", nullptr));
        pname->setText(QString());
        label_3->setText(QCoreApplication::translate("buyproducts", "Price", nullptr));
        pprice->setText(QString());
        label_7->setText(QCoreApplication::translate("buyproducts", "Company", nullptr));
        pcompany->setText(QString());
        label_5->setText(QCoreApplication::translate("buyproducts", "Quantity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buyproducts: public Ui_buyproducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYPRODUCTS_H
