#include "your.h"

your::your()
{
    //ctor
}

your::~your()
{
    //dtor
}

void your::fun(){
    this->m.a = 10;
    this->m.b = 20;
    this->m.c = 30;
    this->m.display();
}
