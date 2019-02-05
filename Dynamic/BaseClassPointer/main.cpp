#include <iostream>
#include<Derived.h>
using namespace std;

int main()
{
    cout << "Demo Base class pointer derived class object:" << endl;
    Derived d;
    Base *p = &d;
    d.fun1();
    d.fun2();
    p->fun1();
    // Following code is not possible
    //p->fun2();
    Base *b;
    b = new Derived();
    b->fun1();

    Derived *s;
    s = new Derived();
    s->fun1();
    s->fun2();
    return 0;
}
