#include<iostream>
using namespace std;

void setMatrix(int ** p, int n);            // test function
void EXsuduku(int **p, int n);              // example suduku
void set0(int ** p, int n);

void newMatrix(int ** &p, int n = 3);
void deleteMatrix(int **p, int n = 3);
void printTable(int **p, int n);
bool checkRow(int **p, int N,int number); //N = 9
bool checkCol(int **p, int N,int number);
bool checkBox(int ** p, int n, int x, int y, int num);


int main(){

    int **p;
    newMatrix(p);       // box 3*3 --> Array 9*9

    

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

bool checkRow(int **p,int N, int number)
{   
    for (int i = 1; i < N+1; i++)
    {
        for (int col = 0; col < N; col++)
            if (**(p + col*i) == number)
                return true;
        return false;
    }
}
bool checkCol(int **p,int N ,int number)
{
    for (int row = 0; row < N; row++)
    {
        for (int i = 0; i < N+1; i++)
            if (**(p + N*1)  == number)
                return true;
        else 
        return false;
    }
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