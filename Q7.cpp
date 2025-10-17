#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
  
    void inputTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    void displayTime() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    friend Time addTime(const Time& t1, const Time& t2);
};

Time addTime(const Time& t1, const Time& t2) {
    Time result;
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + result.seconds / 60;
    result.seconds %= 60;
    result.hours = t1.hours + t2.hours + result.minutes / 60;
    result.minutes %= 60;
    return result;
}

int main() {
    Time time1, time2, sum;

    cout << "Enter first time:\n";
    time1.inputTime();

    cout << "\nEnter second time:\n";
    time2.inputTime();

    sum = addTime(time1, time2);

    cout << "\nFirst Time: ";
    time1.displayTime();

    cout << "Second Time: ";
    time2.displayTime();

    cout << "Sum of Times: ";
    sum.displayTime();

    return 0;
}
