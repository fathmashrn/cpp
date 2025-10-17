#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollno;
    string course;

public:
    void inputStudent() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollno;
        cin.ignore(); 
        cout << "Enter Course: ";
        getline(cin, course);
    }

    void displayStudent() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Course: " << course << endl;
    }
};

class Test : virtual public Student {
protected:
    float mark1, mark2, mark3;

public:
    void inputMarks() {
        cout << "Enter marks for 3 subjects:\n";
        cin >> mark1 >> mark2 >> mark3;
    }

    void displayMarks() const {
        cout << "Marks: " << mark1 << ", " << mark2 << ", " << mark3 << endl;
    }

    float getTotalMarks() const {
        return mark1 + mark2 + mark3;
    }
};

class GraceMarks : virtual public Student {
protected:
    float bonusMark;

public:
    void inputBonus() {
        cout << "Enter Grace Marks: ";
        cin >> bonusMark;
    }

    void displayBonus() const {
        cout << "Grace Marks: " << bonusMark << endl;
    }

    float getBonus() const {
        return bonusMark;
    }
};

class Result : public Test, public GraceMarks {
private:
    float total;

public:
    void calculateTotal() {
        total = getTotalMarks() + getBonus();
    }

    void displayResult() const {
        cout << "\n--- STUDENT RESULT ---\n";
        displayStudent();
        displayMarks();
        displayBonus();
        cout << "Total Marks (including Grace): " << total << endl;
    }
};

int main() {
    Result r;
    r.inputStudent();
    r.inputMarks();
    r.inputBonus();
    r.calculateTotal();
    r.displayResult();

    return 0;
}
