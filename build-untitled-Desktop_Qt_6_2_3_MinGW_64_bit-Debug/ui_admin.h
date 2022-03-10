/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QLabel *msglabel;
    QFrame *frame;
    QLabel *label;
    QLineEdit *inputpassword;
    QLineEdit *inputusername;
    QLabel *passwordlabel;
    QLabel *usernamelabel;
    QPushButton *checkusernamebutton;
    QPushButton *loginbutton;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QString::fromUtf8("admin"));
        admin->resize(567, 289);
        msglabel = new QLabel(admin);
        msglabel->setObjectName(QString::fromUtf8("msglabel"));
        msglabel->setGeometry(QRect(20, 250, 281, 16));
        frame = new QFrame(admin);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(100, 30, 351, 191));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        frame->setFont(font);
        frame->setAutoFillBackground(false);
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(43);
        frame->setMidLineWidth(0);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 51, 31));
        label->setFrameShape(QFrame::WinPanel);
        label->setFrameShadow(QFrame::Raised);
        label->setLineWidth(12);
        label->setTextFormat(Qt::AutoText);
        inputpassword = new QLineEdit(frame);
        inputpassword->setObjectName(QString::fromUtf8("inputpassword"));
        inputpassword->setGeometry(QRect(170, 110, 121, 24));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        inputpassword->setFont(font1);
        inputpassword->setEchoMode(QLineEdit::Password);
        inputusername = new QLineEdit(frame);
        inputusername->setObjectName(QString::fromUtf8("inputusername"));
        inputusername->setGeometry(QRect(170, 60, 121, 24));
        inputusername->setFont(font1);
        passwordlabel = new QLabel(frame);
        passwordlabel->setObjectName(QString::fromUtf8("passwordlabel"));
        passwordlabel->setGeometry(QRect(60, 110, 91, 20));
        usernamelabel = new QLabel(frame);
        usernamelabel->setObjectName(QString::fromUtf8("usernamelabel"));
        usernamelabel->setGeometry(QRect(60, 60, 81, 21));
        checkusernamebutton = new QPushButton(frame);
        checkusernamebutton->setObjectName(QString::fromUtf8("checkusernamebutton"));
        checkusernamebutton->setGeometry(QRect(270, 60, 20, 20));
        loginbutton = new QPushButton(frame);
        loginbutton->setObjectName(QString::fromUtf8("loginbutton"));
        loginbutton->setGeometry(QRect(250, 153, 91, 31));
        checkusernamebutton->raise();
        label->raise();
        inputpassword->raise();
        inputusername->raise();
        passwordlabel->raise();
        usernamelabel->raise();
        loginbutton->raise();
        frame->raise();
        msglabel->raise();

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        msglabel->setText(QString());
        label->setText(QCoreApplication::translate("admin", "Log in", nullptr));
        passwordlabel->setText(QCoreApplication::translate("admin", "PASSWORD", nullptr));
        usernamelabel->setText(QCoreApplication::translate("admin", "USERNAME", nullptr));
        checkusernamebutton->setText(QString());
        loginbutton->setText(QCoreApplication::translate("admin", "LOGIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
