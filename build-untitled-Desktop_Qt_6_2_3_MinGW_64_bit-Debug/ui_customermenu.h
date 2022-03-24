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
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_customermenu
{
public:

    void setupUi(QDialog *customermenu)
    {
        if (customermenu->objectName().isEmpty())
            customermenu->setObjectName(QString::fromUtf8("customermenu"));
        customermenu->resize(727, 373);

        retranslateUi(customermenu);

        QMetaObject::connectSlotsByName(customermenu);
    } // setupUi

    void retranslateUi(QDialog *customermenu)
    {
        customermenu->setWindowTitle(QCoreApplication::translate("customermenu", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customermenu: public Ui_customermenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERMENU_H
