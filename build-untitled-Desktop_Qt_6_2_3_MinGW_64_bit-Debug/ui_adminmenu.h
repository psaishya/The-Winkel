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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminmenu
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_3;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonmodify;
    QPushButton *pushButtonview;

    void setupUi(QDialog *adminmenu)
    {
        if (adminmenu->objectName().isEmpty())
            adminmenu->setObjectName(QString::fromUtf8("adminmenu"));
        adminmenu->resize(450, 362);
        label = new QLabel(adminmenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 311, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setPointSize(17);
        font.setBold(true);
        label->setFont(font);
        widget = new QWidget(adminmenu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(14, 80, 151, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setPointSize(12);
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font2;
        font2.setPointSize(11);
        label_5->setFont(font2);

        verticalLayout->addWidget(label_5);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        widget1 = new QWidget(adminmenu);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(170, 100, 81, 101));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonmodify = new QPushButton(widget1);
        pushButtonmodify->setObjectName(QString::fromUtf8("pushButtonmodify"));

        verticalLayout_2->addWidget(pushButtonmodify);

        pushButtonview = new QPushButton(widget1);
        pushButtonview->setObjectName(QString::fromUtf8("pushButtonview"));

        verticalLayout_2->addWidget(pushButtonview);


        retranslateUi(adminmenu);

        QMetaObject::connectSlotsByName(adminmenu);
    } // setupUi

    void retranslateUi(QDialog *adminmenu)
    {
        adminmenu->setWindowTitle(QCoreApplication::translate("adminmenu", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("adminmenu", "Welcome To Main Menu", nullptr));
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("adminmenu", "Modify Product", nullptr));
        label_5->setText(QCoreApplication::translate("adminmenu", "View Customer Details", nullptr));
        label_3->setText(QString());
        pushButtonmodify->setText(QCoreApplication::translate("adminmenu", "click", nullptr));
        pushButtonview->setText(QCoreApplication::translate("adminmenu", "click", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminmenu: public Ui_adminmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
