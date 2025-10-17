#include <iostream>
#include <string>
using namespace std;

class online_shopping {
protected:
    string item_name;
    int quantity;
    double unit_price;

public:
    void inputShoppingDetails() {
        cout << "Enter item name: ";
        getline(cin, item_name);
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter unit price: ";
        cin >> unit_price;
        cin.ignore(); 
    }

    double getItemTotal() const {
        return quantity * unit_price;
    }

    void displayShoppingDetails() const {
        cout << "Item Name: " << item_name << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Unit Price: Rs. " << unit_price << endl;
    }
};

class Shipping_details {
protected:
    double shipping_charge;

public:
    void inputShippingCharge() {
        cout << "Enter shipping charge: ";
        cin >> shipping_charge;
    }

    void displayShippingCharge() const {
        cout << "Shipping Charge: Rs. " << shipping_charge << endl;
    }
};

class Bill : public online_shopping, public Shipping_details {
public:
    void inputBillDetails() {
        inputShoppingDetails();
        inputShippingCharge();
    }

    void displayBill() const {
        cout << "\n--- BILL DETAILS ---\n";
        displayShoppingDetails();
        displayShippingCharge();
        double total = getItemTotal() + shipping_charge;
        cout << "Total Amount to Pay: Rs. " << total << endl;
    }
};

int main() {
    Bill customerBill;
    customerBill.inputBillDetails();
    customerBill.displayBill();

    return 0;
}
