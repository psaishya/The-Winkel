/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_loginpage
{
public:
    QLabel *label;
    QLabel *background;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;

    void setupUi(QDialog *loginpage)
    {
        if (loginpage->objectName().isEmpty())
            loginpage->setObjectName(QString::fromUtf8("loginpage"));
        loginpage->resize(1366, 768);
        label = new QLabel(loginpage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 241, 71));
        QFont font;
        font.setPointSize(48);
        label->setFont(font);
        background = new QLabel(loginpage);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, -3, 1366, 791));
        background->setAutoFillBackground(true);
        background->setPixmap(QPixmap(QString::fromUtf8("../pictures/logotextonly.jpg")));
        background->setScaledContents(true);
        commandLinkButton = new QCommandLinkButton(loginpage);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(600, 130, 924, 80));
        QFont font1;
        font1.setPointSize(26);
        commandLinkButton->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../pictures/153-1538896_community-icon-transparent-background-png-download-transparent-transparent.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon);
        commandLinkButton->setIconSize(QSize(60, 60));
        commandLinkButton_2 = new QCommandLinkButton(loginpage);
        commandLinkButton_2->setObjectName(QString::fromUtf8("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(60, 120, 498, 80));
        commandLinkButton_2->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../pictures/556-5569894_admin-admin-vector-icon-png-transparent-png.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton_2->setIcon(icon1);
        commandLinkButton_2->setIconSize(QSize(60, 60));
        background->raise();
        commandLinkButton_2->raise();
        commandLinkButton->raise();
        label->raise();

        retranslateUi(loginpage);

        QMetaObject::connectSlotsByName(loginpage);
    } // setupUi

    void retranslateUi(QDialog *loginpage)
    {
        loginpage->setWindowTitle(QCoreApplication::translate("loginpage", "Login ", nullptr));
        label->setText(QCoreApplication::translate("loginpage", "LOGIN", nullptr));
        background->setText(QString());
        commandLinkButton->setText(QCoreApplication::translate("loginpage", "Login as a Customer ", nullptr));
        commandLinkButton_2->setText(QCoreApplication::translate("loginpage", "Login as an Administrator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginpage: public Ui_loginpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
