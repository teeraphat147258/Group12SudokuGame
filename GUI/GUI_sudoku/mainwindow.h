#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "window1.h"
#include "window2.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Start_clicked();

    void on_pushButton_tutorial_clicked();

private:
    Ui::MainWindow *ui;
    window1 *win1;
    window2 *win2;
};
#endif // MAINWINDOW_H
