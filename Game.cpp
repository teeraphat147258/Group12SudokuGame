#include<iostream>
using namespace std;

void newMatrix(int ** &p, int n = 3);
void deleteMatrix(int **p, int n = 3);
void setMatrix(int ** p, int n);            // test function
void printTable(int **p, int n);
bool UsedInRow(int **p, int N,int number); //N = 9
bool UsedInCol(int **p, int N,int number);

int main(){

    int **p;
    newMatrix(p);       //Array 9*9
    setMatrix(p, 9);
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

// test function
void setMatrix(int ** p, int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            p[i][j] = j;
    }

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

bool UsedInRow(int **p,int N, int number)
{   
    for (int i = 1; i < N+1; i++)
    {
        for (int col = 0; col < N; col++)
            if (**(p + col*i) == number)
                return true;
        return false;
    }
}
bool UsedInCol(int **p,int N ,int number)
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