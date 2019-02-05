#include <iostream>
#include<Cuboid.h>
using namespace std;

int main()
{
    cout << "Demo Base class pointer and derived class object:" << endl;
    Cuboid c;
    c.area();
    c.volume();

    Rectangle *p = &c;
    p->area();
    // We can't call volume since p is pointing to the Rectangle
    // p->volume()
    return 0;
}
