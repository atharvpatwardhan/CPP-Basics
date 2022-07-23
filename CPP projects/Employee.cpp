#include <iostream>
using namespace std;

class Employee{
    int empid;
    char empname[20];
    void getinfo(){
        cout<<"Employee ID :";
        cin>>empid;
        cout<<"Employee name : ";
        cin>>empname;
    }

    public:
    Employee(){
        getinfo();
    }
    void displayInfo(){
        cout<<"\n"<<empid<<"\t"<<empname;
    }
};


int main(){
    cout<<"Enter details of first employee : \n";
    Employee e1;
    cout<<"\nEnter details of second employee : \n";
    Employee e2;
    cout<<"\nID\tName";
    e1.displayInfo();
    e2.displayInfo();
    return 0;
}