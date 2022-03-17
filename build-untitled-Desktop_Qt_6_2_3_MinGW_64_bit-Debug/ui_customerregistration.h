/********************************************************************************
** Form generated from reading UI file 'customerregistration.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERREGISTRATION_H
#define UI_CUSTOMERREGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customerregistration
{
public:
    QPushButton *registerbutton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *inputname;
    QLineEdit *inputcontact;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *namelabel;
    QLabel *contactlabel;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *inputusername;
    QLineEdit *inputpassword;
    QLineEdit *lineEdit;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *usernamelabell;
    QLabel *passwordlabel;
    QLabel *label;

    void setupUi(QDialog *customerregistration)
    {
        if (customerregistration->objectName().isEmpty())
            customerregistration->setObjectName(QString::fromUtf8("customerregistration"));
        customerregistration->resize(452, 342);
        registerbutton = new QPushButton(customerregistration);
        registerbutton->setObjectName(QString::fromUtf8("registerbutton"));
        registerbutton->setGeometry(QRect(260, 280, 80, 24));
        widget = new QWidget(customerregistration);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(240, 30, 127, 65));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        inputname = new QLineEdit(widget);
        inputname->setObjectName(QString::fromUtf8("inputname"));

        verticalLayout->addWidget(inputname);

        inputcontact = new QLineEdit(widget);
        inputcontact->setObjectName(QString::fromUtf8("inputcontact"));

        verticalLayout->addWidget(inputcontact);

        widget1 = new QWidget(customerregistration);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(70, 40, 67, 49));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        namelabel = new QLabel(widget1);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));

        verticalLayout_2->addWidget(namelabel);

        contactlabel = new QLabel(widget1);
        contactlabel->setObjectName(QString::fromUtf8("contactlabel"));

        verticalLayout_2->addWidget(contactlabel);

        widget2 = new QWidget(customerregistration);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(240, 170, 129, 102));
        verticalLayout_5 = new QVBoxLayout(widget2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        inputusername = new QLineEdit(widget2);
        inputusername->setObjectName(QString::fromUtf8("inputusername"));

        verticalLayout_4->addWidget(inputusername);

        inputpassword = new QLineEdit(widget2);
        inputpassword->setObjectName(QString::fromUtf8("inputpassword"));

        verticalLayout_4->addWidget(inputpassword);


        verticalLayout_5->addLayout(verticalLayout_4);

        lineEdit = new QLineEdit(widget2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_5->addWidget(lineEdit);

        widget3 = new QWidget(customerregistration);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(70, 180, 82, 78));
        verticalLayout_6 = new QVBoxLayout(widget3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        usernamelabell = new QLabel(widget3);
        usernamelabell->setObjectName(QString::fromUtf8("usernamelabell"));

        verticalLayout_3->addWidget(usernamelabell);

        passwordlabel = new QLabel(widget3);
        passwordlabel->setObjectName(QString::fromUtf8("passwordlabel"));

        verticalLayout_3->addWidget(passwordlabel);


        verticalLayout_6->addLayout(verticalLayout_3);

        label = new QLabel(widget3);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_6->addWidget(label);


        retranslateUi(customerregistration);

        QMetaObject::connectSlotsByName(customerregistration);
    } // setupUi

    void retranslateUi(QDialog *customerregistration)
    {
        customerregistration->setWindowTitle(QCoreApplication::translate("customerregistration", "Dialog", nullptr));
        registerbutton->setText(QCoreApplication::translate("customerregistration", "REGISTER", nullptr));
        namelabel->setText(QCoreApplication::translate("customerregistration", "NAME", nullptr));
        contactlabel->setText(QCoreApplication::translate("customerregistration", "CONTACT", nullptr));
        usernamelabell->setText(QCoreApplication::translate("customerregistration", "USERNAME", nullptr));
        passwordlabel->setText(QCoreApplication::translate("customerregistration", "PASSWORD", nullptr));
        label->setText(QCoreApplication::translate("customerregistration", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customerregistration: public Ui_customerregistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERREGISTRATION_H
