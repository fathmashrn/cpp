#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    
    Counter(int v = 0) : value(v) {}

    void display() const {
        cout << "Value: " << value << endl;
    }

    Counter& operator++() {
        ++value;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }
};

int main() {
    Counter c1(5);

    cout << "Initial ";
    c1.display();

    ++c1; 
    cout << "After Prefix ++ ";
    c1.display();

    c1++; 
    cout << "After Postfix ++ ";
    c1.display();

    return 0;
}
