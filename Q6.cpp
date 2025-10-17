#include <iostream>
#include <string>
using namespace std;

class TelephoneBill {
private:
    string name;
    string address;
    string telephoneNumber;
    int numberOfCalls;

public:
    
    TelephoneBill(string n, string addr, string tel, int calls) {
        name = n;
        address = addr;
        telephoneNumber = tel;
        numberOfCalls = calls;
    }

    friend void computeBill(const TelephoneBill& bill);
};

void computeBill(const TelephoneBill& bill) {
    const int chargePerCall = 2;
    int amount = bill.numberOfCalls * chargePerCall;

    cout << "\n--- Telephone Bill ---" << endl;
    cout << "Name: " << bill.name << endl;
    cout << "Address: " << bill.address << endl;
    cout << "Telephone Number: " << bill.telephoneNumber << endl;
    cout << "Number of Calls: " << bill.numberOfCalls << endl;
    cout << "Amount to be Paid: Rs. " << amount << endl;
}

int main() {
    string name, address, tel;
    int calls;

    cout << "Enter Customer Name: ";
    getline(cin, name);
    cout << "Enter Address: ";
    getline(cin, address);
    cout << "Enter Telephone Number: ";
    getline(cin, tel);
    cout << "Enter Number of Calls Made: ";
