#include <iostream>
#include <String.h>
using namespace std;

class Student{
    int rollno,age;
    char name[20];

    public:
    Student(){
        cout<<"Default Constructor";
    }
    Student(int rn,char Sname[20],int Sage){
        rollno = rn;
        age = Sage;
        strcpy(name,Sname);
    }

    void displayinfo(){
        cout<<"\nRoll no. : "<< rollno;
        cout<<"\nName : "<<name;
        cout<<"\nAge : "<<age;  
    }

};



int main(){
    Student *ptr = new Student[3]{{1,"John",18},{2,"Jacob",17},{3,"James",18}};
    ptr->displayinfo();
    cout<<"\n";
    (ptr+1)->displayinfo();
    cout<<"\n";
    (ptr+2)->displayinfo();
    return 0;


}