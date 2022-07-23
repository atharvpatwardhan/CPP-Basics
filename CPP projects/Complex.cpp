#include <iostream>
using namespace std;

class Complex{
    float x,y;
    public:
        Complex(){
            x=y=0;
        }
        Complex(float a, float b){
            x=a;
            y=b;
        }
        void display(){
            cout << std::noshowpos << x
                 << std::showpos << y << "i";
        }
        void add(Complex c1, Complex c2){
            x= c1.x + c2.x;
            y= c1.y + c2.y;
        }
};
int main ()
{
    Complex c1(1.5, -1.5), c2(-2.6, 2.6), c3;
    c3.add(c1, c2);
    cout << "\nc1 = ";
    c1.display();
    cout << "\nc2 = ";
    c2.display();
    cout << "\nc1+c2= ";
    c3.display();
    return 0;
}

