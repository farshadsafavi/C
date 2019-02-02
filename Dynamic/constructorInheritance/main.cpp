#include <iostream>
#include <Derived.h>
using namespace std;

int main()
{
    cout << "Constructor inheritance:" << endl;
    Derived d;
    cout <<"------------------" <<endl;
    Derived c(10);
    cout <<"------------------" <<endl;
    Derived b(10, 20);

    return 0;
}
