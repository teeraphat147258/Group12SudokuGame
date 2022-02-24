/********************************************************************************
** Form generated from reading UI file 'window1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW1_H
#define UI_WINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
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
    QPushButton *pushButton_back;
    QFrame *frame;
    QPushButton *pushButton_30min;
    QLabel *label_2;
    QPushButton *pushButton_45min;
    QPushButton *pushButton_60min;
    QPushButton *pushButton_nolimit;
    QLabel *label_3;

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
""));
        pushButton_easy = new QPushButton(window1);
        pushButton_easy->setObjectName(QString::fromUtf8("pushButton_easy"));
        pushButton_easy->setGeometry(QRect(410, 290, 141, 51));
        pushButton_easy->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_2_normal = new QPushButton(window1);
        pushButton_2_normal->setObjectName(QString::fromUtf8("pushButton_2_normal"));
        pushButton_2_normal->setGeometry(QRect(410, 370, 141, 51));
        pushButton_2_normal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_3_hard = new QPushButton(window1);
        pushButton_3_hard->setObjectName(QString::fromUtf8("pushButton_3_hard"));
        pushButton_3_hard->setGeometry(QRect(410, 450, 141, 51));
        pushButton_3_hard->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label = new QLabel(window1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 140, 721, 71));
        label->setStyleSheet(QString::fromUtf8("font: bold;"));
        pushButton_back = new QPushButton(window1);
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
        frame = new QFrame(window1);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(120, 570, 761, 151));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background: rgb(182, 255, 151);\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(0, 0, 255);\n"
"	border-radius: 25px;\n"
"};"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_30min = new QPushButton(frame);
        pushButton_30min->setObjectName(QString::fromUtf8("pushButton_30min"));
        pushButton_30min->setGeometry(QRect(30, 70, 151, 61));
        pushButton_30min->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"}"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 10, 81, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 30px;\n"
"	font: bold;\n"
"	border-style: null;\n"
"}\n"
""));
        pushButton_45min = new QPushButton(frame);
        pushButton_45min->setObjectName(QString::fromUtf8("pushButton_45min"));
        pushButton_45min->setGeometry(QRect(210, 70, 151, 61));
        pushButton_45min->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"}"));
        pushButton_60min = new QPushButton(frame);
        pushButton_60min->setObjectName(QString::fromUtf8("pushButton_60min"));
        pushButton_60min->setGeometry(QRect(390, 70, 151, 61));
        pushButton_60min->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"}"));
        pushButton_nolimit = new QPushButton(frame);
        pushButton_nolimit->setObjectName(QString::fromUtf8("pushButton_nolimit"));
        pushButton_nolimit->setGeometry(QRect(580, 70, 151, 61));
        pushButton_nolimit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"}"));
        label_3 = new QLabel(window1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 130, 721, 71));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(149, 130, 255);\n"
"font: bold;"));
        label_3->raise();
        pushButton_easy->raise();
        pushButton_2_normal->raise();
        pushButton_3_hard->raise();
        label->raise();
        pushButton_back->raise();
        frame->raise();

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
        pushButton_back->setText(QCoreApplication::translate("window1", "Back", nullptr));
        pushButton_30min->setText(QCoreApplication::translate("window1", "30 Min", nullptr));
        label_2->setText(QCoreApplication::translate("window1", "Time", nullptr));
        pushButton_45min->setText(QCoreApplication::translate("window1", "45 Min", nullptr));
        pushButton_60min->setText(QCoreApplication::translate("window1", "60 Min", nullptr));
        pushButton_nolimit->setText(QCoreApplication::translate("window1", "No Limit", nullptr));
        label_3->setText(QCoreApplication::translate("window1", "Choose Difficult", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window1: public Ui_window1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW1_H
