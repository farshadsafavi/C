#include <iostream>
#include<Derived.h>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Derived d;
    d.display();
    d.Base::display();

    Base b;
    b.display();

    Base *ptr;
    ptr = new Derived();
    ptr->display();
    return 0;
}
