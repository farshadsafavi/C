#include "Stack.h"
#include <stackoverflow.h>
#include<stackunderflow.h>
Stack::Stack(int sz)
{
    this->sz = sz;
    this->stk = new int[sz];
}

void Stack::push(int value){
    if(top == this->sz - 1){
        throw stackoverflow();
    }
    top++;
    stk[top] = value;
}

int Stack::pop(){
    if(top == -1){
        throw stackunderflow();
    }
    return stk[top--];
}

Stack::~Stack()
{
    delete this->stk;
}
