/********************************************************************************
** Form generated from reading UI file 'viewproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPRODUCT_H
#define UI_VIEWPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_viewproduct
{
public:
    QTableView *tableView;

    void setupUi(QDialog *viewproduct)
    {
        if (viewproduct->objectName().isEmpty())
            viewproduct->setObjectName(QString::fromUtf8("viewproduct"));
        viewproduct->resize(500, 369);
        tableView = new QTableView(viewproduct);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 501, 371));

        retranslateUi(viewproduct);

        QMetaObject::connectSlotsByName(viewproduct);
    } // setupUi

    void retranslateUi(QDialog *viewproduct)
    {
        viewproduct->setWindowTitle(QCoreApplication::translate("viewproduct", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewproduct: public Ui_viewproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPRODUCT_H
