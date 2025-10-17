//Create three car object with different attributes and display details of each one

#include <iostream>
using namespace std;

class car{
    public:
    
    string brand,model;
    int year;
    
    void details(){
        
        cout << "Enter the car brand:" << endl;
        cin >> brand;
        
        cout << "Enter the car model:" << endl;
        cin >> model;
        
        cout << "Enter the published year:" << endl;
        cin >> year;
          
        cout << endl;
    }
    
    void display(){
        
        cout << "Car Brand :" << brand << endl;
        cout << "Car Model :" << model << endl;
        cout << "Car Year  :" << year << endl;
        
        cout << endl;
    }
};


int main(){
    
    car car1,car2,car3;
    
    car1.details();
    car2.details();
    car3.details();
    
    cout << "---Details of car 1---" << endl;
    car1.display();
    
    cout << "---Details of car 2---" << endl;
    car2.display();
    
    cout << "---Details of car 3---" << endl;
    car3.display();
    
    return 0;
}
