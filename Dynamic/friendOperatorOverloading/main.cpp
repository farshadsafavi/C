#include <iostream>
#include<Complex.h>
using namespace std;

int main()
{
    cout << "Friend method:" << endl;
    Complex c1(5, 3), c2(10, 5), c3;
    c3 = c1 + c2;
    // same as below code
    c3 = operator+(c1, c2);
    c3.display();
    return 0;
}
