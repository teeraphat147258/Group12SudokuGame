#ifndef WINDOW3_H
#define WINDOW3_H

#include <QDialog>
#include "sudoku.h"

namespace Ui {
class window3;
}

class window3 : public QDialog
{
    Q_OBJECT

public:
    explicit window3(QWidget *parent = nullptr);
    ~window3();

private:
    Ui::window3 *ui;

public:
    QString diff;
    sudoku game;
    int x, y;

    QString NumToText(int **p, int x, int y);
    void SetTable(QPushButton *[], int **p);
    QPushButton *numpad[9], *table[81];
    void setP_numpad(QPushButton *[]);
    void setP_table(QPushButton *[]);
    void setup();
    bool check_delete(int **);
    bool check_add(int **);

private slots:
    void on_pushButton_delete_clicked();
    void on_pushButton_num1_clicked();
    void on_pushButton_num2_clicked();
    void on_pushButton_num3_clicked();
    void on_pushButton_num4_clicked();
    void on_pushButton_num5_clicked();
    void on_pushButton_num6_clicked();
    void on_pushButton_num7_clicked();
    void on_pushButton_num8_clicked();
    void on_pushButton_num9_clicked();
    void on_pushButton00_clicked();
    void on_pushButton01_clicked();
    void on_pushButton02_clicked();
    void on_pushButton10_clicked();
    void on_pushButton11_clicked();
    void on_pushButton12_clicked();
    void on_pushButton20_clicked();
    void on_pushButton21_clicked();
    void on_pushButton22_clicked();
};

#endif // WINDOW3_H
