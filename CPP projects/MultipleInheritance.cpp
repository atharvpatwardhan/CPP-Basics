#include <iostream>
#include <string.h>
using namespace std;

class employee
{
int emp_id;
char emp_name[10];
public:
employee(int id,char *name)
{
emp_id=id;
strcpy(emp_name,name);
}
void dispemployee()
{
cout<<"\nemp_id:"<<emp_id;
cout<<"\nemp_name:"<<emp_name;
}
};
class emp_union
{
char member_id[10];
public:
emp_union(char *mid){
    strcpy(member_id,mid);
}
void dispunion(){
    cout<<"\n\tmember_id:"<<member_id;
    }
};
class emp_info:public employee,public emp_union
{
int basic_salary;
public:
emp_info(int id,char *name,char *mid,int salary):employee(id,name),emp_union(mid){
    basic_salary=salary;
    }
void display()
{
dispemployee();
dispunion();
cout<<"\n\tbasic_salary:"<<basic_salary;
}
};
int main()
{
emp_info obj[2]={{101,"xyz","mumbai",2000},{102,"abc","pune",2500}};
cout<<"\nemployee - 1";
obj[0].display();
cout<<"\nemployee - 2";
obj[1].display();
return 0;
}
