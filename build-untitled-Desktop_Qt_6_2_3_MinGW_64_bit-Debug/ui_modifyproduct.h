/********************************************************************************
** Form generated from reading UI file 'modifyproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYPRODUCT_H
#define UI_MODIFYPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifyproduct
{
public:
    QLabel *label;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonadd;
    QPushButton *pushButtonview;

    void setupUi(QDialog *modifyproduct)
    {
        if (modifyproduct->objectName().isEmpty())
            modifyproduct->setObjectName(QString::fromUtf8("modifyproduct"));
        modifyproduct->resize(490, 472);
        label = new QLabel(modifyproduct);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 30, 241, 41));
        QFont font;
        font.setPointSize(21);
        font.setBold(true);
        label->setFont(font);
        layoutWidget_2 = new QWidget(modifyproduct);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(50, 110, 231, 151));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(17);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        layoutWidget = new QWidget(modifyproduct);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 110, 82, 161));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonadd = new QPushButton(layoutWidget);
        pushButtonadd->setObjectName(QString::fromUtf8("pushButtonadd"));

        verticalLayout_2->addWidget(pushButtonadd);

        pushButtonview = new QPushButton(layoutWidget);
        pushButtonview->setObjectName(QString::fromUtf8("pushButtonview"));

        verticalLayout_2->addWidget(pushButtonview);


        retranslateUi(modifyproduct);

        QMetaObject::connectSlotsByName(modifyproduct);
    } // setupUi

    void retranslateUi(QDialog *modifyproduct)
    {
        modifyproduct->setWindowTitle(QCoreApplication::translate("modifyproduct", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("modifyproduct", "Modify Product", nullptr));
        label_2->setText(QCoreApplication::translate("modifyproduct", "Add/Update", nullptr));
        label_4->setText(QCoreApplication::translate("modifyproduct", "View Product Details", nullptr));
        pushButtonadd->setText(QCoreApplication::translate("modifyproduct", "click", nullptr));
        pushButtonview->setText(QCoreApplication::translate("modifyproduct", "click", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifyproduct: public Ui_modifyproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYPRODUCT_H
