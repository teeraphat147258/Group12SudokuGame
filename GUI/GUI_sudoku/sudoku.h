#ifndef SUDOKU_H
#define SUDOKU_H


#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include <QString>
using namespace std;

class sudoku{
    private :
        int n;
        bool checkRow(int **, int, int);
        bool checkCol(int **, int, int);
        bool checkBox(int **, int, int, int);
        bool checkAns_of_each(int **, int, int);
        bool checkEmpty(int **, int &, int &);
        void randomBox(int **, int, int);
        void copyTable(int **, int **);
        bool check_different_answer(int, int);
        void hideBox(int **, int , int , int &, int &);

    public :
        int **key, **table, **ch;

        sudoku(int = 3);
        ~sudoku();

        void printTable(int **);
        void set0(int **);                  // set value to zero
        void EXsudoku0(int **);             // example sudoku for check answer
        void EXsudoku1(int **);             // example sudoku for solve answer

        void newMatrix(int ** &, int = 3);
        void deleteMatrix(int **, int = 3);
        bool checkAns(int **);
        bool solveSudoku(int **);
        void randomTable(int **);
        void createTable(QString);
        void addAnswer();
        void createChannel();
        bool checkWith_Key();
};

#endif // SUDOKU_H
