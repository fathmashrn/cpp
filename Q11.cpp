#include <iostream>
using namespace std;

// Base class
class BankAccount {
protected:
    int account_number;
    double balance;

public:
    void inputAccount() {
        cout << "Enter Account Number: ";
        cin >> account_number;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited Rs. " << amount << ". New Balance: Rs. " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn Rs. " << amount << ". New Balance: Rs. " << balance << endl;
        }
    }

    void displayBalance() const {
        cout << "Account Number: " << account_number << ", Balance: Rs. " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
private:
    double rate_of_interest;

public:
    void inputSavings() {
        inputAccount();
        cout << "Enter Rate of Interest (%): ";
        cin >> rate_of_interest;
    }

    void calculateInterest() const {
        double interest = balance * rate_of_interest / 100;
        cout << "Interest Earned: Rs. " << interest << endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    const double minimum_balance = 1000.0;
    const double service_charge = 100.0;

public:
    void inputCurrent() {
        inputAccount();
    }

    void checkAndApplyServiceCharge() {
        if (balance < minimum_balance) {
            balance -= service_charge;
            cout << "Balance below minimum. Service charge of Rs. " << service_charge << " applied." << endl;
        } else {
            cout << "Minimum balance maintained. No service charge." << endl;
        }
        displayBalance();
    }
};

int main() {
    cout << "=== Savings Account ===" << endl;
    SavingsAccount sa;
    sa.inputSavings();
    sa.deposit(2000);
    sa.withdraw(500);
    sa.calculateInterest();
    sa.displayBalance();

    cout << "\n=== Current Account ===" << endl;
    CurrentAccount ca;
    ca.inputCurrent();
    ca.deposit(800);
    ca.withdraw(100);
    ca.checkAndApplyServiceCharge();

    return 0;
}
