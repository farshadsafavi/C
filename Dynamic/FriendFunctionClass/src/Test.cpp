#include "Test.h"
#include <iostream>
Test::Test()
{
    //ctor
}

Test::~Test()
{
    //dtor
}

void Test::display(){
    std::cout<< "a is "<<this->a << " b is "<<this->b << " c is " << this->c << std::endl;
}
