/********************************************************************************
** Form generated from reading UI file 'credits.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITS_H
#define UI_CREDITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_credits
{
public:
    QLabel *label_2;
    QLineEdit *pin;
    QPushButton *paybutton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *cardnumber;

    void setupUi(QDialog *credits)
    {
        if (credits->objectName().isEmpty())
            credits->setObjectName(QString::fromUtf8("credits"));
        credits->resize(491, 300);
        label_2 = new QLabel(credits);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 100, 19, 16));
        pin = new QLineEdit(credits);
        pin->setObjectName(QString::fromUtf8("pin"));
        pin->setGeometry(QRect(200, 100, 211, 24));
        pin->setEchoMode(QLineEdit::Password);
        paybutton = new QPushButton(credits);
        paybutton->setObjectName(QString::fromUtf8("paybutton"));
        paybutton->setGeometry(QRect(390, 260, 80, 24));
        widget = new QWidget(credits);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 50, 321, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cardnumber = new QLineEdit(widget);
        cardnumber->setObjectName(QString::fromUtf8("cardnumber"));

        horizontalLayout->addWidget(cardnumber);


        retranslateUi(credits);

        QMetaObject::connectSlotsByName(credits);
    } // setupUi

    void retranslateUi(QDialog *credits)
    {
        credits->setWindowTitle(QCoreApplication::translate("credits", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("credits", "PIN", nullptr));
        paybutton->setText(QCoreApplication::translate("credits", "PAY", nullptr));
        label->setText(QCoreApplication::translate("credits", "Credit card number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class credits: public Ui_credits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITS_H
