#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); 
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int roll_number;

public:
    void inputStudent() {
        inputPerson(); 
        cout << "Enter roll number: ";
        cin >> roll_number;
    }

    void showDetails() const {
        display(); 
        cout << "Roll Number: " << roll_number << endl;
    }
};

int main() {
    Student s;
    cout << "Enter student details:\n";
    s.inputStudent();

    cout << "\nStudent Information:\n";
    s.showDetails();

    return 0;
}
