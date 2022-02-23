#include "window1.h"
#include "ui_window1.h"
#include <QMessageBox>

window1::window1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window1) ,win3(new window3(this))
{
    ui->setupUi(this);
    check_time_button = false;
}

window1::~window1()
{
    delete ui;
    delete win3;
}

void window1::back(){
    this->show();
}

void window1::on_pushButton_easy_clicked()
{
    if(check_time_button){
        win3->diff="easy";
        win3->start();

        win3->setFixedSize(1000,800);
        win3->show();
        hide();
        check_time_button = false;
    }else{
        QMessageBox::warning(this, "Warnimg !!!", "Choose time, please");
    }
}


void window1::on_pushButton_2_normal_clicked()
{
    if(check_time_button){
        win3->diff="normal";
        win3->start();

        win3->setFixedSize(1000,800);
        win3->show();
        hide();
        check_time_button = false;
    }else{
        QMessageBox::warning(this, "Warnimg !!!", "Choose time, please");
    }
}


void window1::on_pushButton_3_hard_clicked()
{
    if(check_time_button){
        win3->diff="hard";
        win3->start();

        win3->setFixedSize(1000,800);
        win3->show();
        hide();
        check_time_button = false;
    }else{
        QMessageBox::warning(this, "Warnimg !!!", "Choose time, please");
    }
}


void window1::on_pushButton_back_clicked()
{
    this->parentWidget()->show();
    hide();
}


void window1::on_pushButton_30min_clicked()
{
    check_time_button = true;
    win3->start_time = 30;
}


void window1::on_pushButton_45min_clicked()
{
    check_time_button = true;
    win3->start_time = 45;
}


void window1::on_pushButton_60min_clicked()
{
    check_time_button = true;
    win3->start_time = 60;
}


void window1::on_pushButton_nolimit_clicked()
{

}

