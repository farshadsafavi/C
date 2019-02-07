#include <iostream>
#include<Derived.h>
using namespace std;

int main()
{
    cout << "Practice Virtual Function:" << endl;
    Base *b = new Derived();
    b->fun();
    return 0;
}
