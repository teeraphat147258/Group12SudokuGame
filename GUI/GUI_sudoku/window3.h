#ifndef WINDOW3_H
#define WINDOW3_H

#include <QDialog>
#include "sudoku.h"
#include <QTimer>

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
    QPushButton *last_click;
    QTimer *time;
    int i_sec;
    int i_min;
    QString s_sec;
    QString s_min;
    QString timeout;
    int check_count;
    int start_time;
    bool check_time_nolimit;
    QString NumToText(int **p, int x, int y);
    void SetTable(QPushButton *[], int **p);
    void cleartable(QPushButton *[]);
    QPushButton *numpad[9], *table[81];
    void setP_numpad(QPushButton *[]);
    void setP_table(QPushButton *[]);
    void setDisabled_table(int **);
    void setEnabled_table();
    void start();
    bool check_delete(int **);
    bool check_add(int **);
    void when_been_click_table();
    void after_been_click_table();
    void timeset();
    void int_to_text();
    void when_timeout();
    void restart();
    void win();

private slots:
    void time_out();
    void on_pushButton_delete_clicked();
    void on_pushButton_check_clicked();
    void on_pushButton_end_clicked();
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

    void on_pushButton03_clicked();
    void on_pushButton04_clicked();
    void on_pushButton05_clicked();
    void on_pushButton06_clicked();
    void on_pushButton07_clicked();
    void on_pushButton08_clicked();
    void on_pushButton13_clicked();
    void on_pushButton14_clicked();
    void on_pushButton15_clicked();
    void on_pushButton16_clicked();
    void on_pushButton17_clicked();
    void on_pushButton18_clicked();
    void on_pushButton23_clicked();
    void on_pushButton24_clicked();
    void on_pushButton25_clicked();
    void on_pushButton26_clicked();
    void on_pushButton27_clicked();
    void on_pushButton28_clicked();
    void on_pushButton30_clicked();
    void on_pushButton31_clicked();
    void on_pushButton32_clicked();
    void on_pushButton33_clicked();
    void on_pushButton34_clicked();
    void on_pushButton35_clicked();
    void on_pushButton36_clicked();
    void on_pushButton37_clicked();
    void on_pushButton38_clicked();
    void on_pushButton40_clicked();
    void on_pushButton41_clicked();
    void on_pushButton42_clicked();
    void on_pushButton43_clicked();
    void on_pushButton44_clicked();
    void on_pushButton45_clicked();
    void on_pushButton46_clicked();
    void on_pushButton47_clicked();
    void on_pushButton48_clicked();
    void on_pushButton50_clicked();
    void on_pushButton51_clicked();
    void on_pushButton52_clicked();
    void on_pushButton53_clicked();
    void on_pushButton54_clicked();
    void on_pushButton55_clicked();
    void on_pushButton56_clicked();
    void on_pushButton57_clicked();
    void on_pushButton58_clicked();
    void on_pushButton60_clicked();
    void on_pushButton61_clicked();
    void on_pushButton62_clicked();
    void on_pushButton63_clicked();
    void on_pushButton64_clicked();
    void on_pushButton65_clicked();
    void on_pushButton66_clicked();
    void on_pushButton67_clicked();
    void on_pushButton68_clicked();
    void on_pushButton70_clicked();
    void on_pushButton71_clicked();
    void on_pushButton72_clicked();
    void on_pushButton73_clicked();
    void on_pushButton74_clicked();
    void on_pushButton75_clicked();
    void on_pushButton76_clicked();
    void on_pushButton77_clicked();
    void on_pushButton78_clicked();
    void on_pushButton80_clicked();
    void on_pushButton81_clicked();
    void on_pushButton82_clicked();
    void on_pushButton83_clicked();
    void on_pushButton84_clicked();
    void on_pushButton85_clicked();
    void on_pushButton86_clicked();
    void on_pushButton87_clicked();
    void on_pushButton88_clicked();
};

#endif // WINDOW3_H
