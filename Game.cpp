#include "data.h"

int main(){

    sudoku game;

    game.EXsudoku1(game.table);
    game.printTable(game.table);
    
    game.solveSudoku(game.table);
    game.printTable(game.table);

    if(game.checkAns(game.table))   cout << "Correct";
    else                            cout << "Incorrect";

    return 0;
}