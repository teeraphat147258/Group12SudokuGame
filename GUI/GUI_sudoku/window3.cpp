#include "window3.h"
#include "ui_window3.h"

window3::window3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window3)
{
    ui->setupUi(this);
    diff = NULL;

    x = -1;     y =-1;
}

window3::~window3()
{
    delete ui;
}

QString window3::NumToText(int **p, int x, int y){

        if(p[x][y] == 0)        return " ";
        else if(p[x][y] == 1)   return "1";
        else if(p[x][y] == 2)   return "2";
        else if(p[x][y] == 3)   return "3";
        else if(p[x][y] == 4)   return "4";
        else if(p[x][y] == 5)   return "5";
        else if(p[x][y] == 6)   return "6";
        else if(p[x][y] == 7)   return "7";
        else if(p[x][y] == 8)   return "8";
        else if(p[x][y] == 9)   return "9";
        else                    return "x";

}

void window3::SetTable(QPushButton *table[], int **p){

    for(int i = 0; i < 3; i++)  for(int j = 0; j < 3; j++)  table[3*i + j]->setText(NumToText(p, i, j));


//    ui->pushButton00->setText(NumToText(p,0,0));
//    ui->pushButton01->setText(NumToText(p,0,1));
//    ui->pushButton02->setText(NumToText(p,0,2));
//    ui->pushButton10->setText(NumToText(p,1,0));
//    ui->pushButton11->setText(NumToText(p,1,1));
//    ui->pushButton12->setText(NumToText(p,1,2));
//    ui->pushButton20->setText(NumToText(p,2,0));
//    ui->pushButton21->setText(NumToText(p,2,1));
//    ui->pushButton22->setText(NumToText(p,2,2));
}

void window3::setP_numpad(QPushButton *numpad[]){
    numpad[0] = ui->pushButton_num1;
    numpad[1] = ui->pushButton_num2;
    numpad[2] = ui->pushButton_num3;
    numpad[3] = ui->pushButton_num4;
    numpad[4] = ui->pushButton_num5;
    numpad[5] = ui->pushButton_num6;
    numpad[6] = ui->pushButton_num7;
    numpad[7] = ui->pushButton_num8;
    numpad[8] = ui->pushButton_num9;
}

void window3::setP_table(QPushButton *table[]){
    table[0] = ui->pushButton00;
    table[1] = ui->pushButton01;
    table[2] = ui->pushButton02;
    table[3] = ui->pushButton10;
    table[4] = ui->pushButton11;
    table[5] = ui->pushButton12;
    table[6] = ui->pushButton20;
    table[7] = ui->pushButton21;
    table[8] = ui->pushButton22;
}

void window3::setup(){
    game.createTable(diff);
    game.createChannel();
    setP_numpad(numpad);
    setP_table(table);
    SetTable(table, game.table);
}

bool window3::check_delete(int **ch){
    if(ch[x][y] != 1)       return true;
    else                    return false;
}

bool window3::check_add(int **ch){
    if(ch[x][y] == 0)       return true;
    else                    return false;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void window3::on_pushButton_delete_clicked()
{
    if(x >= 0 && y >= 0 && check_delete(game.ch)){
        game.table[x][y] = 0;
        table[3*x + y]->setText(" ");
    }
}

/////////////////////////////////////////////////////////numpad//////////////////////////////////////////////////////////////

void window3::on_pushButton_num1_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 1;
        table[3*x + y]->setText("1");
    }

}


void window3::on_pushButton_num2_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 2;
        table[3*x + y]->setText("2");
    }

}


void window3::on_pushButton_num3_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 3;
        table[3*x + y]->setText("3");
    }

}


void window3::on_pushButton_num4_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 4;
        table[3*x + y]->setText("4");
    }

}


void window3::on_pushButton_num5_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 5;
        table[3*x + y]->setText("5");
    }

}


void window3::on_pushButton_num6_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 6;
        table[3*x + y]->setText("6");
    }

}


void window3::on_pushButton_num7_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 7;
        table[3*x + y]->setText("7");
    }

}


void window3::on_pushButton_num8_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 8;
        table[3*x + y]->setText("8");
    }

}


void window3::on_pushButton_num9_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 9;
        table[3*x + y]->setText("9");
    }

}

////////////////////////////////////////////////////////table///////////////////////////////////////////////////////////////


void window3::on_pushButton00_clicked()
{
    x = 0;      y = 0;
}

void window3::on_pushButton01_clicked()
{
    x = 0;      y = 1;
}


void window3::on_pushButton02_clicked()
{
    x = 0;      y = 2;
}


void window3::on_pushButton10_clicked()
{
    x = 1;      y = 0;
}


void window3::on_pushButton11_clicked()
{
    x = 1;      y = 1;
}


void window3::on_pushButton12_clicked()
{
    x = 1;      y = 2;
}


void window3::on_pushButton20_clicked()
{
    x = 2;      y = 0;
}


void window3::on_pushButton21_clicked()
{
    x = 2;      y = 1;
}


void window3::on_pushButton22_clicked()
{
    x = 2;      y = 2;
}

