#include "Derived.h"
#include<iostream>
using namespace std;
Derived::Derived()
{
    cout <<"None-param Derived" << endl;
}

Derived::Derived(int y)
{
    cout <<"Param of Derived " << y << endl;
}

Derived::Derived(int x, int y):Base(x)
{
    cout <<"Param of Derived " << y << endl;
}

Derived::~Derived()
{
    //dtor
}
