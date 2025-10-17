#include <iostream>
using namespace std;

class AreaCalculator {
public:
    inline double areaCircle(double radius) {
        return 3.14159 * radius * radius;
    }

    inline double areaSquare(double side) {
        return side * side;
    }
    
    inline double areaRectangle(double length, double width) {
        return length * width;
    }

    inline double areaTriangle(double base, double height) {
        return 0.5 * base * height;
    }
};

int main() {
    AreaCalculator calculator;

    double radius, side, length, width, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle: " << calculator.areaCircle(radius) << endl;

    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of Square: " << calculator.areaSquare(side) << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle: " << calculator.areaRectangle(length, width) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << calculator.areaTriangle(base, height) << endl;

    return 0;
}
