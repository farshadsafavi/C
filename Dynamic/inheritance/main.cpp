#include <iostream>
#include<Derived.h>
#include<Base.h>
using namespace std;

int main()
{
    cout << "Inheritance:" << endl;
    Derived d(5, 10);
    d.display();
    d.setX(15);
    d.display();
    d.show();
    return 0;
}
