#include <iostream>
using namespace std;

class Circle1 {
int radius;
public:
void setRadius() {
cout << "Enter Radius: ";
cin >> radius;
}
int getRadius() { return radius;}
};
class Circle2 : private Circle1 {
public:
void findarea() {
setRadius();
int r = getRadius();
cout << "\n\tRadius: " << r;
float area = 3.141 * r * r;
cout << "\n\tArea: " << area;
}
};


int main()
{
Circle2 obj;
obj.findarea();
return 0;
}

