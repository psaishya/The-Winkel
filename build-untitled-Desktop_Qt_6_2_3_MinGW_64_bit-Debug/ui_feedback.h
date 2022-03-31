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

    void setupUi(QDialog *feedback)
    {
        if (feedback->objectName().isEmpty())
            feedback->setObjectName(QString::fromUtf8("feedback"));
        feedback->resize(400, 300);
        good = new QRadioButton(feedback);
        good->setObjectName(QString::fromUtf8("good"));
        good->setGeometry(QRect(120, 180, 91, 22));
        satisfactory = new QRadioButton(feedback);
        satisfactory->setObjectName(QString::fromUtf8("satisfactory"));
        satisfactory->setGeometry(QRect(120, 130, 121, 22));
        poor = new QRadioButton(feedback);
        poor->setObjectName(QString::fromUtf8("poor"));
        poor->setGeometry(QRect(120, 80, 91, 22));
        label = new QLabel(feedback);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 30, 201, 16));
        submit = new QPushButton(feedback);
        submit->setObjectName(QString::fromUtf8("submit"));
        submit->setGeometry(QRect(300, 270, 80, 24));

        retranslateUi(feedback);

        QMetaObject::connectSlotsByName(feedback);
    } // setupUi

    void retranslateUi(QDialog *feedback)
    {
        feedback->setWindowTitle(QCoreApplication::translate("feedback", "Dialog", nullptr));
        good->setText(QCoreApplication::translate("feedback", "GOOD", nullptr));
        satisfactory->setText(QCoreApplication::translate("feedback", "SATISFACTORY", nullptr));
        poor->setText(QCoreApplication::translate("feedback", "POOR", nullptr));
        label->setText(QCoreApplication::translate("feedback", "How was your experience?", nullptr));
        submit->setText(QCoreApplication::translate("feedback", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class feedback: public Ui_feedback {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDBACK_H
