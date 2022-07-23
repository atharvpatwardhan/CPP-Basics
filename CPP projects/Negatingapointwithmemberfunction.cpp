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
        void operator - (){
            x=-x;
            y=-y;
            z=-z;
        }
};

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