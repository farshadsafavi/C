#include <iostream>
#include<Rational.h>

using namespace std;

int main()
{
    cout << "Rational number:" << endl;
    Rational r1(3,4),r2(2,5),r3;

    r3=r1 + r2;
    cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;
    return 0;
}
