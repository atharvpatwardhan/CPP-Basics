#include<iostream>
using namespace std;
class shape
{
public:
    float area;
    virtual void findarea()=0;
    virtual void displaydetails()=0;
};
class rectangle:public shape
{
    float length,breadth;
public:
    rectangle(float l,float b)
    {
    length=l;
    breadth=b;
    }
    void findarea()
    {
    area=length*breadth;
    }
    void displaydetails()
    {
    cout<<"\n\tLENGTH:"<<length;
    cout<<"\n\tBREADTH:"<<breadth;
    cout<<"\n\tAREA:"<<area;
    }
};
class circle:public shape
{
    float r;
public:
    circle(float r)
    {
    this->r=r;
    }
    void findarea()
    {
    area=3.14*r*r;
    }
    void displaydetails()
    {
    cout<<"\n\tRADIUS :"<<r;
    cout<<"\n\tAREA :"<<area;
    }
};
int main()
{
    shape *obj;
    rectangle r1(5.3,4.5);
    obj=&r1;
    cout<<"\nRECTANGLE:";
    obj->findarea();
    obj->displaydetails();
    
    circle c1(2.5);
    obj=&c1;
    cout<<"\nCIRCLE:";
    obj->findarea();
    obj->displaydetails();
    
    return 0;
}
