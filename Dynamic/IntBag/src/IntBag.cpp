#include<iostream>
#include "IntBag.h"
using namespace std;
static const int DEFAULT_CAPACITY = 10;
IntBag::IntBag()
{
    data = new int[DEFAULT_CAPACITY];
    capacity = DEFAULT_CAPACITY;
    cnt = 0;
    walkInProgress = false;
    walkPosition = 0;
}

IntBag::IntBag(int capacity)
{
    data = new int[capacity];
    capacity = capacity;
    cnt = 0;
    walkInProgress = false;
    walkPosition = 0;
}

bool IntBag::add(int value){
    data[cnt] = value;
    cnt++;
    walkInProgress = false;
    return true;
}

void IntBag::print(){
    for(int i = 0; i < cnt; i++){
        cout << data[i] <<endl;
    }
}

IntBag::~IntBag()
{
    delete []data;
}
