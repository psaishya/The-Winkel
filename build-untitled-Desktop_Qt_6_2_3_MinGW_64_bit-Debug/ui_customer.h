/********************************************************************************
** Form generated from reading UI file 'customer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_H
#define UI_CUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customer
{
public:
    QWidget *centralwidget;
    QLineEdit *inputusername;
    QLineEdit *inputpassword;
    QLabel *usernamelabel;
    QLabel *passwordlabel;
    QPushButton *loginbutton;
    QPushButton *registerbutton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *customer)
    {
        if (customer->objectName().isEmpty())
            customer->setObjectName(QString::fromUtf8("customer"));
        customer->resize(691, 374);
        centralwidget = new QWidget(customer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        inputusername = new QLineEdit(centralwidget);
        inputusername->setObjectName(QString::fromUtf8("inputusername"));
        inputusername->setGeometry(QRect(380, 80, 113, 24));
        inputpassword = new QLineEdit(centralwidget);
        inputpassword->setObjectName(QString::fromUtf8("inputpassword"));
        inputpassword->setGeometry(QRect(380, 140, 113, 24));
        inputpassword->setEchoMode(QLineEdit::Password);
        usernamelabel = new QLabel(centralwidget);
        usernamelabel->setObjectName(QString::fromUtf8("usernamelabel"));
        usernamelabel->setGeometry(QRect(220, 80, 71, 16));
        passwordlabel = new QLabel(centralwidget);
        passwordlabel->setObjectName(QString::fromUtf8("passwordlabel"));
        passwordlabel->setGeometry(QRect(220, 140, 61, 16));
        loginbutton = new QPushButton(centralwidget);
        loginbutton->setObjectName(QString::fromUtf8("loginbutton"));
        loginbutton->setGeometry(QRect(400, 190, 80, 24));
        registerbutton = new QPushButton(centralwidget);
        registerbutton->setObjectName(QString::fromUtf8("registerbutton"));
        registerbutton->setGeometry(QRect(390, 270, 101, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 270, 181, 21));
        customer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(customer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 691, 25));
        customer->setMenuBar(menubar);
        statusbar = new QStatusBar(customer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        customer->setStatusBar(statusbar);

        retranslateUi(customer);

        QMetaObject::connectSlotsByName(customer);
    } // setupUi

    void retranslateUi(QMainWindow *customer)
    {
        customer->setWindowTitle(QCoreApplication::translate("customer", "MainWindow", nullptr));
        usernamelabel->setText(QCoreApplication::translate("customer", "Username", nullptr));
        passwordlabel->setText(QCoreApplication::translate("customer", "Password", nullptr));
        loginbutton->setText(QCoreApplication::translate("customer", "Login", nullptr));
        registerbutton->setText(QCoreApplication::translate("customer", " Register here", nullptr));
        label->setText(QCoreApplication::translate("customer", "Haven't registered yet?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customer: public Ui_customer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_H
