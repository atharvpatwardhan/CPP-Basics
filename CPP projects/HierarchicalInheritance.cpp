#include <iostream>
using namespace std;

class Number {
int n;
protected:
int getN(){
    return n;
    }
public:
Number()
{
cout << "\nEnter a number: ";
cin >> n;
}
};
class Square : public Number {
public:
void findSquare(){
int n = getN();
cout << "\t" << n << "^2 = " << n * n;
}
};
class Cube : public Number {
public:
void findCube(){
int n = getN();
cout << "\t" << n << "^3 = " << n * n * n;
}
};


int main() {
Square s1;
s1.findSquare();
Cube c1;
c1.findCube();
return 0;
}
