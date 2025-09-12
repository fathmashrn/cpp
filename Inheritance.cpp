//single inheritance

#include <iostream>
using namespace std;

// Base class
class person {
    public:
    void display(){
        string name;
        int age;    
        
        cout << "Enter a name of the person" << endl;
        cin >> name;
        cout << "Enter the age" << endl;
        cin >> age;
    }
};

// Derived class
class student:public person {
    public:
    void showdetails() {
        int no,yr;
        
        cout << "Enter the roll number" << endl;
        cin >> no;
        cout << "Year" <<endl;
        cin >> yr;
    }
};

int main() 
{
    student s1;
    s1.display();
    s1.showdetails();

return 0;
}
