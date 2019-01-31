#include "Derived.h"
#include<iostream>
using namespace std;
Derived::Derived()
{
    this->y = 0;
}

Derived::Derived(int x, int y)
{
    this->setX(x);
    this->y = y;
}


Derived::~Derived()
{
    //dtor
}

void Derived::show(){
    this->display();
    cout << "Display of Derived member:" << this->y << endl;
}
