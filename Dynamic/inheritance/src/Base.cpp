#include "Base.h"
#include <iostream>

using namespace std;

Base::Base()
{
    this->x = 0;
}

Base::Base(int x = 0)
{
    this->x = x;
}

Base::~Base()
{
    //dtor
}

void Base::display(){
    cout << "Display of base member:" << this->x << endl;
}

void Base::setX(int x){
    this->x = x;
}

int Base::getX(){
    return this->x;
}
