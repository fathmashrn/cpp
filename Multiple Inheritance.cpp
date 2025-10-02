//Constructor Calling Order in Multiple Inheritance

#include <iostream>
using namespace std;

class ramsheeda{
    public:
    ramsheeda(){
        cout <<"Ramsheeda is my mother" << endl;
    }
};

class sharafu{
    public:
    sharafu(){
        cout <<"Sharafu is my father" << endl;
    }
};

class aydin:public ramsheeda,public sharafu{
    public:
    aydin(){
        cout <<"Both are my parents" << endl;
    }
};

int main(){
    aydin son;
    return 0;
}
