#include <iostream>
using namespace std;

class Circle1{
    int radius;
    public:
    void setRadius(){
        cout<<"Enter the Radius : ";
        cin>>radius;
    }
    int getRadius(){
        return radius;
    }
};

class Circle2 : public Circle1 {
    public:
    void findarea(){
        int r = getRadius();
        cout<<"\nRadius : "<<r;
        float area = 3.1417 * r * r;
        cout<<"\nArea : "<<area;
    }
};

int main(){
    Circle2 obj;
    obj.setRadius();
    obj.findarea();
    return 0;
}
