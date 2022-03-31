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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *pid;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *pname;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *pprice;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *pcompany;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *quantity;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QListView *name1;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QListView *quantity1;
    QWidget *layoutWidget7;
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
        layoutWidget = new QWidget(buyproducts);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 60, 251, 18));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        pid = new QLabel(layoutWidget);
        pid->setObjectName(QString::fromUtf8("pid"));

        horizontalLayout->addWidget(pid);

        layoutWidget1 = new QWidget(buyproducts);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(150, 100, 251, 18));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pname = new QLabel(layoutWidget1);
        pname->setObjectName(QString::fromUtf8("pname"));

        horizontalLayout_2->addWidget(pname);

        layoutWidget2 = new QWidget(buyproducts);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(150, 140, 251, 18));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        pprice = new QLabel(layoutWidget2);
        pprice->setObjectName(QString::fromUtf8("pprice"));

        horizontalLayout_3->addWidget(pprice);

        layoutWidget3 = new QWidget(buyproducts);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(150, 180, 251, 18));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        pcompany = new QLabel(layoutWidget3);
        pcompany->setObjectName(QString::fromUtf8("pcompany"));

        horizontalLayout_4->addWidget(pcompany);

        layoutWidget4 = new QWidget(buyproducts);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(150, 210, 93, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        quantity = new QSpinBox(layoutWidget4);
        quantity->setObjectName(QString::fromUtf8("quantity"));
        quantity->setMinimum(1);

        horizontalLayout_5->addWidget(quantity);

        layoutWidget5 = new QWidget(buyproducts);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(50, 310, 91, 216));
        verticalLayout = new QVBoxLayout(layoutWidget5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        name1 = new QListView(layoutWidget5);
        name1->setObjectName(QString::fromUtf8("name1"));

        verticalLayout->addWidget(name1);

        layoutWidget6 = new QWidget(buyproducts);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(140, 310, 81, 216));
        verticalLayout_2 = new QVBoxLayout(layoutWidget6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget6);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        quantity1 = new QListView(layoutWidget6);
        quantity1->setObjectName(QString::fromUtf8("quantity1"));

        verticalLayout_2->addWidget(quantity1);

        layoutWidget7 = new QWidget(buyproducts);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(220, 310, 72, 216));
        verticalLayout_3 = new QVBoxLayout(layoutWidget7);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget7);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_3->addWidget(label_10);

        price1 = new QListView(layoutWidget7);
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
