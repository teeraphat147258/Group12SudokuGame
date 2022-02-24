/********************************************************************************
** Form generated from reading UI file 'window2.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW2_H
#define UI_WINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_window2
{
public:
    QPushButton *pushButton_back;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label;

    void setupUi(QDialog *window2)
    {
        if (window2->objectName().isEmpty())
            window2->setObjectName(QString::fromUtf8("window2"));
        window2->resize(1000, 800);
        window2->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color: rgb(170, 255, 127);\n"
"}\n"
"QLabel{\n"
"	\n"
"	color: rgb(85, 0, 255);\n"
"	font: 70pt \"Century Gothic\";\n"
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
        label_2 = new QLabel(window2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 60, 531, 91));
        QFont font;
        font.setPointSize(70);
        font.setBold(false);
        font.setItalic(false);
        label_2->setFont(font);
        label_4 = new QLabel(window2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 510, 181, 61));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background: rgb(182, 255, 151);\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(29, 44, 233);\n"
"	border-radius: 25px;\n"
"}"));
        label_5 = new QLabel(window2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 600, 181, 61));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background: rgb(182, 255, 151);\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(29, 44, 233);\n"
"	border-radius: 25px;\n"
"}"));
        label_6 = new QLabel(window2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 510, 481, 61));
        label_6->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-color: rgb(255, 185, 44);\n"
"	background: rgb(182, 255, 151);\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-radius: 25px;\n"
"};"));
        label_7 = new QLabel(window2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(250, 600, 381, 61));
        label_7->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-color: rgb(255, 185, 44);\n"
"	background: rgb(182, 255, 151);\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-radius: 25px;\n"
"};"));
        label_8 = new QLabel(window2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(250, 690, 691, 61));
        label_8->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-color: rgb(255, 185, 44);\n"
"	background: rgb(182, 255, 151);\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-radius: 25px;\n"
"};"));
        label_9 = new QLabel(window2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(250, 390, 521, 91));
        label_9->setFont(font);
        label = new QLabel(window2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 180, 921, 181));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background: rgb(182, 255, 151);\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(29, 44, 233);\n"
"	border-radius: 25px;\n"
"}"));

        retranslateUi(window2);

        QMetaObject::connectSlotsByName(window2);
    } // setupUi

    void retranslateUi(QDialog *window2)
    {
        window2->setWindowTitle(QCoreApplication::translate("window2", "Dialog", nullptr));
        pushButton_back->setText(QCoreApplication::translate("window2", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("window2", "<html><head/><body><p><span style=\" font-size:42pt; font-weight:700; color:#324da7;\">Game Description</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("window2", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:700; color:#905401;\">Delete</span><span style=\" font-size:22pt; font-weight:700; color:#901038;\"> -&gt;</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("window2", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:700; color:#900190;\">Check</span><span style=\" font-size:22pt; font-weight:700; color:#901038;\"> -&gt;</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("window2", "<html><head/><body><p><span style=\" font-size:20pt; color:#2e2f30;\">Delete the answer that you filled</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("window2", "<html><head/><body><p><span style=\" font-size:20pt; color:#2e2f30;\">Check answer in the grid</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("window2", "<html><head/><body><p><span style=\" font-size:20pt; color:#aa0000;\">(3 times for free, then reduce 5 minutes per time.)</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("window2", "<html><head/><body><p><span style=\" font-size:42pt; font-weight:700; color:#324da7;\">Button Description</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("window2", "<html><head/><body><p><span style=\" font-size:20pt; color:#ff0004;\">A puzzle in which missing number are be filled into a 9 by 9 grid </span></p><p><span style=\" font-size:20pt; color:#ff0004;\">of square which are subdivided into 3 by 3 boxes so that every row, </span></p><p><span style=\" font-size:20pt; color:#ff0004;\">every column, and every box contains the number 1 through 9</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window2: public Ui_window2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW2_H
