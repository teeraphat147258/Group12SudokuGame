#ifndef WINDOW1_H
#define WINDOW1_H

#include <QDialog>
#include "window3.h"

namespace Ui {
class window1;
}

class window1 : public QDialog
{
    Q_OBJECT

public:
    explicit window1(QWidget *parent = nullptr);
    ~window1();

private slots:
    void on_pushButton_easy_clicked();

    void on_pushButton_2_normal_clicked();

    void on_pushButton_3_hard_clicked();

private:
    Ui::window1 *ui;
    window3 *win3;
};

#endif // WINDOW1_H