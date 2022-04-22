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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_addproduct
{
public:
    QPushButton *pushButtonenter;
    QPushButton *pushButtonupdate;
    QPushButton *pushButtondelete;
    QListView *listView;
    QLabel *label_7;
    QRadioButton *available;
    QRadioButton *unavailable;
    QComboBox *cbox;
    QPushButton *showbutton;
    QLabel *label_8;
    QLabel *id;
    QLabel *name;
    QLabel *company;
    QLabel *price;
    QLabel *status;
    QLineEdit *inputproductid;
    QLineEdit *inputpname;
    QLineEdit *inputpcompany;
    QLineEdit *inputpprice;

    void setupUi(QDialog *addproduct)
    {
        if (addproduct->objectName().isEmpty())
            addproduct->setObjectName(QString::fromUtf8("addproduct"));
        addproduct->resize(683, 768);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../pictures/minilogo_g9m_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        addproduct->setWindowIcon(icon);
        pushButtonenter = new QPushButton(addproduct);
        pushButtonenter->setObjectName(QString::fromUtf8("pushButtonenter"));
        pushButtonenter->setGeometry(QRect(440, 540, 75, 24));
        QFont font;
        font.setFamilies({QString::fromUtf8("Audiowide")});
        pushButtonenter->setFont(font);
        pushButtonupdate = new QPushButton(addproduct);
        pushButtonupdate->setObjectName(QString::fromUtf8("pushButtonupdate"));
        pushButtonupdate->setGeometry(QRect(520, 540, 75, 24));
        pushButtonupdate->setFont(font);
        pushButtondelete = new QPushButton(addproduct);
        pushButtondelete->setObjectName(QString::fromUtf8("pushButtondelete"));
        pushButtondelete->setGeometry(QRect(600, 540, 80, 24));
        pushButtondelete->setFont(font);
        listView = new QListView(addproduct);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(530, 320, 141, 211));
        listView->setFont(font);
        label_7 = new QLabel(addproduct);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(540, 300, 111, 16));
        label_7->setFont(font);
        available = new QRadioButton(addproduct);
        available->setObjectName(QString::fromUtf8("available"));
        available->setGeometry(QRect(210, 400, 91, 22));
        available->setFont(font);
        unavailable = new QRadioButton(addproduct);
        unavailable->setObjectName(QString::fromUtf8("unavailable"));
        unavailable->setGeometry(QRect(210, 430, 101, 22));
        unavailable->setFont(font);
        cbox = new QComboBox(addproduct);
        cbox->setObjectName(QString::fromUtf8("cbox"));
        cbox->setGeometry(QRect(530, 270, 71, 24));
        cbox->setFont(font);
        showbutton = new QPushButton(addproduct);
        showbutton->setObjectName(QString::fromUtf8("showbutton"));
        showbutton->setGeometry(QRect(610, 270, 61, 24));
        showbutton->setFont(font);
        label_8 = new QLabel(addproduct);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 683, 768));
        QFont font1;
        label_8->setFont(font1);
        label_8->setPixmap(QPixmap(QString::fromUtf8("../pictures/Untitled-1.jpg")));
        id = new QLabel(addproduct);
        id->setObjectName(QString::fromUtf8("id"));
        id->setGeometry(QRect(211, 100, 141, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Audiowide")});
        font2.setPointSize(13);
        id->setFont(font2);
        name = new QLabel(addproduct);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(211, 160, 143, 30));
        name->setFont(font2);
        company = new QLabel(addproduct);
        company->setObjectName(QString::fromUtf8("company"));
        company->setGeometry(QRect(211, 220, 181, 42));
        company->setFont(font2);
        price = new QLabel(addproduct);
        price->setObjectName(QString::fromUtf8("price"));
        price->setGeometry(QRect(210, 300, 141, 31));
        price->setFont(font2);
        status = new QLabel(addproduct);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(210, 370, 151, 21));
        status->setFont(font2);
        inputproductid = new QLineEdit(addproduct);
        inputproductid->setObjectName(QString::fromUtf8("inputproductid"));
        inputproductid->setGeometry(QRect(210, 130, 211, 31));
        inputproductid->setFont(font);
        inputpname = new QLineEdit(addproduct);
        inputpname->setObjectName(QString::fromUtf8("inputpname"));
        inputpname->setGeometry(QRect(210, 190, 211, 31));
        inputpname->setFont(font);
        inputpcompany = new QLineEdit(addproduct);
        inputpcompany->setObjectName(QString::fromUtf8("inputpcompany"));
        inputpcompany->setGeometry(QRect(210, 260, 211, 31));
        inputpcompany->setFont(font);
        inputpprice = new QLineEdit(addproduct);
        inputpprice->setObjectName(QString::fromUtf8("inputpprice"));
        inputpprice->setGeometry(QRect(210, 330, 211, 31));
        inputpprice->setFont(font);
        label_8->raise();
        pushButtonenter->raise();
        pushButtonupdate->raise();
        pushButtondelete->raise();
        listView->raise();
        label_7->raise();
        available->raise();
        unavailable->raise();
        cbox->raise();
        showbutton->raise();
        id->raise();
        name->raise();
        company->raise();
        price->raise();
        status->raise();
        inputproductid->raise();
        inputpname->raise();
        inputpcompany->raise();
        inputpprice->raise();
        QWidget::setTabOrder(inputproductid, inputpname);
        QWidget::setTabOrder(inputpname, inputpcompany);
        QWidget::setTabOrder(inputpcompany, inputpprice);
        QWidget::setTabOrder(inputpprice, available);
        QWidget::setTabOrder(available, unavailable);
        QWidget::setTabOrder(unavailable, cbox);
        QWidget::setTabOrder(cbox, showbutton);
        QWidget::setTabOrder(showbutton, listView);
        QWidget::setTabOrder(listView, pushButtonenter);
        QWidget::setTabOrder(pushButtonenter, pushButtonupdate);
        QWidget::setTabOrder(pushButtonupdate, pushButtondelete);

        retranslateUi(addproduct);

        QMetaObject::connectSlotsByName(addproduct);
    } // setupUi

    void retranslateUi(QDialog *addproduct)
    {
        addproduct->setWindowTitle(QCoreApplication::translate("addproduct", "Add Products", nullptr));
        pushButtonenter->setText(QCoreApplication::translate("addproduct", "Save", nullptr));
        pushButtonupdate->setText(QCoreApplication::translate("addproduct", "Update", nullptr));
        pushButtondelete->setText(QCoreApplication::translate("addproduct", "Delete", nullptr));
        label_7->setText(QCoreApplication::translate("addproduct", "All Product ID", nullptr));
        available->setText(QCoreApplication::translate("addproduct", "Available", nullptr));
        unavailable->setText(QCoreApplication::translate("addproduct", "Unavailable", nullptr));
        showbutton->setText(QCoreApplication::translate("addproduct", "Show", nullptr));
        label_8->setText(QString());
        id->setText(QCoreApplication::translate("addproduct", "Product Id", nullptr));
        name->setText(QCoreApplication::translate("addproduct", "Product Name", nullptr));
        company->setText(QCoreApplication::translate("addproduct", "Product Company ", nullptr));
        price->setText(QCoreApplication::translate("addproduct", "Product Price", nullptr));
        status->setText(QCoreApplication::translate("addproduct", "Product Status ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addproduct: public Ui_addproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCT_H
