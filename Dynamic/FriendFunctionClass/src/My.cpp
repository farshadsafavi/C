#include "My.h"
#include<iostream>
My::My()
{
    //ctor
}

My::~My()
{
    //dtor
}

void My::display(){
    std::cout<< "a is "<<this->a << " b is "<<this->b << " c is " << this->c << std::endl;
}
