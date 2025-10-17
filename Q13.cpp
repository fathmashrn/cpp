#include <iostream>
using namespace std;

class c_polygon {
public:
    
    virtual double area() const {
        return 0.0;
    }

    virtual ~c_polygon() {}
};

class c_rectangle : public c_polygon {
private:
    double length, breadth;

public:
    void setDimensions(double l, double b) {
        length = l;
        breadth = b;
    }

    double area() const override {
        return length * breadth;
    }
};

class c_triangle : public c_polygon {
private:
    double base, height;

public:
    void setDimensions(double b, double h) {
        base = b;
        height = h;
    }

    double area() const override {
        return 0.5 * base * height;
    }
};

int main() {
    c_polygon* poly;

    c_rectangle rect;
    rect.setDimensions(10, 5);
    poly = &rect;
    cout << "Area of Rectangle: " << poly->area() << endl;

    c_triangle tri;
    tri.setDimensions(8, 6);
    poly = &tri;
    cout << "Area of Triangle: " << poly->area() << endl;

    return 0;
}
