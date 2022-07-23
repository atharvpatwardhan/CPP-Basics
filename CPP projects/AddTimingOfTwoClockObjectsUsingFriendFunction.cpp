#include <iostream>
using namespace std;

class Clock{
    int hr, min, sec;
    public:
    Clock(){ }
    Clock(int hr, int min, int sec) {
        this->hr=hr;
        this->min=min;
        this->sec=sec;
    }
    void display() {
        cout << hr << ":" << min << ":" << sec << endl;
    }
    friend Clock operator +(Clock, Clock);
    };

Clock operator + (Clock c1, Clock c2){
    int a, b;
    a=c1.sec + c2.sec;
    b=c1.min + c2.min + (a/60);

    int s=a%60;
    int m=b%60;
    int h=(c1.hr+c2.hr+(b/60));
    Clock tmp(h,m,s);
    return tmp;
}

int main()
{
    Clock c1(16,15,25), c2(8,45,55), c3;
    c3=c1+c2;
    
    cout << "Clock-1: ";
    c1.display();
    cout << "Clock-2: ";
    c2.display();
    cout << "Clock-3: ";
    c3.display();

    return 0;
}