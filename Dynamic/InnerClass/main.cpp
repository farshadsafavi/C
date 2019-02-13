#include <iostream>
#include<Outer.h>
using namespace std;

int main()
{
    cout << "Inner class demo:" << endl;
    Outer::Inner i;
    i.display();

    Outer o;
    o.fun();

    return 0;
}
