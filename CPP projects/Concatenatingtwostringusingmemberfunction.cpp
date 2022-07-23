#include <iostream>
#include <string.h>
using namespace std;

class String {
    char *str;
    public:
        String() {

        }
        String(char *s){
            int len=strlen(s);
            str=new char[len+1];
            strcpy(str, s);
        }
        void show(){
            cout << str;
        }
        String operator +(String s){
            String tmp;
            int len=strlen(str) + strlen(s.str);

            tmp.str=new char[len+1];
            strcpy(tmp.str, str);
            strcat(tmp.str, s.str);
            return tmp;
        }
};

int main()
{
    String s1("I Love "), s2("India"), s3;
    s3=s1+s2;

    cout << "\ns1: ";
    s1.show();
    cout << "\ns2: ";
    s2.show();
    cout << "\ns1+ s2: ";
    s3.show();
    return 0;
}