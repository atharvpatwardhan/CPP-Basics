#include<iostream>
using namespace std;

class Person
{
    char name[20];
public:
    virtual void getdata()
    {
        cout<<"Name:\n";
        cin>>name;
    }
    virtual string findoutstanding()=0;
};
class Student:public Person
{
    float CGPA;
public:
    void getdata()
    {
        Person::getdata();
        cout<<"CGPA(scale 0 to 10):\n";
        cin >> CGPA;
    }
    string findoutstanding()
    {
        if(CGPA>=7.5)
            return "outstanding";
        else return "NOT OUTSTANDING";
    }
};
class Professor: public Person
{
    float appraisal_score;
public:
    void getdata()
    {
        Person::getdata();
        cout<<"Appraisal score(scale 0 to 100):\n";
        cin>>appraisal_score;
    }
    string findoutstanding()
    {
        if(appraisal_score>=75)
            return "OUTSTANDING";
        else return "NOT OUTSTANDING";
    }
};
int main()
{
    Person *obj;
    Student st;
    Professor pf;
    cout<<"Enter Student Details:\n";
    obj = &st;
    obj->getdata();
    cout<<"status:"<<obj->findoutstanding();
    cout<<"\nEnter Professor Details:\n";
    obj = &pf;
    obj->getdata();
    cout<<"status:"<<obj->findoutstanding();
    return 0;
}