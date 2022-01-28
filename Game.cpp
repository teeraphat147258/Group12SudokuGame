#include<iostream>
using namespace std;

void EXsuduku(int **p, int n);              // example suduku
void set0(int ** p, int n);                 // set value to zero

void newMatrix(int ** &p, int n = 3);
void deleteMatrix(int **p, int n = 3);
void printTable(int **p, int n);
bool checkRow(int **p, int n, int x, int y, int num);
bool checkCol(int **p, int n, int x, int y, int num);
bool checkBox(int ** p, int n, int x, int y, int num);
bool checkAns_of_each(int ** p, int n, int x, int y);
bool checkAns_suduku(int **p, int n);


int main(){

    int **p;
    newMatrix(p);       // box 3*3 --> Array 9*9

    EXsuduku(p, 3);
    cout << checkAns_suduku(p, 3) << endl;

    printTable(p, 3);
    deleteMatrix(p);

    return 0;
}

void newMatrix(int ** &p, int n){
    p = new int *[n*n];
    for(int i = 0; i < n*n; i++)      p[i] = new int [n*n];
}

void deleteMatrix(int **p, int n){
    for(int i = 0; i < n*n; i++)      delete [] p[i];
    delete [] p;
}

void printTable(int **p, int n){
    cout << "-------------------------\n";
    for(int i = 0; i < n*n; i++){
        if(i == 3 || i == 6)  cout << "|-------|-------|-------|\n";
        for(int j = 0; j < n*n; j++){
            if(j == 0 || j == 3 || j == 6)  cout << "| ";
            cout << p[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << "-------------------------";
}

// x --> row , y --> colum
// x is fixed
bool checkRow(int **p, int n, int x, int y, int num){ 
    for (int i = 0; i < n*n; i++){
        if (p[x][i] == num)
            return true;
    }
    return false;
}

// x --> row , y --> colum
// y is fixed
bool checkCol(int **p, int n, int x, int y, int num){
    for (int i = 0; i < n*n; i++){
        if (p[i][y] == num)
            return true;
    }
    return false;
}

bool checkBox(int ** p, int n, int x, int y, int num){
    x = (x/3)*3;
    y = (y/3)*3;
    
    for(int i = y; i < y+3; i++){
        for(int j = x; j < x+3; j++){
            if(p[i][j] == num)      return true;
        }
    }
    return false;
}

// example suduku
void EXsuduku(int **p, int n){

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
            p[i][j] = a[i*n*n+j];
    }
}

// set value to zero
void set0(int ** p, int n){
    
    for(int i = 0; i < n*n; i++){
        for(int j = 0; j < n*n; j++)
            p[i][j] = 0;
    }
   
}

bool checkAns_of_each(int ** p, int n, int x, int y){
    int Crow = 0, Ccol = 0, Cbox = 0;
    for(int num = 1; num <= n*n; num++){
        if(checkRow(p, n, x, y, num))  Crow++;
        if(checkCol(p, n, x, y, num))  Ccol++;
        if(checkBox(p, n, x, y, num))  Cbox++;
    }
    
    if(Crow+Ccol+Cbox == 27)    return true;
    else                        return false;
}

// return 1 --> true
bool checkAns_suduku(int **p, int n){
    int count = 0;
    for(int i = 0; i < n*n; i++){
        for(int j = 0; j < n*n; j++){
            if(checkAns_of_each(p, n, i, j))    count++;
        }
    }

    if(count == n*n*n*n)    return true;
    else                    return false;
}