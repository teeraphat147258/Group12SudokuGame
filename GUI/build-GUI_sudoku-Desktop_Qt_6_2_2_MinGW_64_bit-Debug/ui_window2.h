/********************************************************************************
** Form generated from reading UI file 'window2.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW2_H
#define UI_WINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_window2
{
public:
    QPushButton *pushButton_back;

    void setupUi(QDialog *window2)
    {
        if (window2->objectName().isEmpty())
            window2->setObjectName(QString::fromUtf8("window2"));
        window2->resize(1000, 800);
        window2->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        pushButton_back = new QPushButton(window2);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(30, 30, 141, 51));
        pushButton_back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 15pt \"Century Gothic\";\n"
"	background-color: rgb(255, 255, 127);\n"
"	color: rgb(85, 0, 255);\n"
"	border-radius:25px;\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	border-color: rgb(0, 0, 255);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"	background-color: rgb(197, 197, 98);\n"
"	border-color: rgb(0, 0, 255);\n"
"}\n"
"\n"
""));

        retranslateUi(window2);

        QMetaObject::connectSlotsByName(window2);
    } // setupUi

    void retranslateUi(QDialog *window2)
    {
        window2->setWindowTitle(QCoreApplication::translate("window2", "Dialog", nullptr));
        pushButton_back->setText(QCoreApplication::translate("window2", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window2: public Ui_window2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW2_H
