/********************************************************************************
** Form generated from reading UI file 'window1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW1_H
#define UI_WINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_window1
{
public:
    QPushButton *pushButton_easy;
    QPushButton *pushButton_2_normal;
    QPushButton *pushButton_3_hard;
    QLabel *label;

    void setupUi(QDialog *window1)
    {
        if (window1->objectName().isEmpty())
            window1->setObjectName(QString::fromUtf8("window1"));
        window1->resize(1000, 800);
        window1->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color: rgb(170, 255, 127);\n"
"}\n"
"QLabel{\n"
"	\n"
"	color: rgb(85, 0, 255);\n"
"	font: 70pt \"Century Gothic\";\n"
"}\n"
"QPushButton{\n"
"	font: 15pt \"Century Gothic\";\n"
"	background-color: rgb(255, 255, 127);\n"
"	color: rgb(85, 0, 255);\n"
"}"));
        pushButton_easy = new QPushButton(window1);
        pushButton_easy->setObjectName(QString::fromUtf8("pushButton_easy"));
        pushButton_easy->setGeometry(QRect(400, 320, 141, 51));
        pushButton_2_normal = new QPushButton(window1);
        pushButton_2_normal->setObjectName(QString::fromUtf8("pushButton_2_normal"));
        pushButton_2_normal->setGeometry(QRect(400, 390, 141, 51));
        pushButton_3_hard = new QPushButton(window1);
        pushButton_3_hard->setObjectName(QString::fromUtf8("pushButton_3_hard"));
        pushButton_3_hard->setGeometry(QRect(400, 460, 141, 51));
        label = new QLabel(window1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 110, 721, 71));

        retranslateUi(window1);

        QMetaObject::connectSlotsByName(window1);
    } // setupUi

    void retranslateUi(QDialog *window1)
    {
        window1->setWindowTitle(QCoreApplication::translate("window1", "Dialog", nullptr));
        pushButton_easy->setText(QCoreApplication::translate("window1", "Easy", nullptr));
        pushButton_2_normal->setText(QCoreApplication::translate("window1", "Normal", nullptr));
        pushButton_3_hard->setText(QCoreApplication::translate("window1", "Hard", nullptr));
        label->setText(QCoreApplication::translate("window1", "Choose Difficult", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window1: public Ui_window1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW1_H
