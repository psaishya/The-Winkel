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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buyproducts
{
public:
    QListView *id;
    QComboBox *comboBox;
    QListView *productname;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *addtocart;
    QPushButton *remove;
    QPushButton *buy;
    QPushButton *exit;
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
    QWidget *widget5;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QListView *name1;
    QWidget *widget6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QListView *quantity1;
    QWidget *widget7;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QListView *price1;

    void setupUi(QDialog *buyproducts)
    {
        if (buyproducts->objectName().isEmpty())
            buyproducts->setObjectName(QString::fromUtf8("buyproducts"));
        buyproducts->resize(760, 546);
        id = new QListView(buyproducts);
        id->setObjectName(QString::fromUtf8("id"));
        id->setGeometry(QRect(570, 50, 61, 241));
        comboBox = new QComboBox(buyproducts);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(440, 50, 72, 31));
        productname = new QListView(buyproducts);
        productname->setObjectName(QString::fromUtf8("productname"));
        productname->setGeometry(QRect(630, 50, 101, 241));
        label_4 = new QLabel(buyproducts);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 280, 171, 16));
        label_6 = new QLabel(buyproducts);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(570, 30, 151, 16));
        addtocart = new QPushButton(buyproducts);
        addtocart->setObjectName(QString::fromUtf8("addtocart"));
        addtocart->setGeometry(QRect(330, 310, 91, 24));
        remove = new QPushButton(buyproducts);
        remove->setObjectName(QString::fromUtf8("remove"));
        remove->setGeometry(QRect(330, 350, 91, 24));
        buy = new QPushButton(buyproducts);
        buy->setObjectName(QString::fromUtf8("buy"));
        buy->setGeometry(QRect(630, 480, 80, 24));
        exit = new QPushButton(buyproducts);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(630, 520, 80, 24));
        widget = new QWidget(buyproducts);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(150, 60, 251, 18));
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
        widget1->setGeometry(QRect(150, 100, 251, 18));
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
        widget2->setGeometry(QRect(150, 140, 251, 18));
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
        widget3->setGeometry(QRect(150, 180, 251, 18));
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
        widget4->setGeometry(QRect(150, 210, 93, 27));
        horizontalLayout_5 = new QHBoxLayout(widget4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        quantity = new QSpinBox(widget4);
        quantity->setObjectName(QString::fromUtf8("quantity"));

        horizontalLayout_5->addWidget(quantity);

        widget5 = new QWidget(buyproducts);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        widget5->setGeometry(QRect(50, 310, 91, 216));
        verticalLayout = new QVBoxLayout(widget5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        name1 = new QListView(widget5);
        name1->setObjectName(QString::fromUtf8("name1"));

        verticalLayout->addWidget(name1);

        widget6 = new QWidget(buyproducts);
        widget6->setObjectName(QString::fromUtf8("widget6"));
        widget6->setGeometry(QRect(140, 310, 81, 216));
        verticalLayout_2 = new QVBoxLayout(widget6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget6);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        quantity1 = new QListView(widget6);
        quantity1->setObjectName(QString::fromUtf8("quantity1"));

        verticalLayout_2->addWidget(quantity1);

        widget7 = new QWidget(buyproducts);
        widget7->setObjectName(QString::fromUtf8("widget7"));
        widget7->setGeometry(QRect(220, 310, 72, 216));
        verticalLayout_3 = new QVBoxLayout(widget7);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget7);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_3->addWidget(label_10);

        price1 = new QListView(widget7);
        price1->setObjectName(QString::fromUtf8("price1"));

        verticalLayout_3->addWidget(price1);


        retranslateUi(buyproducts);

        QMetaObject::connectSlotsByName(buyproducts);
    } // setupUi

    void retranslateUi(QDialog *buyproducts)
    {
        buyproducts->setWindowTitle(QCoreApplication::translate("buyproducts", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("buyproducts", "YOUR CART", nullptr));
        label_6->setText(QCoreApplication::translate("buyproducts", "Available products", nullptr));
        addtocart->setText(QCoreApplication::translate("buyproducts", "ADD TO CART", nullptr));
        remove->setText(QCoreApplication::translate("buyproducts", "REMOVE", nullptr));
        buy->setText(QCoreApplication::translate("buyproducts", "BUY", nullptr));
        exit->setText(QCoreApplication::translate("buyproducts", "EXIT", nullptr));
        label->setText(QCoreApplication::translate("buyproducts", "Product ID", nullptr));
        pid->setText(QString());
        label_2->setText(QCoreApplication::translate("buyproducts", "Product name", nullptr));
        pname->setText(QString());
        label_3->setText(QCoreApplication::translate("buyproducts", "Price", nullptr));
        pprice->setText(QString());
        label_7->setText(QCoreApplication::translate("buyproducts", "Company", nullptr));
        pcompany->setText(QString());
        label_5->setText(QCoreApplication::translate("buyproducts", "Quantity", nullptr));
        label_8->setText(QCoreApplication::translate("buyproducts", "Product", nullptr));
        label_9->setText(QCoreApplication::translate("buyproducts", "Quantity", nullptr));
        label_10->setText(QCoreApplication::translate("buyproducts", "Price", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buyproducts: public Ui_buyproducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYPRODUCTS_H
