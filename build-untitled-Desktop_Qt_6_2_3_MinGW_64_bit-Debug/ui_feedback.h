/********************************************************************************
** Form generated from reading UI file 'feedback.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDBACK_H
#define UI_FEEDBACK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_feedback
{
public:
    QRadioButton *good;
    QRadioButton *satisfactory;
    QRadioButton *poor;
    QLabel *label;
    QPushButton *submit;
    QLabel *label_2;

    void setupUi(QDialog *feedback)
    {
        if (feedback->objectName().isEmpty())
            feedback->setObjectName(QString::fromUtf8("feedback"));
        feedback->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../pictures/minilogo_g9m_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        feedback->setWindowIcon(icon);
        good = new QRadioButton(feedback);
        good->setObjectName(QString::fromUtf8("good"));
        good->setGeometry(QRect(190, 170, 91, 22));
        QFont font;
        good->setFont(font);
        satisfactory = new QRadioButton(feedback);
        satisfactory->setObjectName(QString::fromUtf8("satisfactory"));
        satisfactory->setGeometry(QRect(190, 140, 131, 22));
        satisfactory->setFont(font);
        poor = new QRadioButton(feedback);
        poor->setObjectName(QString::fromUtf8("poor"));
        poor->setGeometry(QRect(190, 110, 91, 22));
        poor->setFont(font);
        label = new QLabel(feedback);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 80, 201, 16));
        label->setFont(font);
        submit = new QPushButton(feedback);
        submit->setObjectName(QString::fromUtf8("submit"));
        submit->setGeometry(QRect(190, 200, 80, 24));
        submit->setFont(font);
        label_2 = new QLabel(feedback);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 400, 300));
        label_2->setFont(font);
        label_2->setPixmap(QPixmap(QString::fromUtf8("../pictures/feedback.jpg")));
        label_2->raise();
        good->raise();
        satisfactory->raise();
        poor->raise();
        label->raise();
        submit->raise();
        QWidget::setTabOrder(poor, satisfactory);
        QWidget::setTabOrder(satisfactory, good);
        QWidget::setTabOrder(good, submit);

        retranslateUi(feedback);

        QMetaObject::connectSlotsByName(feedback);
    } // setupUi

    void retranslateUi(QDialog *feedback)
    {
        feedback->setWindowTitle(QCoreApplication::translate("feedback", "Feedback - The Winkel", nullptr));
        good->setText(QCoreApplication::translate("feedback", "GOOD", nullptr));
        satisfactory->setText(QCoreApplication::translate("feedback", "SATISFACTORY", nullptr));
        poor->setText(QCoreApplication::translate("feedback", " POOR ", nullptr));
        label->setText(QCoreApplication::translate("feedback", "How was your experience?", nullptr));
        submit->setText(QCoreApplication::translate("feedback", "Submit", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class feedback: public Ui_feedback {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDBACK_H
