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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_modifyproduct
{
public:
    QLabel *label_3;
    QPushButton *pushButtonadd;
    QPushButton *pushButtonview;
    QLabel *label_2;
    QLabel *label_4;

    void setupUi(QDialog *modifyproduct)
    {
        if (modifyproduct->objectName().isEmpty())
            modifyproduct->setObjectName(QString::fromUtf8("modifyproduct"));
        modifyproduct->resize(500, 475);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../pictures/minilogo_g9m_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        modifyproduct->setWindowIcon(icon);
        label_3 = new QLabel(modifyproduct);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 500, 475));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../pictures/modify.jpg")));
        pushButtonadd = new QPushButton(modifyproduct);
        pushButtonadd->setObjectName(QString::fromUtf8("pushButtonadd"));
        pushButtonadd->setGeometry(QRect(400, 190, 80, 24));
        QFont font;
        pushButtonadd->setFont(font);
        pushButtonview = new QPushButton(modifyproduct);
        pushButtonview->setObjectName(QString::fromUtf8("pushButtonview"));
        pushButtonview->setGeometry(QRect(400, 245, 80, 24));
        pushButtonview->setFont(font);
        label_2 = new QLabel(modifyproduct);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 180, 141, 41));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_4 = new QLabel(modifyproduct);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 240, 221, 31));
        label_4->setFont(font1);

        retranslateUi(modifyproduct);

        QMetaObject::connectSlotsByName(modifyproduct);
    } // setupUi

    void retranslateUi(QDialog *modifyproduct)
    {
        modifyproduct->setWindowTitle(QCoreApplication::translate("modifyproduct", "Modify Products - The Winkel", nullptr));
        label_3->setText(QString());
        pushButtonadd->setText(QCoreApplication::translate("modifyproduct", "click", nullptr));
        pushButtonview->setText(QCoreApplication::translate("modifyproduct", "click", nullptr));
        label_2->setText(QCoreApplication::translate("modifyproduct", "Add/Update", nullptr));
        label_4->setText(QCoreApplication::translate("modifyproduct", "View Product Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifyproduct: public Ui_modifyproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYPRODUCT_H
