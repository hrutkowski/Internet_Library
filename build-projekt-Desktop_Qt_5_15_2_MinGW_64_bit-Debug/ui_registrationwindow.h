/********************************************************************************
** Form generated from reading UI file 'registrationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONWINDOW_H
#define UI_REGISTRATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_registrationwindow
{
public:
    QTextEdit *textEdit_2;
    QPushButton *pushButtonCreateNewAccount;
    QTextEdit *textEdit;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *registrationwindow)
    {
        if (registrationwindow->objectName().isEmpty())
            registrationwindow->setObjectName(QString::fromUtf8("registrationwindow"));
        registrationwindow->resize(562, 537);
        textEdit_2 = new QTextEdit(registrationwindow);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(50, 280, 321, 41));
        QFont font;
        font.setPointSize(14);
        textEdit_2->setFont(font);
        textEdit_2->setCursorWidth(3);
        pushButtonCreateNewAccount = new QPushButton(registrationwindow);
        pushButtonCreateNewAccount->setObjectName(QString::fromUtf8("pushButtonCreateNewAccount"));
        pushButtonCreateNewAccount->setGeometry(QRect(50, 350, 201, 31));
        QFont font1;
        font1.setPointSize(12);
        pushButtonCreateNewAccount->setFont(font1);
        textEdit = new QTextEdit(registrationwindow);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(50, 190, 321, 41));
        textEdit->setFont(font);
        label_2 = new QLabel(registrationwindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 250, 111, 31));
        label_2->setFont(font1);
        label_6 = new QLabel(registrationwindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 420, 351, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        label_6->setFont(font2);
        label = new QLabel(registrationwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 160, 71, 31));
        label->setFont(font2);
        label_3 = new QLabel(registrationwindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 0, 231, 61));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_4 = new QLabel(registrationwindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 80, 521, 41));
        QFont font4;
        font4.setPointSize(10);
        label_4->setFont(font4);

        retranslateUi(registrationwindow);

        QMetaObject::connectSlotsByName(registrationwindow);
    } // setupUi

    void retranslateUi(QDialog *registrationwindow)
    {
        registrationwindow->setWindowTitle(QCoreApplication::translate("registrationwindow", "Dialog", nullptr));
        pushButtonCreateNewAccount->setText(QCoreApplication::translate("registrationwindow", "Create Account", nullptr));
        label_2->setText(QCoreApplication::translate("registrationwindow", "PASSWORD:", nullptr));
        label_6->setText(QString());
        label->setText(QCoreApplication::translate("registrationwindow", "LOGIN:", nullptr));
        label_3->setText(QCoreApplication::translate("registrationwindow", "Registration page", nullptr));
        label_4->setText(QCoreApplication::translate("registrationwindow", "If you create an account here, you will have acces to all of our books!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registrationwindow: public Ui_registrationwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWINDOW_H
