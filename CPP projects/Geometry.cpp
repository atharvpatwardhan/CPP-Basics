#include <iostream>
#include <conio.h>
using namespace std;

class Geometry{
    public:
    int area(int x){
        return x*x;
    }
    int volume(int x, int y, int z){
        return x*y*z;
    }
    int area(int x, int y){
        return x*y;
    }
};


int main(){
    Geometry obj;
    int side,l,b,h;
    cout<<"\nTo find area of square : ";
    cout<<"\nPlease enter the side : ";
    cin>>side;
    cout<<"\nArea of square = "<<obj.area(side);
    cout<<"\n\nTo find volume of cuboid : ";
    cout<<"\nPlease enter the length : ";
    cin>>l;
    cout<<"\nPlease enter the breadth : ";
    cin>>b;
    cout<<"\nPlease enter the height : ";
    cin>>h;
    cout<<"Volume of cuboid = "<<obj.volume(l,b,h);
    cout<<"\n\nTo find area of rectangle : ";
    cout<<"\nPlease enter the length : ";
    cin>>l;
    cout<<"\nPlease enter the breadth : ";
    cin>>b;
    cout<<"Area of rectangle = "<<obj.area(l,b);
    


}