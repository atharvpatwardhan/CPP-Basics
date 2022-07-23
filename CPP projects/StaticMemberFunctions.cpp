#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length,breadth;
    static int count;
    public:
    Rectangle(int,int);
    void findArea();
    static int getcount();

};

Rectangle::Rectangle(int length,int breadth){
    this -> length = length;
    this -> breadth = breadth;
    count++;
}

void Rectangle::findArea(){
    cout<<"\n\tLength = "<<length;
    cout<<"\n\tBreadth = "<<breadth;
    cout<<"\n\tArea :"<<length*breadth;

}

int Rectangle::getcount(){
    return count;
}

int Rectangle::count = 0;

int main(){
    Rectangle r1(10,2), r2(4,3);
    cout<<"\nRectangle 1 :";
    r1.findArea();
    cout<<"\nRectangle 2 :";
    r2.findArea();
    cout<<"\nNo. of rectangle objects = "<<Rectangle::getcount();
    return 0;
}

