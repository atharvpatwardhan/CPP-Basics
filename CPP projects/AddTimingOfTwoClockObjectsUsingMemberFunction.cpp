#include <iostream>
#include <conio.h>

using namespace std;

class Clock{
    int hr,min,sec;
    public:
    Clock(){ }
    Clock(int hr,int min,int sec){
        this -> hr = hr;
        this -> min = min;
        this -> sec =  sec;
    }
    void display(){
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
    Clock operator + (Clock c){
        int a,b;
        a = sec + c.sec;
        b = min + c.min + (a/60);
        int s = a%60;
        int m = b%60;
        int h = (hr+c.hr+(b/60));
        Clock tmp(h,m,s);
        return tmp;
        
    }
};


int main(){
    Clock c1(16,15,25),c2(8,45,55),c3;
    c3 =c1+c2;
    cout<<"Clock 1 : ";
    c1.display();
    cout<<"Clock 2 : ";
    c2.display();
    cout<<"Clock 3 : ";
    c3.display();
    
    return 0;


}