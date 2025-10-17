#include <iostream>
#include <cmath> 

using namespace std;

double area(double radius) {
    return M_PI * radius * radius;
}

int area(int side) {
    return side * side;
}

int area(int length, int breadth) {
    return length * breadth;
}

double area(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    cout << "Area of Circle (radius = 5): " << area(5.0) << endl;
    cout << "Area of Square (side = 4): " << area(4) << endl;
    cout << "Area of Rectangle (length = 5, breadth = 3): " << area(5, 3) << endl;
    cout << "Area of Triangle (sides = 3, 4, 5): " << area(3.0, 4.0, 5.0) << endl;

    return 0;
}
