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
#include <QtGui/QIcon>
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
        QIcon icon;
        icon.addFile(QString::fromUtf8("../pictures/minilogo_g9m_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        viewproduct->setWindowIcon(icon);
        tableView = new QTableView(viewproduct);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 501, 371));
        QFont font;
        font.setFamilies({QString::fromUtf8("Audiowide")});
        tableView->setFont(font);
        tableView->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(71, 71, 71, 255), stop:1 rgba(255, 255, 255, 255));"));

        retranslateUi(viewproduct);

        QMetaObject::connectSlotsByName(viewproduct);
    } // setupUi

    void retranslateUi(QDialog *viewproduct)
    {
        viewproduct->setWindowTitle(QCoreApplication::translate("viewproduct", "Product Details - The Winkel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewproduct: public Ui_viewproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPRODUCT_H
