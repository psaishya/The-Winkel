/********************************************************************************
** Form generated from reading UI file 'customermenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERMENU_H
#define UI_CUSTOMERMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_customermenu
{
public:
    QCommandLinkButton *Buyproductsbutton;
    QCommandLinkButton *Givefeedbackbutton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *customermenu)
    {
        if (customermenu->objectName().isEmpty())
            customermenu->setObjectName(QString::fromUtf8("customermenu"));
        customermenu->resize(600, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../pictures/minilogo_g9m_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        customermenu->setWindowIcon(icon);
        Buyproductsbutton = new QCommandLinkButton(customermenu);
        Buyproductsbutton->setObjectName(QString::fromUtf8("Buyproductsbutton"));
        Buyproductsbutton->setGeometry(QRect(260, 90, 111, 131));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../pictures/download-icon-buy-131964784705748631_512.png"), QSize(), QIcon::Normal, QIcon::Off);
        Buyproductsbutton->setIcon(icon1);
        Buyproductsbutton->setIconSize(QSize(90, 90));
        Givefeedbackbutton = new QCommandLinkButton(customermenu);
        Givefeedbackbutton->setObjectName(QString::fromUtf8("Givefeedbackbutton"));
        Givefeedbackbutton->setGeometry(QRect(440, 90, 91, 131));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../pictures/feedback-icon-png-image-free-download.png"), QSize(), QIcon::Normal, QIcon::Off);
        Givefeedbackbutton->setIcon(icon2);
        Givefeedbackbutton->setIconSize(QSize(90, 90));
        label = new QLabel(customermenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 600, 300));
        label->setPixmap(QPixmap(QString::fromUtf8("../pictures/customerinterface.jpg")));
        label_2 = new QLabel(customermenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 190, 41, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Audiowide")});
        font.setPointSize(12);
        label_2->setFont(font);
        label_3 = new QLabel(customermenu);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(450, 190, 81, 21));
        label_3->setFont(font);
        label->raise();
        Buyproductsbutton->raise();
        Givefeedbackbutton->raise();
        label_2->raise();
        label_3->raise();

        retranslateUi(customermenu);

        QMetaObject::connectSlotsByName(customermenu);
    } // setupUi

    void retranslateUi(QDialog *customermenu)
    {
        customermenu->setWindowTitle(QCoreApplication::translate("customermenu", "Customer Menu-The Winkel", nullptr));
        Buyproductsbutton->setText(QString());
        Givefeedbackbutton->setText(QString());
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("customermenu", "Buy ", nullptr));
        label_3->setText(QCoreApplication::translate("customermenu", "Rate Us", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customermenu: public Ui_customermenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERMENU_H
