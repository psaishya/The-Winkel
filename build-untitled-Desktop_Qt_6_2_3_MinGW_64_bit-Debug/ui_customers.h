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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_customers
{
public:
    QLabel *background;
    QLineEdit *inputusername;
    QLabel *usernamelabel;
    QLabel *passwordlabel;
    QLineEdit *inputpassword;
    QPushButton *loginbutton;
    QLabel *label;

    void setupUi(QDialog *customers)
    {
        if (customers->objectName().isEmpty())
            customers->setObjectName(QString::fromUtf8("customers"));
        customers->resize(1366, 748);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../pictures/minilogo_g9m_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        customers->setWindowIcon(icon);
        background = new QLabel(customers);
        background->setObjectName(QString::fromUtf8("background"));
        background->setEnabled(true);
        background->setGeometry(QRect(0, 0, 1366, 748));
        background->setPixmap(QPixmap(QString::fromUtf8("../pictures/customerloginbkg.jpg")));
        background->setScaledContents(true);
        background->setWordWrap(false);
        background->setIndent(0);
        inputusername = new QLineEdit(customers);
        inputusername->setObjectName(QString::fromUtf8("inputusername"));
        inputusername->setGeometry(QRect(270, 210, 241, 41));
        QFont font;
        font.setPointSize(20);
        inputusername->setFont(font);
        usernamelabel = new QLabel(customers);
        usernamelabel->setObjectName(QString::fromUtf8("usernamelabel"));
        usernamelabel->setGeometry(QRect(310, 170, 181, 31));
        usernamelabel->setFont(font);
        passwordlabel = new QLabel(customers);
        passwordlabel->setObjectName(QString::fromUtf8("passwordlabel"));
        passwordlabel->setGeometry(QRect(320, 280, 161, 21));
        passwordlabel->setFont(font);
        inputpassword = new QLineEdit(customers);
        inputpassword->setObjectName(QString::fromUtf8("inputpassword"));
        inputpassword->setGeometry(QRect(270, 310, 241, 41));
        inputpassword->setFont(font);
        inputpassword->setEchoMode(QLineEdit::Password);
        loginbutton = new QPushButton(customers);
        loginbutton->setObjectName(QString::fromUtf8("loginbutton"));
        loginbutton->setGeometry(QRect(270, 370, 241, 41));
        QFont font1;
        font1.setPointSize(18);
        loginbutton->setFont(font1);
        label = new QLabel(customers);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 440, 181, 24));
        QFont font2;
        font2.setPointSize(12);
        font2.setUnderline(true);
        label->setFont(font2);

        retranslateUi(customers);

        QMetaObject::connectSlotsByName(customers);
    } // setupUi

    void retranslateUi(QDialog *customers)
    {
        customers->setWindowTitle(QCoreApplication::translate("customers", "THE WINKEL - Customer Login", nullptr));
        background->setText(QString());
        usernamelabel->setText(QCoreApplication::translate("customers", "Username", nullptr));
        passwordlabel->setText(QCoreApplication::translate("customers", "Password", nullptr));
        loginbutton->setText(QCoreApplication::translate("customers", "Login", nullptr));
        label->setText(QCoreApplication::translate("customers", "Haven't registered yet?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customers: public Ui_customers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERS_H
