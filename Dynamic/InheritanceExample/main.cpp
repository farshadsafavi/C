#include <iostream>
#include <Rectangle.h>
#include "Cuboid.h"
using namespace std;

int main()
{
    cout << "Inheritance Example:" << endl;
    Rectangle r(10, 5);
    cout << r.area()<< " " << r.perimeter() << endl;
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);
    cout << "Volums is: " << c.volume() << endl;
    return 0;
}
