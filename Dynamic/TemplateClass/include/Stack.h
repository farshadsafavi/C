#ifndef STACK_H
#define STACK_H
#include<iostream>
template<class T>
class Stack{
    private:
         T *stk;
         int top;
         int size;
    public:
         Stack(int sz);
         void push(T x);
         T pop();
};
#endif // STACK_H

#include "implementation.h"

