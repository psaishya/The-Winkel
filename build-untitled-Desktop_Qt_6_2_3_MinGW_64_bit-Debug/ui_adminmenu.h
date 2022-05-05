/********************************************************************************
** Form generated from reading UI file 'adminmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_H
#define UI_ADMINMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminmenu
{
public:
    QLabel *customerdetail;
    QLabel *modify;
    QPushButton *pushButtonmodify;
    QPushButton *pushButtonview;
    QLabel *label_2;

    void setupUi(QDialog *adminmenu)
    {
        if (adminmenu->objectName().isEmpty())
            adminmenu->setObjectName(QString::fromUtf8("adminmenu"));
        adminmenu->resize(450, 362);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../pictures/minilogo_g9m_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        adminmenu->setWindowIcon(icon);
        customerdetail = new QLabel(adminmenu);
        customerdetail->setObjectName(QString::fromUtf8("customerdetail"));
        customerdetail->setGeometry(QRect(170, 140, 171, 31));
        QFont font;
        font.setPointSize(10);
        customerdetail->setFont(font);
        modify = new QLabel(adminmenu);
        modify->setObjectName(QString::fromUtf8("modify"));
        modify->setGeometry(QRect(170, 210, 121, 21));
        modify->setFont(font);
        pushButtonmodify = new QPushButton(adminmenu);
        pushButtonmodify->setObjectName(QString::fromUtf8("pushButtonmodify"));
        pushButtonmodify->setGeometry(QRect(20, 210, 110, 25));
        QFont font1;
        font1.setPointSize(9);
        pushButtonmodify->setFont(font1);
        pushButtonview = new QPushButton(adminmenu);
        pushButtonview->setObjectName(QString::fromUtf8("pushButtonview"));
        pushButtonview->setGeometry(QRect(20, 140, 110, 25));
        pushButtonview->setFont(font1);
        label_2 = new QLabel(adminmenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 451, 361));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../pictures/admin menu bkg.jpg")));
        label_2->raise();
        customerdetail->raise();
        modify->raise();
        pushButtonmodify->raise();
        pushButtonview->raise();
        QWidget::setTabOrder(pushButtonview, pushButtonmodify);

        retranslateUi(adminmenu);

        QMetaObject::connectSlotsByName(adminmenu);
    } // setupUi

    void retranslateUi(QDialog *adminmenu)
    {
        adminmenu->setWindowTitle(QCoreApplication::translate("adminmenu", "Administrator Menu", nullptr));
        customerdetail->setText(QCoreApplication::translate("adminmenu", "View Customer Details", nullptr));
        modify->setText(QCoreApplication::translate("adminmenu", "Modify Product", nullptr));
        pushButtonmodify->setText(QCoreApplication::translate("adminmenu", "Click to Modify ", nullptr));
        pushButtonview->setText(QCoreApplication::translate("adminmenu", "Click to View", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminmenu: public Ui_adminmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
