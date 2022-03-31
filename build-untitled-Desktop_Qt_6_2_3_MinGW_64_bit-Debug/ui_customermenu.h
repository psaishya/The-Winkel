/********************************************************************************
** Form generated from reading UI file 'customermenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERMENU_H
#define UI_CUSTOMERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_customermenu
{
public:
    QCommandLinkButton *Buyproductsbutton;
    QCommandLinkButton *Givefeedbackbutton;

    void setupUi(QDialog *customermenu)
    {
        if (customermenu->objectName().isEmpty())
            customermenu->setObjectName(QString::fromUtf8("customermenu"));
        customermenu->resize(727, 373);
        Buyproductsbutton = new QCommandLinkButton(customermenu);
        Buyproductsbutton->setObjectName(QString::fromUtf8("Buyproductsbutton"));
        Buyproductsbutton->setGeometry(QRect(170, 170, 168, 41));
        Givefeedbackbutton = new QCommandLinkButton(customermenu);
        Givefeedbackbutton->setObjectName(QString::fromUtf8("Givefeedbackbutton"));
        Givefeedbackbutton->setGeometry(QRect(430, 170, 168, 41));

        retranslateUi(customermenu);

        QMetaObject::connectSlotsByName(customermenu);
    } // setupUi

    void retranslateUi(QDialog *customermenu)
    {
        customermenu->setWindowTitle(QCoreApplication::translate("customermenu", "Dialog", nullptr));
        Buyproductsbutton->setText(QCoreApplication::translate("customermenu", "Buy products", nullptr));
        Givefeedbackbutton->setText(QCoreApplication::translate("customermenu", "Give feedback", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customermenu: public Ui_customermenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERMENU_H
