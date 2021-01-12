/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButtonLogIn;
    QPushButton *pushButtonCreateNewAccount;
    QLabel *label_5;
    QLabel *label_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(420, 414);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 160, 321, 31));
        QFont font;
        font.setPointSize(14);
        textEdit->setFont(font);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(40, 230, 321, 31));
        textEdit_2->setFont(font);
        textEdit_2->setCursorWidth(3);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 130, 71, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 200, 101, 31));
        QFont font2;
        font2.setPointSize(12);
        label_2->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 10, 351, 51));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        label_3->setFont(font3);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 70, 271, 41));
        label_4->setFont(font1);
        pushButtonLogIn = new QPushButton(centralwidget);
        pushButtonLogIn->setObjectName(QString::fromUtf8("pushButtonLogIn"));
        pushButtonLogIn->setGeometry(QRect(40, 280, 91, 31));
        pushButtonLogIn->setFont(font2);
        pushButtonCreateNewAccount = new QPushButton(centralwidget);
        pushButtonCreateNewAccount->setObjectName(QString::fromUtf8("pushButtonCreateNewAccount"));
        pushButtonCreateNewAccount->setGeometry(QRect(200, 280, 161, 31));
        pushButtonCreateNewAccount->setFont(font2);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 280, 21, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 330, 261, 31));
        label_6->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "LOGIN:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "PASSWORD:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Welcome in our amazing Library", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Please, log in or create new account", nullptr));
        pushButtonLogIn->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
        pushButtonCreateNewAccount->setText(QCoreApplication::translate("MainWindow", "Create New Account", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "or", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
