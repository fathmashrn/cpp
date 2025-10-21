#include <iostream>
using namespace std;

int main()
{
    int rows,cols;
    int i,j;
    
     cout << "Enter numbers for rows and columns" << endl;
     cin >> rows >> cols;
     
    int mtx[rows][cols];
    
    cout << "Enter elements for the matrix" << endl;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cin >> mtx[i][j];
        }
    }
    
    cout << "Matrix is: " << endl;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cout << mtx[i][j]<<"\t";
        }
        cout << endl;
    }
}
