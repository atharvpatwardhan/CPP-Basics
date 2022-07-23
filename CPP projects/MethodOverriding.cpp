#include<iostream>
using namespace std;

class Employee
{
    int empcode,age;
    string name;
public:
    void get()
    {
        cout<<"EMPCODE:\n";
        cin>>empcode;
        cout<<"NAME:\n";
        cin>>name;
        cout<<"AGE:\n";
        cin>>age;
    }
    void show()
    {
        cout<<"\t"<<empcode;
        cout<<"\t"<<name;
        cout<<"\t"<<age<<"\n";
    }
};
class ContractEmployee:public Employee
{
    int contract_id;
public:
    void get()
    {
        Employee::get();
        cout<<"enter contact id:";
        cin>>contract_id;
    }
};
int main()
{
    ContractEmployee obj;
    cout<<"Enter Employee Details:\n";
    obj.get();
    cout<<"\nEmployee Details:\n";
    obj.show();
    return 0;
    
}