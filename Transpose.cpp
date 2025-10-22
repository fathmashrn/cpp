#include <iostream>
using namespace std;

int main()
{
    int rows,cols;
    int i,j;
    
    cout << "Enter numbers for rows and columns" << endl;
    cin >> rows >> cols;
    
    int Matrix[rows][cols],transpose[cols][rows];
    
    cout << "Enter elements for matrix :" << endl;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cin >> Matrix[i][j];
        }
    }
    
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            transpose[j][i]=Matrix[i][j];
        }
    }
    
    cout << "\nTranspose of the matrix :" << endl;
    for(i=0;i<cols;i++){
        for(j=0;j<rows;j++){
           cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }
  return 0;  
}
