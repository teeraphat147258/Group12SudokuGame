#include<iostream>
using namespace std;

void newMatrix(int ** &p, int n = 9);
void deleteMatrix(int **p, int n = 9);
void setMatrix(int ** p, int n);            // test function
void printTable(int grid[N][N]);

int main(){

    int **p;
    newMatrix(p);       //Array 9*9
    setMatrix(p, 9);

    deleteMatrix(p);

    return 0;
}

void newMatrix(int ** &p, int n){
    p = new int *[n];
    for(int i = 0; i < n; i++)      p[i] = new int [n];
}

void deleteMatrix(int **p, int n){
    for(int i = 0; i < n; i++)      delete [] p[i];
    delete [] p;
}

// test function
void setMatrix(int ** p, int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            p[i][j] = j;
    }

    /*
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << p[i][j] << " ";
        cout << endl;
    }
    */
}

void printTable(int grid[N][N]){
    cout << "-------------------------\n";
    for(int i = 0; i < N; i++){
        if(i == 3 || i == 6)  cout << "|-------|-------|-------|\n";
        for(int j = 0; j < N; j++){
            if(j == 0 || j == 3 || j == 6)  cout << "| ";
            cout << grid[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << "-------------------------";
}