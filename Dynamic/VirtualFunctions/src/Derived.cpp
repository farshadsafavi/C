#include "Derived.h"
#include<iostream>
Derived::Derived()
{
    //ctor
}

Derived::~Derived()
{
    //dtor
}

void Derived:: fun(){
    std::cout <<"It is a Derived class!" << std::endl;
}

