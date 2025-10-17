#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called: length and width initialized to 0." << endl;
    }

    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called: length = " << length << ", width = " << width << endl;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    Rectangle() {
        cout << "Destructor called: Rectangle object destroyed." << endl;
    }
};

int main() {
    cout << "Creating rectangle1 using default constructor." << endl;
    Rectangle rectangle1; 
    rectangle1.display();

    cout << "\nCreating rectangle2 using parameterized constructor." << endl;
    Rectangle rectangle2(10, 5);  
    rectangle2.display();

    cout << "\nEnd of main function." << endl;
    return 0;
}
