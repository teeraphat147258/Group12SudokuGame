#include "window2.h"
#include "ui_window2.h"

window2::window2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window2)
{
    ui->setupUi(this);
}

window2::~window2()
{
    delete ui;
}

void window2::on_pushButton_back_clicked()
{
    this->parentWidget()->show();
    hide();
}

