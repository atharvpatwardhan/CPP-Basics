#include <iostream>
using namespace std;

class car{
    private:
    char make[20];
    int cost;
    public:
    void getdata();
    void display();
};

void car::getdata()
{
    cout<<"Please enter the make : ";
    cin>>make;
    cout<<"\nPlease enter the cost : ";
    cin>>cost;
}

void car::display()
{
    cout<<"Make = "<<make<<"\nCost = "<<cost;
}

int main()
{
    car c1;
    c1.getdata();
    c1.display();
}