#include <iostream>
#include <conio.h>
using namespace std;

class Space {
    int x,y,z;
    public:
        Space(int x, int y, int z){
            this->x=x;
            this->y=y;
            this->z=z;
        }
        void display(){
            cout << "(" << x << "," << y << "," << z << ")";
        }
        friend void operator -(Space&);
};

void operator -(Space &s){
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}

int main()
{
    Space pt(10, -20, 25);
    cout << "\nPoint: ";
    pt.display();

    -pt;

    cout << "\nNegation of Point: ";
    pt.display();

    return 0;
}