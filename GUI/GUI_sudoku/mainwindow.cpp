#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) ,win1(new window1(this)) ,win2(new window2(this))
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete win1;
    delete win2;
}


void MainWindow::on_pushButton_Start_clicked()
{
    win1->setFixedSize(1000,800);
    win1->show();
    hide();
}


void MainWindow::on_pushButton_tutorial_clicked()
{
    win2->setFixedSize(1000,800);
    win2->show();
    hide();
}

