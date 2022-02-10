#include "data.h"

int main(){

    srand(time(0));
    sudoku game;

    game.createTable();
    // game.printTable(game.key);
    game.printTable(game.table);
    // game.solveSuduku(game.table);
    // game.printTable(game.table);
    game.addAnswer();

    return 0;
}