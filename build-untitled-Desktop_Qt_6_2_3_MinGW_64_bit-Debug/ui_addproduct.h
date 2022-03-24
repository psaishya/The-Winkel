/********************************************************************************
** Form generated from reading UI file 'addproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCT_H
#define UI_ADDPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addproduct
{
public:
    QLabel *label_6;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *inputproductid;
    QLineEdit *inputpname;
    QLineEdit *inputpcompany;
    QLineEdit *inputpprice;
    QPushButton *pushButtonenter;
    QPushButton *pushButtonupdate;
    QPushButton *pushButtondelete;
    QListView *listView;
    QLabel *label_7;
    QRadioButton *available;
    QRadioButton *unavailable;
    QComboBox *cbox;
    QPushButton *showbutton;

    void setupUi(QDialog *addproduct)
    {
        if (addproduct->objectName().isEmpty())
            addproduct->setObjectName(QString::fromUtf8("addproduct"));
        addproduct->resize(659, 343);
        label_6 = new QLabel(addproduct);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(120, 20, 281, 21));
        QFont font;
        font.setPointSize(18);
        label_6->setFont(font);
        layoutWidget = new QWidget(addproduct);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 90, 145, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(13);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
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

        layoutWidget1 = new QWidget(addproduct);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(240, 90, 135, 121));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        inputproductid = new QLineEdit(layoutWidget1);
        inputproductid->setObjectName(QString::fromUtf8("inputproductid"));

        verticalLayout_2->addWidget(inputproductid);

        inputpname = new QLineEdit(layoutWidget1);
        inputpname->setObjectName(QString::fromUtf8("inputpname"));

        verticalLayout_2->addWidget(inputpname);

        inputpcompany = new QLineEdit(layoutWidget1);
        inputpcompany->setObjectName(QString::fromUtf8("inputpcompany"));

        verticalLayout_2->addWidget(inputpcompany);

        inputpprice = new QLineEdit(layoutWidget1);
        inputpprice->setObjectName(QString::fromUtf8("inputpprice"));

        verticalLayout_2->addWidget(inputpprice);

        pushButtonenter = new QPushButton(addproduct);
        pushButtonenter->setObjectName(QString::fromUtf8("pushButtonenter"));
        pushButtonenter->setGeometry(QRect(220, 280, 75, 24));
        pushButtonupdate = new QPushButton(addproduct);
        pushButtonupdate->setObjectName(QString::fromUtf8("pushButtonupdate"));
        pushButtonupdate->setGeometry(QRect(310, 280, 75, 24));
        pushButtondelete = new QPushButton(addproduct);
        pushButtondelete->setObjectName(QString::fromUtf8("pushButtondelete"));
        pushButtondelete->setGeometry(QRect(400, 280, 80, 24));
        listView = new QListView(addproduct);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(470, 90, 111, 192));
        label_7 = new QLabel(addproduct);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(470, 30, 121, 16));
        available = new QRadioButton(addproduct);
        available->setObjectName(QString::fromUtf8("available"));
        available->setGeometry(QRect(240, 210, 91, 22));
        unavailable = new QRadioButton(addproduct);
        unavailable->setObjectName(QString::fromUtf8("unavailable"));
        unavailable->setGeometry(QRect(350, 210, 91, 22));
        cbox = new QComboBox(addproduct);
        cbox->setObjectName(QString::fromUtf8("cbox"));
        cbox->setGeometry(QRect(470, 50, 61, 24));
        showbutton = new QPushButton(addproduct);
        showbutton->setObjectName(QString::fromUtf8("showbutton"));
        showbutton->setGeometry(QRect(530, 50, 41, 24));

        retranslateUi(addproduct);

        QMetaObject::connectSlotsByName(addproduct);
    } // setupUi

    void retranslateUi(QDialog *addproduct)
    {
        addproduct->setWindowTitle(QCoreApplication::translate("addproduct", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("addproduct", "Give Product Details", nullptr));
        label->setText(QCoreApplication::translate("addproduct", "Product Id", nullptr));
        label_2->setText(QCoreApplication::translate("addproduct", "Product Name", nullptr));
        label_3->setText(QCoreApplication::translate("addproduct", "Product Company ", nullptr));
        label_4->setText(QCoreApplication::translate("addproduct", "Product Price", nullptr));
        label_5->setText(QCoreApplication::translate("addproduct", "Product Status ", nullptr));
        pushButtonenter->setText(QCoreApplication::translate("addproduct", "Save", nullptr));
        pushButtonupdate->setText(QCoreApplication::translate("addproduct", "Update", nullptr));
        pushButtondelete->setText(QCoreApplication::translate("addproduct", "Delete", nullptr));
        label_7->setText(QCoreApplication::translate("addproduct", "All Product ID", nullptr));
        available->setText(QCoreApplication::translate("addproduct", "Available", nullptr));
        unavailable->setText(QCoreApplication::translate("addproduct", "Unavailable", nullptr));
        showbutton->setText(QCoreApplication::translate("addproduct", "Show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addproduct: public Ui_addproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCT_H
