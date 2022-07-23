#include <iostream>
using namespace std;

class Rectangle{
    int length,breadth;
    

    public:
    Rectangle(int,int);
    int findarea();
};

Rectangle::Rectangle(int length,int breadth){
    this -> length = length;
    this -> breadth = breadth;
}

int Rectangle::findarea(){
    return length*breadth;
}

int main(){
    int l,b;
    cout<<"Enter the Length : ";
    cin>>l;
    cout<<"Enter the Breadth : ";
    cin>>b;
    Rectangle r1(l,b);
    cout<<r1.findarea();

    return 0;
}

