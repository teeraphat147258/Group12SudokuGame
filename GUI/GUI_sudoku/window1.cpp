#include "window1.h"
#include "ui_window1.h"

window1::window1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window1) ,win3(new window3(this))
{
    ui->setupUi(this);

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
    win3->diff="easy";
    win3->start();

    win3->setFixedSize(1000,800);
    win3->show();
    hide();
}


void window1::on_pushButton_2_normal_clicked()
{
    win3->diff="normal";
    win3->start();

    win3->setFixedSize(1000,800);
    win3->show();
    hide();
}


void window1::on_pushButton_3_hard_clicked()
{
    win3->diff="hard";
    win3->start();

    win3->setFixedSize(1000,800);
    win3->show();
    hide();
}

