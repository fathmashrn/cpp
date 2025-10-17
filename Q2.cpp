#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string BookID,BookName;
    float BookPrice,total;
    int n;       

    float totalcost(int n) {
        return BookPrice * n;
    }
    
    public:
    void details() {
        cout << "Enter Book ID: ";
        cin >> BookID;
        cout << "Enter Book Name: ";
        cin >> BookName;
        cout << "Enter Book Price: ";
        cin >> BookPrice;
        
        cout << endl;
    }
    
     void display() {
        cout << "---Details of the Book---" << endl; 
        cout << "Book ID: " << BookID << endl;
        cout << "Book Name: " << BookName << endl;
        cout << "Book Price: " << BookPrice << endl;
        cout << "Total cost for " << n << " copies: " << total << endl; 
        
        cout << endl;
    }
    
     void totalcost() {
        cout << "Enter the number of copies required: ";
        cin >> n;
        total = totalcost(n);
        cout << endl;
    }
       
};

int main(){
        
     Book book1,book2,book3;
        book1.details();
        book1.totalcost();
        book2.details();
        book2.totalcost();
        book3.details(); 
        book3.totalcost();
        
        
        book1.display();

        book2.display();
    
        book3.display();
       
        
        return 0;
}
