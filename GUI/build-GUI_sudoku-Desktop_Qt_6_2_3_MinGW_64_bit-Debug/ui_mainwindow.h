/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_Start;
    QPushButton *pushButton_tutorial;
    QLabel *label_title;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(996, 829);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color: rgb(170, 255, 127);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_Start = new QPushButton(centralwidget);
        pushButton_Start->setObjectName(QString::fromUtf8("pushButton_Start"));
        pushButton_Start->setGeometry(QRect(370, 430, 221, 81));
        pushButton_Start->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	selection-color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color: rgb(0, 0, 0);\n"
"	border-radius:25px;\n"
"	font:century gothic;\n"
"	font-size:24px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(218, 218, 218);\n"
"	border-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
""));
        pushButton_tutorial = new QPushButton(centralwidget);
        pushButton_tutorial->setObjectName(QString::fromUtf8("pushButton_tutorial"));
        pushButton_tutorial->setGeometry(QRect(370, 570, 221, 81));
        pushButton_tutorial->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	selection-color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color: rgb(0, 0, 0);\n"
"	border-radius:25px;\n"
"	font:century gothic;\n"
"	font-size:24px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(218, 218, 218);\n"
"	border-color: rgb(255, 255, 255);\n"
"}\n"
""));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(220, 80, 531, 181));
        label_title->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font:century gothic;\n"
"	font-size:72px;\n"
"}"));
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
        pushButton_Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_tutorial->setText(QCoreApplication::translate("MainWindow", "Tutorial", nullptr));
        label_title->setText(QCoreApplication::translate("MainWindow", "SUDOKU GAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
