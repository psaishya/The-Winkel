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
        tableView->setGeometry(QRect(0, -10, 561, 351));
        QFont font;
        font.setFamilies({QString::fromUtf8("Audiowide")});
        tableView->setFont(font);
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 224, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(71, 71, 71, 255), stop:1 rgba(255, 255, 255, 255));"));

        retranslateUi(viewcustomer);

        QMetaObject::connectSlotsByName(viewcustomer);
    } // setupUi

    void retranslateUi(QDialog *viewcustomer)
    {
        viewcustomer->setWindowTitle(QCoreApplication::translate("viewcustomer", "Customer Details - The Winkel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewcustomer: public Ui_viewcustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCUSTOMER_H
