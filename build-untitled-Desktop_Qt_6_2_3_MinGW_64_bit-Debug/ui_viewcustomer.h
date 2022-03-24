/********************************************************************************
** Form generated from reading UI file 'viewcustomer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCUSTOMER_H
#define UI_VIEWCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_viewcustomer
{
public:
    QTableView *tableView;

    void setupUi(QDialog *viewcustomer)
    {
        if (viewcustomer->objectName().isEmpty())
            viewcustomer->setObjectName(QString::fromUtf8("viewcustomer"));
        viewcustomer->resize(554, 334);
        tableView = new QTableView(viewcustomer);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, -10, 551, 331));

        retranslateUi(viewcustomer);

        QMetaObject::connectSlotsByName(viewcustomer);
    } // setupUi

    void retranslateUi(QDialog *viewcustomer)
    {
        viewcustomer->setWindowTitle(QCoreApplication::translate("viewcustomer", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewcustomer: public Ui_viewcustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCUSTOMER_H
