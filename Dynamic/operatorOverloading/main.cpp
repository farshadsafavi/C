#include <iostream>
#include <Complex.h>
using namespace std;

int main()
{
    cout << "Operator overloading:" << endl;
    Complex c1(5, 3);
    Complex c2(10, 5);
    Complex c3 = c1 + c2;
    c3.display();
    cout << "The length of the vector is: " << c3.vector_length()<< endl;
    Complex c4 = c2 + c1;
    c4.display();
    cout << "The length of the vector is: " << c4.vector_length()<< endl;
    return 0;
}
