#include "window3.h"
#include "ui_window3.h"
#include <QMessageBox>

window3::window3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window3)
{
    ui->setupUi(this);
    diff = NULL;
    time = new QTimer(this);
    time->start(1000);
    start_time = 0;
    check_time_nolimit = false;
}

window3::~window3()
{
    delete ui;
    delete time;
}

QString window3::NumToText(int **p, int x, int y){

    if(p[x][y] == 0)    return " ";
    else if(p[x][y] >= 1 && p[x][y] <= 9){
        QString qs;
        return  qs.setNum(p[x][y]);
    }else   return "x";

}

void window3::SetTable(QPushButton *table[], int **p){

    for(int i = 0; i < 9; i++)  for(int j = 0; j < 9; j++)  table[9*i + j]->setText(NumToText(p, i, j));


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

void window3::cleartable(QPushButton *table[]){
    for(int i = 0; i < 9; i++)  for(int j = 0; j < 9; j++){
       table[9*i + j]->setStyleSheet("QPushButton{ background: rgb(255, 255, 255); }");
        table[9*i + j]->setText(" ");
    }
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
    table[3] = ui->pushButton03;
    table[4] = ui->pushButton04;
    table[5] = ui->pushButton05;
    table[6] = ui->pushButton06;
    table[7] = ui->pushButton07;
    table[8] = ui->pushButton08;

    table[9]  = ui->pushButton10;
    table[10] = ui->pushButton11;
    table[11] = ui->pushButton12;
    table[12] = ui->pushButton13;
    table[13] = ui->pushButton14;
    table[14] = ui->pushButton15;
    table[15] = ui->pushButton16;
    table[16] = ui->pushButton17;
    table[17] = ui->pushButton18;

    table[18] = ui->pushButton20;
    table[19] = ui->pushButton21;
    table[20] = ui->pushButton22;
    table[21] = ui->pushButton23;
    table[22] = ui->pushButton24;
    table[23] = ui->pushButton25;
    table[24] = ui->pushButton26;
    table[25] = ui->pushButton27;
    table[26] = ui->pushButton28;

    table[27] = ui->pushButton30;
    table[28] = ui->pushButton31;
    table[29] = ui->pushButton32;
    table[30] = ui->pushButton33;
    table[31] = ui->pushButton34;
    table[32] = ui->pushButton35;
    table[33] = ui->pushButton36;
    table[34] = ui->pushButton37;
    table[35] = ui->pushButton38;

    table[36] = ui->pushButton40;
    table[37] = ui->pushButton41;
    table[38] = ui->pushButton42;
    table[39] = ui->pushButton43;
    table[40] = ui->pushButton44;
    table[41] = ui->pushButton45;
    table[42] = ui->pushButton46;
    table[43] = ui->pushButton47;
    table[44] = ui->pushButton48;

    table[45] = ui->pushButton50;
    table[46] = ui->pushButton51;
    table[47] = ui->pushButton52;
    table[48] = ui->pushButton53;
    table[49] = ui->pushButton54;
    table[50] = ui->pushButton55;
    table[51] = ui->pushButton56;
    table[52] = ui->pushButton57;
    table[53] = ui->pushButton58;

    table[54] = ui->pushButton60;
    table[55] = ui->pushButton61;
    table[56] = ui->pushButton62;
    table[57] = ui->pushButton63;
    table[58] = ui->pushButton64;
    table[59] = ui->pushButton65;
    table[60] = ui->pushButton66;
    table[61] = ui->pushButton67;
    table[62] = ui->pushButton68;

    table[63] = ui->pushButton70;
    table[64] = ui->pushButton71;
    table[65] = ui->pushButton72;
    table[66] = ui->pushButton73;
    table[67] = ui->pushButton74;
    table[68] = ui->pushButton75;
    table[69] = ui->pushButton76;
    table[70] = ui->pushButton77;
    table[71] = ui->pushButton78;

    table[72] = ui->pushButton80;
    table[73] = ui->pushButton81;
    table[74] = ui->pushButton82;
    table[75] = ui->pushButton83;
    table[76] = ui->pushButton84;
    table[77] = ui->pushButton85;
    table[78] = ui->pushButton86;
    table[79] = ui->pushButton87;
    table[80] = ui->pushButton88;
}

void window3::setDisabled_table(int **ch){
    for(int i = 0; i < 9; i++)
        for(int j = 0; j < 9; j++)
            if(ch[i][j] == 1)   table[9*i + j]->setEnabled(false);
}

void window3::setEnabled_table(){
    for(int i = 0; i < 9; i++)
        for(int j = 0; j < 9; j++)
            table[9*i + j]->setEnabled(true);
}

void window3::start(){
    x = -1;     y = -1;
    check_count = 0;
    ui->label_timeout->setStyleSheet("font-size: 60px;");
    ui->label_timeout->setText("00 : 00");
    game.set0(game.ch);
    game.createTable(diff);
    game.createChannel();
    setP_numpad(numpad);
    setP_table(table);
    cleartable(table);
    SetTable(table, game.table);
    setEnabled_table();
    setDisabled_table(game.ch);
    timeset();

    connect(time, SIGNAL(timeout()), this, SLOT(time_out()));
}

bool window3::check_delete(int **ch){
    if(ch[x][y] != 1)       return true;
    else                    return false;
}

bool window3::check_add(int **ch){
    if(ch[x][y] == 0)       return true;
    else                    return false;
}

void window3::when_been_click_table(){
    table[9*x + y]->setStyleSheet("QPushButton{ background: rgb(255, 51, 51); }");
    last_click = table[9*x + y];
}

void window3::after_been_click_table(){
    last_click->setStyleSheet("QPushButton{ background: rgb(255, 255, 255); }");

}

void window3::timeset(){

    if(check_time_nolimit){
        i_min = 0;
        i_sec = 0;
    }else{
        i_min = start_time;
        i_sec = 0;
    }
}

void window3::int_to_text(){
    if(i_sec == -1){
        i_min--;
        i_sec = 59;
    }

    s_sec.setNum(i_sec);
    if(i_sec < 10)      s_sec.push_front("0");
    s_min.setNum(i_min);
    if(i_min < 10)      s_min.push_front("0");

    timeout = s_min + " : " + s_sec;
    ui->label_timeout->setText(timeout);
}

void window3::when_timeout(){

    ui->label_timeout->setText("xx : xx");

    QMessageBox::StandardButton ans = QMessageBox::question(this, "Timeout !!!", "Do you want to play again ?",
                                                            QMessageBox::Yes | QMessageBox::No);

    if(ans == QMessageBox::Yes){
        disconnect(time, SIGNAL(timeout()), this, SLOT(time_out()));
        this->parentWidget()->show();
        hide();
    }else{
        this->close();
    }

}

void window3::time_out(){

    if(check_time_nolimit){
        i_sec++;

        if(i_sec >= 60){
            i_sec = 0;
            i_min++;
        }

        if(i_min >= 100)        ui->label_timeout->setStyleSheet("font-size: 48px;");
        else                    ui->label_timeout->setStyleSheet("font-size: 60px;");

    }else{
        i_sec--;

        if(i_min == 0 && i_sec == -1)         when_timeout();
        else if(i_min < 0)                  when_timeout();
    }

    int_to_text();

}


void window3::restart(){
    check_count = 0;
    x = -1;     y = -1;
    game.set0(game.ch);
    game.createTable(diff);
    game.createChannel();
    cleartable(table);
    SetTable(table, game.table);
    setEnabled_table();
    setDisabled_table(game.ch);
    timeset();
}

void window3::win(){

    if(game.checkWith_Key()){

        QMessageBox::StandardButton ans = QMessageBox::question(this, "WIN !!!", "Do you want to play again ?",
                                                                QMessageBox::Yes | QMessageBox::No);

        if(ans == QMessageBox::Yes){
            disconnect(time, SIGNAL(timeout()), this, SLOT(time_out()));
            this->parentWidget()->show();
            hide();
        }else{
            this->close();
        }
    }

}

///////////////////////////////////////////////////////other-button////////////////////////////////////////////////////////////////

void window3::on_pushButton_delete_clicked()
{
    if(x >= 0 && y >= 0 && check_delete(game.ch)){
        game.table[x][y] = 0;
        table[9*x + y]->setText(" ");
    }
}

void window3::on_pushButton_check_clicked()
{
    check_count++;
    if(check_count > 3){
        if(check_time_nolimit)      i_min += 5;
        else                        i_min -= 5;
    }

    int_to_text();

    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    for(int i = 0; i < 9; i++)
        for(int j = 0; j < 9; j++)
            if(game.key[i][j] == game.table[i][j] && game.ch[i][j] == 0){
                table[9*i + j]->setEnabled(false);
                table[9*i + j]->setStyleSheet("QPushButton{	background: rgb(170, 255, 127); color: rgb(170, 0, 0); }");
            }
    win();
    x = -1;     y = -1;
}

void window3::on_pushButton_end_clicked()
{
    start_time = 0;
    disconnect(time, SIGNAL(timeout()), this, SLOT(time_out()));
    this->parentWidget()->show();
    hide();
}

/////////////////////////////////////////////////////////numpad//////////////////////////////////////////////////////////////

void window3::on_pushButton_num1_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 1;
        table[9*x + y]->setText("1");
    }

}


void window3::on_pushButton_num2_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 2;
        table[9*x + y]->setText("2");
    }

}


void window3::on_pushButton_num3_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 3;
        table[9*x + y]->setText("3");
    }

}


void window3::on_pushButton_num4_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 4;
        table[9*x + y]->setText("4");
    }

}


void window3::on_pushButton_num5_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 5;
        table[9*x + y]->setText("5");
    }

}


void window3::on_pushButton_num6_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 6;
        table[9*x + y]->setText("6");
    }

}


void window3::on_pushButton_num7_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 7;
        table[9*x + y]->setText("7");
    }

}


void window3::on_pushButton_num8_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 8;
        table[9*x + y]->setText("8");
    }

}


void window3::on_pushButton_num9_clicked()
{
    if(x >= 0 && y >= 0 && check_add(game.ch)){
        game.table[x][y] = 9;
        table[9*x + y]->setText("9");
    }

}

////////////////////////////////////////////////////////table///////////////////////////////////////////////////////////////


void window3::on_pushButton00_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 0;      y = 0;

    when_been_click_table();
}

void window3::on_pushButton01_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 0;      y = 1;

    when_been_click_table();
}


void window3::on_pushButton02_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 0;      y = 2;

    when_been_click_table();
}

void window3::on_pushButton03_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 0;      y = 3;

    when_been_click_table();
}


void window3::on_pushButton04_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 0;      y = 4;

    when_been_click_table();
}


void window3::on_pushButton05_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 0;      y = 5;

    when_been_click_table();
}


void window3::on_pushButton06_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 0;      y = 6;

    when_been_click_table();
}


void window3::on_pushButton07_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 0;      y = 7;

    when_been_click_table();
}


void window3::on_pushButton08_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 0;      y = 8;

    when_been_click_table();
}

void window3::on_pushButton10_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 1;      y = 0;

    when_been_click_table();
}


void window3::on_pushButton11_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 1;      y = 1;

    when_been_click_table();
}


void window3::on_pushButton12_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 1;      y = 2;

    when_been_click_table();
}

void window3::on_pushButton13_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 1;      y = 3;

    when_been_click_table();
}


void window3::on_pushButton14_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 1;      y = 4;

    when_been_click_table();
}


void window3::on_pushButton15_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 1;      y = 5;

    when_been_click_table();
}


void window3::on_pushButton16_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 1;      y = 6;

    when_been_click_table();
}


void window3::on_pushButton17_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 1;      y = 7;

    when_been_click_table();
}


void window3::on_pushButton18_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 1;      y = 8;

    when_been_click_table();
}

void window3::on_pushButton20_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 2;      y = 0;

    when_been_click_table();
}

void window3::on_pushButton21_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 2;      y = 1;

    when_been_click_table();
}

void window3::on_pushButton22_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 2;      y = 2;

    when_been_click_table();
}

void window3::on_pushButton23_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 2;      y = 3;

    when_been_click_table();
}


void window3::on_pushButton24_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 2;      y = 4;

    when_been_click_table();
}


void window3::on_pushButton25_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 2;      y = 5;

    when_been_click_table();
}


void window3::on_pushButton26_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 2;      y = 6;

    when_been_click_table();
}


void window3::on_pushButton27_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 2;      y = 7;

    when_been_click_table();
}


void window3::on_pushButton28_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 2;      y = 8;

    when_been_click_table();
}


void window3::on_pushButton30_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 3;      y = 0;

    when_been_click_table();
}


void window3::on_pushButton31_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 3;      y = 1;

    when_been_click_table();
}


void window3::on_pushButton32_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 3;      y = 2;

    when_been_click_table();
}


void window3::on_pushButton33_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 3;      y = 3;

    when_been_click_table();
}


void window3::on_pushButton34_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 3;      y = 4;

    when_been_click_table();
}


void window3::on_pushButton35_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 3;      y = 5;

    when_been_click_table();
}


void window3::on_pushButton36_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 3;      y = 6;

    when_been_click_table();
}


void window3::on_pushButton37_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 3;      y = 7;

    when_been_click_table();
}


void window3::on_pushButton38_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 3;      y = 8;

    when_been_click_table();
}


void window3::on_pushButton40_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 4;      y = 0;

    when_been_click_table();
}


void window3::on_pushButton41_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 4;      y = 1;

    when_been_click_table();
}


void window3::on_pushButton42_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 4;      y = 2;

    when_been_click_table();
}


void window3::on_pushButton43_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 4;      y = 3;

    when_been_click_table();
}


void window3::on_pushButton44_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 4;      y = 4;

    when_been_click_table();
}


void window3::on_pushButton45_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 4;      y = 5;

    when_been_click_table();
}


void window3::on_pushButton46_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 4;      y = 6;

    when_been_click_table();
}


void window3::on_pushButton47_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 4;      y = 7;

    when_been_click_table();
}


void window3::on_pushButton48_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 4;      y = 8;

    when_been_click_table();
}


void window3::on_pushButton50_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 5;      y = 0;

    when_been_click_table();
}


void window3::on_pushButton51_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 5;      y = 1;

    when_been_click_table();
}


void window3::on_pushButton52_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 5;      y = 2;

    when_been_click_table();
}


void window3::on_pushButton53_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 5;      y = 3;

    when_been_click_table();
}


void window3::on_pushButton54_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 5;      y = 4;

    when_been_click_table();
}


void window3::on_pushButton55_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 5;      y = 5;

    when_been_click_table();
}


void window3::on_pushButton56_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 5;      y = 6;

    when_been_click_table();
}


void window3::on_pushButton57_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 5;      y = 7;

    when_been_click_table();
}


void window3::on_pushButton58_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 5;      y = 8;

    when_been_click_table();
}


void window3::on_pushButton60_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 6;      y = 0;

    when_been_click_table();
}


void window3::on_pushButton61_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 6;      y = 1;

    when_been_click_table();
}


void window3::on_pushButton62_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 6;      y = 2;

    when_been_click_table();
}


void window3::on_pushButton63_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 6;      y = 3;

    when_been_click_table();
}


void window3::on_pushButton64_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 6;      y = 4;

    when_been_click_table();
}


void window3::on_pushButton65_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 6;      y = 5;

    when_been_click_table();
}


void window3::on_pushButton66_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 6;      y = 6;

    when_been_click_table();
}


void window3::on_pushButton67_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 6;      y = 7;

    when_been_click_table();
}


void window3::on_pushButton68_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 6;      y = 8;

    when_been_click_table();
}


void window3::on_pushButton70_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 7;      y = 0;

    when_been_click_table();
}


void window3::on_pushButton71_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 7;      y = 1;

    when_been_click_table();
}


void window3::on_pushButton72_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 7;      y = 2;

    when_been_click_table();
}


void window3::on_pushButton73_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 7;      y = 3;

    when_been_click_table();
}


void window3::on_pushButton74_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 7;      y = 4;

    when_been_click_table();
}


void window3::on_pushButton75_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 7;      y = 5;

    when_been_click_table();
}


void window3::on_pushButton76_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 7;      y = 6;

    when_been_click_table();
}


void window3::on_pushButton77_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 7;      y = 7;

    when_been_click_table();
}


void window3::on_pushButton78_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 7;      y = 8;

    when_been_click_table();
}


void window3::on_pushButton80_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 8;      y = 0;

    when_been_click_table();
}


void window3::on_pushButton81_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 8;      y = 1;

    when_been_click_table();
}


void window3::on_pushButton82_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 8;      y = 2;

    when_been_click_table();
}


void window3::on_pushButton83_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 8;      y = 3;

    when_been_click_table();
}


void window3::on_pushButton84_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 8;      y = 4;

    when_been_click_table();
}


void window3::on_pushButton85_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 8;      y = 5;

    when_been_click_table();
}


void window3::on_pushButton86_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 8;      y = 6;

    when_been_click_table();
}


void window3::on_pushButton87_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 8;      y = 7;

    when_been_click_table();
}


void window3::on_pushButton88_clicked()
{
    if(x >= 0 && y >= 0){
        after_been_click_table();
    }

    x = 8;      y = 8;

    when_been_click_table();
}

