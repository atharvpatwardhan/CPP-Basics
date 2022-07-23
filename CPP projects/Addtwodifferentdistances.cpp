#include <iostream>
using namespace std;

class FtIn;
class MCm {
    int m, cm;
    public:
    MCm(int x, int y){
        m=x; cm=y;
    }
    void display()
    {
        cout << m << " m " << cm << " cm ";
    }
    friend MCm add(MCm, FtIn);
};

class FtIn
{
    int ft, in;
    public:
    FtIn(int x, int y)
    {
        ft=x; in=y;
    }
    void display(){
        cout << ft << " ft " << in << " in ";
    }
    friend MCm add(MCm, FtIn);
};

MCm add(MCm d1, FtIn d2){
    int t_cm = (d1.m*100+d1.cm) + (d2.ft*12+d2.in)*2.54;
    int m, cm;
    m = t_cm /100;
    cm=t_cm % 100;
    MCm d3(m, cm);
    return d3;
}

int main(){
    MCm obj1(4, 15);
    FtIn obj2(5,10);
    MCm obj3=add(obj1, obj2);
    cout << "\n\tDistance - 1 : ";
    obj1.display();
    cout << "\n\tDistance - 2 : ";
    obj2.display();
    cout << "\n\tDistance - 3 : ";
    obj3.display();
    return 0;
}