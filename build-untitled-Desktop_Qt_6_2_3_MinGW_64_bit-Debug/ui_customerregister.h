/********************************************************************************
** Form generated from reading UI file 'customerregister.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERREGISTER_H
#define UI_CUSTOMERREGISTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_customerregister
{
public:
    QPushButton *pushbutton_register;
    QLabel *usernametaken;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *inputconfirm;
    QLineEdit *inputpassword;
    QLineEdit *inputusername;
    QLineEdit *inputname;
    QLineEdit *inputcontact;

    void setupUi(QDialog *customerregister)
    {
        if (customerregister->objectName().isEmpty())
            customerregister->setObjectName(QString::fromUtf8("customerregister"));
        customerregister->resize(600, 400);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../pictures/minilogo_g9m_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        customerregister->setWindowIcon(icon);
        pushbutton_register = new QPushButton(customerregister);
        pushbutton_register->setObjectName(QString::fromUtf8("pushbutton_register"));
        pushbutton_register->setGeometry(QRect(320, 300, 111, 29));
        QFont font;
        font.setFamilies({QString::fromUtf8("Audiowide")});
        pushbutton_register->setFont(font);
        usernametaken = new QLabel(customerregister);
        usernametaken->setObjectName(QString::fromUtf8("usernametaken"));
        usernametaken->setGeometry(QRect(240, 270, 301, 16));
        usernametaken->setFont(font);
        label_6 = new QLabel(customerregister);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, -10, 600, 421));
        QFont font1;
        font1.setPointSize(11);
        label_6->setFont(font1);
        label_6->setPixmap(QPixmap(QString::fromUtf8("../pictures/customerregistrationbkg.jpg")));
        label = new QLabel(customerregister);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 120, 51, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Audiowide")});
        font2.setPointSize(10);
        label->setFont(font2);
        label_2 = new QLabel(customerregister);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 170, 91, 16));
        label_2->setFont(font2);
        label_3 = new QLabel(customerregister);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(420, 220, 171, 21));
        label_3->setFont(font2);
        label_4 = new QLabel(customerregister);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(450, 170, 121, 16));
        label_4->setFont(font2);
        label_5 = new QLabel(customerregister);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(450, 120, 111, 16));
        label_5->setFont(font2);
        inputconfirm = new QLineEdit(customerregister);
        inputconfirm->setObjectName(QString::fromUtf8("inputconfirm"));
        inputconfirm->setGeometry(QRect(410, 240, 170, 18));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Audiowide")});
        font3.setPointSize(11);
        inputconfirm->setFont(font3);
        inputconfirm->setEchoMode(QLineEdit::Password);
        inputpassword = new QLineEdit(customerregister);
        inputpassword->setObjectName(QString::fromUtf8("inputpassword"));
        inputpassword->setGeometry(QRect(410, 190, 170, 18));
        inputpassword->setFont(font3);
        inputpassword->setEchoMode(QLineEdit::Password);
        inputusername = new QLineEdit(customerregister);
        inputusername->setObjectName(QString::fromUtf8("inputusername"));
        inputusername->setGeometry(QRect(410, 140, 170, 18));
        inputusername->setFont(font3);
        inputname = new QLineEdit(customerregister);
        inputname->setObjectName(QString::fromUtf8("inputname"));
        inputname->setGeometry(QRect(200, 140, 170, 18));
        inputname->setFont(font3);
        inputcontact = new QLineEdit(customerregister);
        inputcontact->setObjectName(QString::fromUtf8("inputcontact"));
        inputcontact->setGeometry(QRect(200, 190, 170, 18));
        inputcontact->setFont(font3);
        label_6->raise();
        pushbutton_register->raise();
        usernametaken->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        inputconfirm->raise();
        inputpassword->raise();
        inputusername->raise();
        inputname->raise();
        inputcontact->raise();
        QWidget::setTabOrder(inputname, inputcontact);
        QWidget::setTabOrder(inputcontact, inputusername);
        QWidget::setTabOrder(inputusername, inputpassword);
        QWidget::setTabOrder(inputpassword, inputconfirm);
        QWidget::setTabOrder(inputconfirm, pushbutton_register);

        retranslateUi(customerregister);

        QMetaObject::connectSlotsByName(customerregister);
    } // setupUi

    void retranslateUi(QDialog *customerregister)
    {
        customerregister->setWindowTitle(QCoreApplication::translate("customerregister", "Customer Register", nullptr));
        pushbutton_register->setText(QCoreApplication::translate("customerregister", "Register", nullptr));
        usernametaken->setText(QString());
        label_6->setText(QString());
        label->setText(QCoreApplication::translate("customerregister", "NAME", nullptr));
        label_2->setText(QCoreApplication::translate("customerregister", "CONTACT", nullptr));
        label_3->setText(QCoreApplication::translate("customerregister", "CONFRIM PASSWORD", nullptr));
        label_4->setText(QCoreApplication::translate("customerregister", "PASSWORD", nullptr));
        label_5->setText(QCoreApplication::translate("customerregister", "USERNAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customerregister: public Ui_customerregister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERREGISTER_H
