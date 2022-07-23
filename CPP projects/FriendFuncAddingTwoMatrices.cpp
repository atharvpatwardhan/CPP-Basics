#include <iostream>
using namespace std;
class Matrix2;

class Matrix1
{
    int a[3] [2];
public:
    Matrix1() {  }
    Matrix1(int tmp [3] [2]){
        for (int i=0; i<3; i++){
           for (int j=0; j<2; j++)
                a[i] [j] = tmp [i] [j];
        }
    }
    void display() {
        for (int i=0; i<3; i++) {
            for (int j=0; j<2; j++)
                cout<<a[i] [j]<<" ";
            cout<<endl;
        }
    }
    friend Matrix1 add( Matrix1, Matrix2);
};
class Matrix2
{
    int b[3] [2];
public:
    Matrix2() {  }
    Matrix2(int tmp [3] [2]){
        for (int i=0; i<3; i++){
           for (int j=0; j<2; j++)
                b[i] [j] = tmp [i] [j];
        }
    }
    void display() {
        for (int i=0; i<3; i++) {
            for (int j=0; j<2; j++)
                cout<<b[i] [j]<<" ";
            cout<<endl;
        }
    }
    friend Matrix1 add( Matrix1, Matrix2);
};
Matrix1 add(Matrix1 m1, Matrix2 m2)
{
    Matrix1 tmp;
    for (int i=0; i<3; i++)
        for (int j=0; j<2; j++)
        tmp.a[i] [j] = m1.a[i] [j] + m2.b[i][j];
    return tmp;

}
int main ()
{
    int vall [3] [2] = {{1,2}, {3,4}, {5,6} };
    Matrix1 m1 (vall);

    int val2 [3][2] = {{1,0}, {0,1}, {1,1} };
    Matrix2 m2 (val2);
    Matrix1 result = add(m1, m2);

    cout<<"\nm1 = \n";
    m1.display();
    cout<<"\nm2 = \n";
    m2.display ();
    cout<<"\nm1 + m2 = \n";
    result.display();
    return 0;
}