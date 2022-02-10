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
        bool checkEmpty(int **, int &, int &);
        void randomBox(int **, int, int);
        void copyTable(int **, int **);
        bool check_different_answer(int, int);
        void hideBox(int **, int , int , int &, int &);
    public :
        int **key, **table, **ch;
        sudoku(int);
        ~sudoku();

        void printTable(int **);
        void set0(int **);                  // set value to zero
        void EXsudoku0(int **);             // example sudoku for check answer
        void EXsudoku1(int **);             // example sudoku for solve answer

        bool checkAns(int **);
        bool solveSudoku(int **);
        void randomTable(int **);
        void createTable();
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

void sudoku::EXsudoku1(int **ans){

    int a[9*9] =    { 0,0,3,0,0,0,4,0,0,
                      0,0,0,8,0,0,0,0,0,
                      0,0,0,0,3,0,2,0,0,
                      0,0,0,0,0,0,0,0,0,
                      0,0,0,0,0,0,0,0,0,
                      0,0,0,0,0,0,0,0,0,
                      0,0,0,3,0,0,0,0,5,
                      5,0,0,0,0,0,0,0,0,
                      0,1,0,4,0,0,0,6,0 };

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

bool sudoku::checkEmpty(int **ans, int &x, int &y){
    for(x = 0; x < n*n; x++){
        for(y = 0; y < n*n; y++){
            if(ans[x][y] == 0)    return true;
        }
    }
    return false;
}

bool sudoku::solveSudoku(int **ans){
    int x, y;
    if(!checkEmpty(ans, x, y))     return true;

    for(int num = 1; num <= n*n; num++){

        if(!checkRow(ans, x, y, num) && !checkCol(ans, x, y, num) && !checkBox(ans, x, y, num)){
            ans[x][y] = num;
            if(solveSudoku(ans))   return true;
            ans[x][y] = 0;
        }

    }
    return false;

}

void sudoku::randomBox(int **table, int x_Box, int y_Box){
    
    for(int num = 1; num <= n*n; num++){

        while(1){
            int x = rand()%3 + (x_Box*3);
            int y = rand()%3 + (y_Box*3);
            if(table[x][y] == 0){
                table[x][y] = num;
                break;
            }    
        }

    }

}

void sudoku::randomTable(int **table){                                          
    
    set0(table);
    for(int i = 0; i < n; i++)      randomBox(table, i, i);

    //printTable(table);      //check

    solveSudoku(table);
        
}

void sudoku::copyTable(int **target, int **data){
    for(int i = 0; i < n*n; i++){
        for(int j = 0; j < n*n; j++)
            target[i][j] = data[i][j];
    }
}

bool sudoku::check_different_answer(int x_Box, int y_Box){

    int **s;
    newMatrix(s);
    int x, y, limit = 0;

    while(1){
        copyTable(s, table);
        hideBox(s, x_Box, y_Box, x, y);
            
        solveSudoku(s);
        limit++;
        int count = 0;
        for(int i = 0; i < n*n; i++)  for(int j = 0; j < n*n; j++){
            if(s[i][j] == key[i][j])      count ++;
        }

        if(count == n*n*n*n){
            table[x][y] = 0;
            break;
        }

        if(limit > 64){
            deleteMatrix(s);
            return false;
        }     

    }
    deleteMatrix(s);
}

void sudoku::hideBox(int **table, int x_Box, int y_Box, int &x, int &y){
    
    while(1){
        x = rand()%3 + (x_Box*3);
        y = rand()%3 + (y_Box*3);
        if(table[x][y] != 0){
            table[x][y] = 0;
            break;
        }    
    }

}

void sudoku::createTable(){
    bool oneans = false;
    
    for(int i = 0; i < n; i++)  for(int j = 0; j < n; j++)  {

        if(!oneans){
            randomTable(key);
            copyTable(table, key);
            i = 0;
            j = 0;
        }

        int r = rand()%100 + 1; // 0% -> 4, 65% -> 3, 25% -> 2, 5% -> 1

        if(r <= 65)             for(int k = 0; k < 6; k++)      oneans = check_different_answer(i, j);       //show 4 number
        else if(r <= 90)        for(int k = 0; k < 7; k++)      oneans = check_different_answer(i, j);       //show 3 number
        else                    for(int k = 0; k < 8; k++)      oneans = check_different_answer(i, j);       //show 2 number

        if(i == n-1 && j == n-1 && !oneans)     createTable();

    }   
}