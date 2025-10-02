#include <iostream>
using namespace std;

class Universe{ //base class
    public:
    void universe(){
        cout <<"I am the Universe 🌌 - the origin of everything."<<endl;
    }
};

class Planet:public Universe{ //derived from Universe
    public:
    void planet(){
        cout <<"I am a Planet 🪐 - a small part of the universe."<<endl;
    }
};

class Earth:public Planet{ //derived from Planet
    public:
    void earth(){
        cout <<"I am Earth 🌍 - the only known planet with life."<<endl;
    }
};

int main()
{
 Earth E;
 E.universe();
 E.planet();
 E.earth();
 
 return 0;
}

