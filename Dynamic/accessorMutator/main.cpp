#include <iostream>
#include <Rectangle.h>
using namespace std;

int main()
{
    cout << "Encapsulation of variables in Rectangle object:" << endl;
    Rectangle r1;
    r1.setBreadth(5);
    r1.setLength(10);
    cout << r1.area() << endl;
    cout << r1.primeter() << endl;
    return 0;
}
