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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_credits
{
public:
    QLabel *label_2;
    QLineEdit *pin;
    QPushButton *paybutton;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *cardnumber;

    void setupUi(QDialog *credits)
    {
        if (credits->objectName().isEmpty())
            credits->setObjectName(QString::fromUtf8("credits"));
        credits->resize(490, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../pictures/minilogo_g9m_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        credits->setWindowIcon(icon);
        label_2 = new QLabel(credits);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 168, 31, 16));
        QFont font;
        label_2->setFont(font);
        pin = new QLineEdit(credits);
        pin->setObjectName(QString::fromUtf8("pin"));
        pin->setGeometry(QRect(260, 160, 211, 24));
        pin->setFont(font);
        pin->setEchoMode(QLineEdit::Password);
        paybutton = new QPushButton(credits);
        paybutton->setObjectName(QString::fromUtf8("paybutton"));
        paybutton->setGeometry(QRect(390, 190, 80, 24));
        paybutton->setFont(font);
        label_3 = new QLabel(credits);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 490, 300));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../pictures/creditbkg.jpg")));
        label = new QLabel(credits);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(122, 120, 131, 24));
        label->setFont(font);
        cardnumber = new QLineEdit(credits);
        cardnumber->setObjectName(QString::fromUtf8("cardnumber"));
        cardnumber->setGeometry(QRect(260, 120, 210, 22));
        cardnumber->setFont(font);
        label_3->raise();
        label_2->raise();
        pin->raise();
        paybutton->raise();
        label->raise();
        cardnumber->raise();

        retranslateUi(credits);

        QMetaObject::connectSlotsByName(credits);
    } // setupUi

    void retranslateUi(QDialog *credits)
    {
        credits->setWindowTitle(QCoreApplication::translate("credits", "Payment - The Winkel", nullptr));
        label_2->setText(QCoreApplication::translate("credits", "PIN", nullptr));
        paybutton->setText(QCoreApplication::translate("credits", "PAY", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("credits", "Credit card number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class credits: public Ui_credits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITS_H
