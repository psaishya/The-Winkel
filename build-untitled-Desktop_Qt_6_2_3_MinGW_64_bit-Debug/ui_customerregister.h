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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customerregister
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *inputname;
    QLineEdit *inputcontact;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *inputusername;
    QLineEdit *inputpassword;
    QLineEdit *inputconfirm;
    QPushButton *pushbutton_register;

    void setupUi(QDialog *customerregister)
    {
        if (customerregister->objectName().isEmpty())
            customerregister->setObjectName(QString::fromUtf8("customerregister"));
        customerregister->resize(571, 395);
        groupBox = new QGroupBox(customerregister);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(80, 60, 331, 281));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 91, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 140, 148, 101));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(130, 50, 127, 65));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        inputname = new QLineEdit(layoutWidget2);
        inputname->setObjectName(QString::fromUtf8("inputname"));

        verticalLayout_3->addWidget(inputname);

        inputcontact = new QLineEdit(layoutWidget2);
        inputcontact->setObjectName(QString::fromUtf8("inputcontact"));

        verticalLayout_3->addWidget(inputcontact);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(180, 140, 127, 100));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        inputusername = new QLineEdit(layoutWidget3);
        inputusername->setObjectName(QString::fromUtf8("inputusername"));

        verticalLayout_4->addWidget(inputusername);

        inputpassword = new QLineEdit(layoutWidget3);
        inputpassword->setObjectName(QString::fromUtf8("inputpassword"));

        verticalLayout_4->addWidget(inputpassword);

        inputconfirm = new QLineEdit(layoutWidget3);
        inputconfirm->setObjectName(QString::fromUtf8("inputconfirm"));

        verticalLayout_4->addWidget(inputconfirm);

        pushbutton_register = new QPushButton(customerregister);
        pushbutton_register->setObjectName(QString::fromUtf8("pushbutton_register"));
        pushbutton_register->setGeometry(QRect(182, 350, 111, 29));

        retranslateUi(customerregister);

        QMetaObject::connectSlotsByName(customerregister);
    } // setupUi

    void retranslateUi(QDialog *customerregister)
    {
        customerregister->setWindowTitle(QCoreApplication::translate("customerregister", "Customer Register", nullptr));
        groupBox->setTitle(QCoreApplication::translate("customerregister", "Welcome to customer registration page", nullptr));
        label->setText(QCoreApplication::translate("customerregister", "NAME", nullptr));
        label_2->setText(QCoreApplication::translate("customerregister", "CONTACT", nullptr));
        label_5->setText(QCoreApplication::translate("customerregister", "USERNAME", nullptr));
        label_4->setText(QCoreApplication::translate("customerregister", "PASSWORD", nullptr));
        label_3->setText(QCoreApplication::translate("customerregister", "CONFRIM PASSWORD", nullptr));
        pushbutton_register->setText(QCoreApplication::translate("customerregister", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customerregister: public Ui_customerregister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERREGISTER_H
