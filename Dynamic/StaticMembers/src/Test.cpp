#include "Test.h"
int Test::counter = 0;
Test::Test()
{
    a = 10;
    this->counter++;
}

Test::~Test()
{
    //dtor
}

int Test::getCount(){
    return counter;
}
