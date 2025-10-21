#include <iostream>
using namespace std;

int main(){
    int rows,cols;
    int i,j;
    
     cout << "Enter numbers for rows and columns" << endl;
     cin >> rows >> cols;

    int A[rows][cols],B[rows][cols],C[rows][cols];
    
    cout << "Enter elements for the 1st matrix " << endl;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cin >> A[i][j];
        }
    }
    
    cout << "Enter elements for the 2nd matrix " << endl;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cin >> B[i][j];
        }
    }
    
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    
    cout << "\nSum of Matrices: " << endl;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
}
