/********************************************************************************
** Form generated from reading UI file 'customers.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERS_H
#define UI_CUSTOMERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_customers
{
public:
    QGroupBox *groupBox;
    QPushButton *registerbutton;
    QLabel *usernamelabel;
    QLabel *passwordlabel;
    QLabel *label;
    QLineEdit *inputpassword;
    QLineEdit *inputusername;
    QPushButton *loginbutton;

    void setupUi(QDialog *customers)
    {
        if (customers->objectName().isEmpty())
            customers->setObjectName(QString::fromUtf8("customers"));
        customers->resize(732, 491);
        groupBox = new QGroupBox(customers);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(100, 40, 531, 391));
        registerbutton = new QPushButton(groupBox);
        registerbutton->setObjectName(QString::fromUtf8("registerbutton"));
        registerbutton->setGeometry(QRect(300, 330, 101, 24));
        usernamelabel = new QLabel(groupBox);
        usernamelabel->setObjectName(QString::fromUtf8("usernamelabel"));
        usernamelabel->setGeometry(QRect(130, 140, 71, 16));
        passwordlabel = new QLabel(groupBox);
        passwordlabel->setObjectName(QString::fromUtf8("passwordlabel"));
        passwordlabel->setGeometry(QRect(130, 200, 61, 16));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 330, 181, 21));
        inputpassword = new QLineEdit(groupBox);
        inputpassword->setObjectName(QString::fromUtf8("inputpassword"));
        inputpassword->setGeometry(QRect(290, 200, 113, 24));
        inputpassword->setEchoMode(QLineEdit::Password);
        inputusername = new QLineEdit(groupBox);
        inputusername->setObjectName(QString::fromUtf8("inputusername"));
        inputusername->setGeometry(QRect(290, 140, 113, 24));
        loginbutton = new QPushButton(groupBox);
        loginbutton->setObjectName(QString::fromUtf8("loginbutton"));
        loginbutton->setGeometry(QRect(310, 250, 80, 24));

        retranslateUi(customers);

        QMetaObject::connectSlotsByName(customers);
    } // setupUi

    void retranslateUi(QDialog *customers)
    {
        customers->setWindowTitle(QCoreApplication::translate("customers", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("customers", "Welcome to customer login page", nullptr));
        registerbutton->setText(QCoreApplication::translate("customers", " Register here", nullptr));
        usernamelabel->setText(QCoreApplication::translate("customers", "Username", nullptr));
        passwordlabel->setText(QCoreApplication::translate("customers", "Password", nullptr));
        label->setText(QCoreApplication::translate("customers", "Haven't registered yet?", nullptr));
        loginbutton->setText(QCoreApplication::translate("customers", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customers: public Ui_customers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERS_H
