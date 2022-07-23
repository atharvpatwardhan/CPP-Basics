#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class Demo
{
    int num;
    void readNO ()
    {
        cout<<"\nEnter a positive integer : ";
        cin>>num;
    }
public:
    void factorial ();
    int reverseNO ();
    bool isPalindrome ();
    bool isArmstrong ();
};
void Demo::factorial()
{
    readNO ();
    long f=1;
    for(int i =2; i<= num; i++)
        f *= i;
    cout<<num<<" != "<<f;
}
int Demo::reverseNO()
{
    readNO();
    int d, rev=0, n=num;
    do{
        d=n%10;
        rev = rev*10 + d;
        n=n/10;

    }while (n>0);
    return rev;
}
bool Demo::isPalindrome()
{
    int r=reverseNO();
    if (num==r) return true;
    else return false;

}
bool Demo::isArmstrong()
{
   readNO();
   int tot=0, n=num, len=0;

   for (; n!=0; n/=10, len++);

   n=num;
   do{
    tot+=(n%10, len);
   } while (n/=10);
   if(num==tot) return true;
   else return false;
}
int main()
{
    Demo obj;
    cout<<"\n\nTo find factorial";
    obj.factorial();

    cout<<"\n\nTo find the reverse of a number ";
    int r=obj.reverseNO();
    cout<<"Reverse : "<<r;

    cout<<"\n\nTo find a number is Palindrome or not";
    if(obj.isPalindrome())
        cout<<"It is a Palindrome ";
    else
        cout<<"It is Not a Palindrome";

    cout<<"\n\nTo find a number is Armstrong or not ";
    if(obj.isArmstrong ())
        cout<<"It is a Armstrong number ";
    else
        cout<<"It is not a Armstrong number ";

    return 0;
}
