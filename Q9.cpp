#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[3][3];

public:
  
    void input() {
        cout << "Enter elements of 3x3 matrix:\n";
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                cin >> mat[i][j];
    }

    void display() const {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j)
                cout << mat[i][j] << "\t";
            cout << endl;
        }
    }

    Matrix operator+(const Matrix& m) const {
        Matrix result;
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                result.mat[i][j] = mat[i][j] + m.mat[i][j];
        return result;
    }
};

int main() {
    Matrix A, B, C;

    cout << "Matrix A:\n";
    A.input();

    cout << "\nMatrix B:\n";
    B.input();

    C = A + B;

    cout << "\nMatrix A + Matrix B:\n";
    C.display();

    return 0;
}
