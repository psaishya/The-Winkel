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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QLabel *msglabel;
    QLabel *background;
    QLabel *passwordlabel;
    QLineEdit *inputpassword;
    QLineEdit *inputusername;
    QLabel *usernamelabel;
    QPushButton *checkusernamebutton;
    QPushButton *loginbutton;
    QLabel *label;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QString::fromUtf8("admin"));
        admin->resize(670, 748);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../pictures/minilogo_g9m_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        admin->setWindowIcon(icon);
        msglabel = new QLabel(admin);
        msglabel->setObjectName(QString::fromUtf8("msglabel"));
        msglabel->setGeometry(QRect(300, 310, 351, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Audiowide")});
        font.setPointSize(11);
        msglabel->setFont(font);
        background = new QLabel(admin);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 670, 748));
        background->setPixmap(QPixmap(QString::fromUtf8("../pictures/adminloginpagebck.jpg")));
        background->setScaledContents(true);
        passwordlabel = new QLabel(admin);
        passwordlabel->setObjectName(QString::fromUtf8("passwordlabel"));
        passwordlabel->setGeometry(QRect(370, 420, 171, 21));
        QFont font1;
        font1.setPointSize(18);
        passwordlabel->setFont(font1);
        inputpassword = new QLineEdit(admin);
        inputpassword->setObjectName(QString::fromUtf8("inputpassword"));
        inputpassword->setGeometry(QRect(330, 470, 251, 41));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(false);
        inputpassword->setFont(font2);
        inputpassword->setEchoMode(QLineEdit::Password);
        inputusername = new QLineEdit(admin);
        inputusername->setObjectName(QString::fromUtf8("inputusername"));
        inputusername->setGeometry(QRect(320, 200, 251, 41));
        inputusername->setFont(font1);
        usernamelabel = new QLabel(admin);
        usernamelabel->setObjectName(QString::fromUtf8("usernamelabel"));
        usernamelabel->setGeometry(QRect(380, 160, 121, 21));
        usernamelabel->setFont(font1);
        checkusernamebutton = new QPushButton(admin);
        checkusernamebutton->setObjectName(QString::fromUtf8("checkusernamebutton"));
        checkusernamebutton->setGeometry(QRect(600, 240, 41, 41));
        loginbutton = new QPushButton(admin);
        loginbutton->setObjectName(QString::fromUtf8("loginbutton"));
        loginbutton->setGeometry(QRect(330, 540, 251, 41));
        loginbutton->setFont(font2);
        label = new QLabel(admin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 260, 291, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Audiowide")});
        font3.setPointSize(14);
        label->setFont(font3);
        background->raise();
        msglabel->raise();
        passwordlabel->raise();
        inputpassword->raise();
        inputusername->raise();
        usernamelabel->raise();
        checkusernamebutton->raise();
        loginbutton->raise();
        label->raise();
        QWidget::setTabOrder(inputusername, inputpassword);
        QWidget::setTabOrder(inputpassword, loginbutton);
        QWidget::setTabOrder(loginbutton, checkusernamebutton);

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "THE WINKEL- Administrator Login", nullptr));
        msglabel->setText(QString());
        background->setText(QString());
        passwordlabel->setText(QCoreApplication::translate("admin", "PASSWORD", nullptr));
        usernamelabel->setText(QCoreApplication::translate("admin", "USER ID", nullptr));
        checkusernamebutton->setText(QString());
        loginbutton->setText(QCoreApplication::translate("admin", "AUTHENTICATE", nullptr));
        label->setText(QCoreApplication::translate("admin", "Click here to verify User ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
