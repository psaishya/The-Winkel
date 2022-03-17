/********************************************************************************
** Form generated from reading UI file 'deleteproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEPRODUCT_H
#define UI_DELETEPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteproduct
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *inputproductid;
    QLineEdit *inputpname;
    QLineEdit *inputpcompany;
    QLineEdit *inputpprice;
    QLineEdit *inputpstatus;
    QPushButton *pushButtondelete;

    void setupUi(QDialog *deleteproduct)
    {
        if (deleteproduct->objectName().isEmpty())
            deleteproduct->setObjectName(QString::fromUtf8("deleteproduct"));
        deleteproduct->resize(400, 300);
        label = new QLabel(deleteproduct);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 201, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setPointSize(17);
        label->setFont(font);
        layoutWidget = new QWidget(deleteproduct);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 80, 145, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(13);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        verticalLayout->addWidget(label_6);

        layoutWidget_2 = new QWidget(deleteproduct);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(210, 80, 135, 136));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        inputproductid = new QLineEdit(layoutWidget_2);
        inputproductid->setObjectName(QString::fromUtf8("inputproductid"));

        verticalLayout_2->addWidget(inputproductid);

        inputpname = new QLineEdit(layoutWidget_2);
        inputpname->setObjectName(QString::fromUtf8("inputpname"));

        verticalLayout_2->addWidget(inputpname);

        inputpcompany = new QLineEdit(layoutWidget_2);
        inputpcompany->setObjectName(QString::fromUtf8("inputpcompany"));

        verticalLayout_2->addWidget(inputpcompany);

        inputpprice = new QLineEdit(layoutWidget_2);
        inputpprice->setObjectName(QString::fromUtf8("inputpprice"));

        verticalLayout_2->addWidget(inputpprice);

        inputpstatus = new QLineEdit(layoutWidget_2);
        inputpstatus->setObjectName(QString::fromUtf8("inputpstatus"));

        verticalLayout_2->addWidget(inputpstatus);

        pushButtondelete = new QPushButton(deleteproduct);
        pushButtondelete->setObjectName(QString::fromUtf8("pushButtondelete"));
        pushButtondelete->setGeometry(QRect(300, 250, 75, 24));

        retranslateUi(deleteproduct);

        QMetaObject::connectSlotsByName(deleteproduct);
    } // setupUi

    void retranslateUi(QDialog *deleteproduct)
    {
        deleteproduct->setWindowTitle(QCoreApplication::translate("deleteproduct", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("deleteproduct", "Delete Product ", nullptr));
        label_2->setText(QCoreApplication::translate("deleteproduct", "Product Id", nullptr));
        label_3->setText(QCoreApplication::translate("deleteproduct", "Product Name", nullptr));
        label_4->setText(QCoreApplication::translate("deleteproduct", "Product Company ", nullptr));
        label_5->setText(QCoreApplication::translate("deleteproduct", "Product Price", nullptr));
        label_6->setText(QCoreApplication::translate("deleteproduct", "Product Status ", nullptr));
        pushButtondelete->setText(QCoreApplication::translate("deleteproduct", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteproduct: public Ui_deleteproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEPRODUCT_H
