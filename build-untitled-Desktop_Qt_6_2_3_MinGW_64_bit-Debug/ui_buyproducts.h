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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

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
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_8;
    QListView *name1;
    QListView *price1;
    QListView *quantity1;
    QLabel *pid;
    QLabel *label;
    QLabel *label_2;
    QLabel *pname;
    QLabel *label_3;
    QLabel *pprice;
    QLabel *label_7;
    QLabel *pcompany;
    QLabel *label_5;
    QSpinBox *quantity;
    QLabel *label_11;
    QLabel *label_12;

    void setupUi(QDialog *buyproducts)
    {
        if (buyproducts->objectName().isEmpty())
            buyproducts->setObjectName(QString::fromUtf8("buyproducts"));
        buyproducts->resize(760, 546);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../pictures/minilogo_g9m_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        buyproducts->setWindowIcon(icon);
        id = new QListView(buyproducts);
        id->setObjectName(QString::fromUtf8("id"));
        id->setGeometry(QRect(570, 110, 61, 241));
        QFont font;
        id->setFont(font);
        comboBox = new QComboBox(buyproducts);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(490, 110, 72, 31));
        comboBox->setFont(font);
        productname = new QListView(buyproducts);
        productname->setObjectName(QString::fromUtf8("productname"));
        productname->setGeometry(QRect(630, 110, 101, 241));
        productname->setFont(font);
        label_4 = new QLabel(buyproducts);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 270, 111, 16));
        label_4->setFont(font);
        label_6 = new QLabel(buyproducts);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(570, 90, 151, 16));
        label_6->setFont(font);
        addtocart = new QPushButton(buyproducts);
        addtocart->setObjectName(QString::fromUtf8("addtocart"));
        addtocart->setGeometry(QRect(360, 260, 111, 24));
        addtocart->setFont(font);
        remove = new QPushButton(buyproducts);
        remove->setObjectName(QString::fromUtf8("remove"));
        remove->setGeometry(QRect(470, 260, 91, 24));
        remove->setFont(font);
        buy = new QPushButton(buyproducts);
        buy->setObjectName(QString::fromUtf8("buy"));
        buy->setGeometry(QRect(640, 360, 80, 24));
        buy->setFont(font);
        exit = new QPushButton(buyproducts);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(640, 390, 80, 24));
        exit->setFont(font);
        label_10 = new QLabel(buyproducts);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(340, 290, 73, 16));
        label_10->setFont(font);
        label_9 = new QLabel(buyproducts);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(260, 290, 79, 16));
        label_9->setFont(font);
        label_8 = new QLabel(buyproducts);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(170, 290, 89, 16));
        label_8->setFont(font);
        name1 = new QListView(buyproducts);
        name1->setObjectName(QString::fromUtf8("name1"));
        name1->setGeometry(QRect(170, 310, 89, 214));
        name1->setFont(font);
        price1 = new QListView(buyproducts);
        price1->setObjectName(QString::fromUtf8("price1"));
        price1->setGeometry(QRect(340, 310, 73, 214));
        price1->setFont(font);
        quantity1 = new QListView(buyproducts);
        quantity1->setObjectName(QString::fromUtf8("quantity1"));
        quantity1->setGeometry(QRect(260, 310, 79, 214));
        quantity1->setFont(font);
        pid = new QLabel(buyproducts);
        pid->setObjectName(QString::fromUtf8("pid"));
        pid->setGeometry(QRect(280, 130, 121, 16));
        pid->setFont(font);
        label = new QLabel(buyproducts);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 130, 91, 16));
        label->setFont(font);
        label_2 = new QLabel(buyproducts);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 110, 111, 16));
        label_2->setFont(font);
        pname = new QLabel(buyproducts);
        pname->setObjectName(QString::fromUtf8("pname"));
        pname->setGeometry(QRect(280, 110, 151, 16));
        pname->setFont(font);
        label_3 = new QLabel(buyproducts);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 170, 61, 16));
        label_3->setFont(font);
        pprice = new QLabel(buyproducts);
        pprice->setObjectName(QString::fromUtf8("pprice"));
        pprice->setGeometry(QRect(280, 170, 131, 20));
        pprice->setFont(font);
        label_7 = new QLabel(buyproducts);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 150, 71, 16));
        label_7->setFont(font);
        pcompany = new QLabel(buyproducts);
        pcompany->setObjectName(QString::fromUtf8("pcompany"));
        pcompany->setGeometry(QRect(280, 150, 231, 16));
        pcompany->setFont(font);
        label_5 = new QLabel(buyproducts);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(170, 210, 81, 25));
        label_5->setFont(font);
        quantity = new QSpinBox(buyproducts);
        quantity->setObjectName(QString::fromUtf8("quantity"));
        quantity->setGeometry(QRect(280, 210, 91, 22));
        quantity->setFont(font);
        quantity->setMinimum(1);
        label_11 = new QLabel(buyproducts);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 0, 760, 550));
        label_11->setPixmap(QPixmap(QString::fromUtf8("../pictures/buy.jpg")));
        label_12 = new QLabel(buyproducts);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(470, 90, 91, 20));
        label_12->setFont(font);
        label_11->raise();
        id->raise();
        comboBox->raise();
        productname->raise();
        label_4->raise();
        label_6->raise();
        addtocart->raise();
        remove->raise();
        buy->raise();
        exit->raise();
        label_10->raise();
        label_9->raise();
        label_8->raise();
        name1->raise();
        price1->raise();
        quantity1->raise();
        pid->raise();
        label->raise();
        label_2->raise();
        pname->raise();
        label_3->raise();
        pprice->raise();
        label_7->raise();
        pcompany->raise();
        label_5->raise();
        quantity->raise();
        label_12->raise();

        retranslateUi(buyproducts);

        QMetaObject::connectSlotsByName(buyproducts);
    } // setupUi

    void retranslateUi(QDialog *buyproducts)
    {
        buyproducts->setWindowTitle(QCoreApplication::translate("buyproducts", "Buy Products - The Winkel", nullptr));
        label_4->setText(QCoreApplication::translate("buyproducts", "YOUR CART", nullptr));
        label_6->setText(QCoreApplication::translate("buyproducts", "Available products", nullptr));
        addtocart->setText(QCoreApplication::translate("buyproducts", "ADD TO CART", nullptr));
        remove->setText(QCoreApplication::translate("buyproducts", "REMOVE", nullptr));
        buy->setText(QCoreApplication::translate("buyproducts", "BUY", nullptr));
        exit->setText(QCoreApplication::translate("buyproducts", "EXIT", nullptr));
        label_10->setText(QCoreApplication::translate("buyproducts", "Price", nullptr));
        label_9->setText(QCoreApplication::translate("buyproducts", "Quantity", nullptr));
        label_8->setText(QCoreApplication::translate("buyproducts", "Product", nullptr));
        pid->setText(QString());
        label->setText(QCoreApplication::translate("buyproducts", "Product ID :", nullptr));
        label_2->setText(QCoreApplication::translate("buyproducts", "Product name :", nullptr));
        pname->setText(QString());
        label_3->setText(QCoreApplication::translate("buyproducts", "Price :", nullptr));
        pprice->setText(QString());
        label_7->setText(QCoreApplication::translate("buyproducts", "Company :", nullptr));
        pcompany->setText(QString());
        label_5->setText(QCoreApplication::translate("buyproducts", "Quantity :", nullptr));
        label_11->setText(QString());
        label_12->setText(QCoreApplication::translate("buyproducts", "Select Here", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buyproducts: public Ui_buyproducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYPRODUCTS_H
