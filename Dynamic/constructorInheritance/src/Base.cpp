#include "Base.h"
#include<iostream>
using namespace std;
Base::Base()
{
    cout <<"None-param Base" << endl;
}

Base::Base(int x)
{
    cout <<"Param of Base " << x <<endl;
}

Base::~Base()
{
    //dtor
}
