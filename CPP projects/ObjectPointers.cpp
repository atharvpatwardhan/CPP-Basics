#include <iostream>
#include <string.h>

using namespace std;

class Employee{
    int empid;
    char empname[20];
public:
    Employee(){}
    Employee(int id,char name[]){
        empid = id;
        strcpy(empname,name);
    }
    void display(){
        cout<<"\nEmployee ID = "<<empid;
        cout<<"\nEmployee Name = "<<empname;
    }


}

int main(){
    Employee *Obj = new Employee(101,'Mumbai');
    Obj -> display();
    delete Obj;
    return 0;
}