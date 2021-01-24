/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QPushButton *pushButtonCreateAccount;
    QTextEdit *textEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(611, 517);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 20, 331, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 110, 551, 31));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        textEdit_2 = new QTextEdit(Dialog);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(40, 270, 321, 41));
        QFont font2;
        font2.setPointSize(14);
        textEdit_2->setFont(font2);
        textEdit_2->setCursorWidth(3);
        pushButtonCreateAccount = new QPushButton(Dialog);
        pushButtonCreateAccount->setObjectName(QString::fromUtf8("pushButtonCreateAccount"));
        pushButtonCreateAccount->setGeometry(QRect(40, 340, 201, 31));
        QFont font3;
        font3.setPointSize(12);
        pushButtonCreateAccount->setFont(font3);
        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 200, 321, 41));
        textEdit->setFont(font2);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 240, 111, 31));
        label_3->setFont(font3);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 170, 71, 31));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setWeight(50);
        label_4->setFont(font4);
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 400, 331, 51));
        label_5->setFont(font3);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Welcome on registration page", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "If you create account in our library, you will recieve acces to out books!", nullptr));
        pushButtonCreateAccount->setText(QCoreApplication::translate("Dialog", "Create", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "PASSWORD:", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "LOGIN:", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
