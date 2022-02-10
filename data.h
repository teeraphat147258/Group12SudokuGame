#include<iostream>
using namespace std;

class sudoku{
    private :
        int n;
        void newMatrix(int ** &);
        void deleteMatrix(int **);
        bool checkRow(int **, int, int, int);
        bool checkCol(int **, int, int, int);
        bool checkBox(int **, int, int, int);
        bool checkAns_of_each(int **, int, int);
        

    public :
        int **key, **table, **ch;
        sudoku(int);
        ~sudoku();

        void printTable(int **);
        void set0(int **);                   // set value to zero
        void EXsudoku0(int **);              // example suduku

        bool checkAns(int **);

};

sudoku::sudoku(int size = 3){           // create box 3*3 --> Array 9*9
    n = size;
    newMatrix(key);       
    newMatrix(table);
    newMatrix(ch);
}

sudoku::~sudoku(){
    deleteMatrix(key);
    deleteMatrix(table);
    deleteMatrix(ch);
}

void sudoku::newMatrix(int ** &ans){
    ans = new int *[n*n];
    for(int i = 0; i < n*n; i++)      ans[i] = new int [n*n];
}

void sudoku::deleteMatrix(int **ans){
    for(int i = 0; i < n*n; i++)      delete [] ans[i];
    delete [] ans;
}

void sudoku::printTable(int **ans){
    cout << "-------------------------\n";      // modifiy
    for(int i = 0; i < n*n; i++){
        if(i%n == 0 && i != 0 && i != n*n-1)  cout << "|-------|-------|-------|\n";
        for(int j = 0; j < n*n; j++){
            if(j%n == 0)  cout << "| ";
            
            if(ans[i][j] == 0)    cout << "  ";
            else                cout << ans[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << "-------------------------\n";        //modifiy
}

// set value to zero
void sudoku::set0(int ** ans){
    
    for(int i = 0; i < n*n; i++){
        for(int j = 0; j < n*n; j++)
            ans[i][j] = 0;
    }
   
}

// example suduku
void sudoku::EXsudoku0(int **ans){

    int a[9*9] =    { 2,8,3,7,9,5,4,1,6,
                      6,9,1,8,4,2,5,3,7,
                      4,7,5,6,3,1,2,9,8,
                      7,5,6,9,8,4,3,2,1,
                      1,3,9,5,2,6,7,8,4,
                      8,2,4,1,7,3,6,5,9,
                      9,4,2,3,6,8,1,7,5,
                      5,6,7,2,1,9,8,4,3,
                      3,1,8,4,5,7,9,6,2 };

    for(int i = 0; i < n*n; i++){
        for(int j = 0; j < n*n; j++)
            ans[i][j] = a[i*n*n+j];
    }
}

// x --> row , y --> colum
// x is fixed
bool sudoku::checkRow(int **ans, int x, int y, int num){
    for (int i = 0; i < n*n; i++){
        if (ans[x][i] == num)
            return true;
    }
    return false;
}

// x --> row , y --> colum
// y is fixed
bool sudoku::checkCol(int **ans, int x, int y, int num){
    for (int i = 0; i < n*n; i++){
        if (ans[i][y] == num)
            return true;
    }
    return false;
}

bool sudoku::checkBox(int **ans, int x, int y, int num){
    x = (x/3)*3;
    y = (y/3)*3;
    
    for(int i = x; i < x+3; i++){
        for(int j = y; j < y+3; j++){
            if(ans[i][j] == num)      return true;
        }
    }
    return false;
}

bool sudoku::checkAns_of_each(int **ans, int x, int y){
    int Crow = 0, Ccol = 0, Cbox = 0;
    for(int num = 1; num <= n*n; num++){
        if(checkRow(ans, x, y, num))  Crow++;
        if(checkCol(ans, x, y, num))  Ccol++;
        if(checkBox(ans, x, y, num))  Cbox++;
    }
    
    if(Crow+Ccol+Cbox == 27)    return true;
    else                        return false;
}

// return 1 --> true
bool sudoku::checkAns(int **ans){
    int count = 0;
    for(int i = 0; i < n*n; i++){
        for(int j = 0; j < n*n; j++){
            if(checkAns_of_each(ans, i, j))    count++;
        }
    }

    if(count == n*n*n*n)    return true;
    else                    return false;
}