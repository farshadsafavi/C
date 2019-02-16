#ifndef STACK_H
#define STACK_H


class Stack
{
    private:
        int *stk;
        int sz;
        int top = -1;
    public:
        Stack(int);
        void push(int);
        int pop();
        virtual ~Stack();

    protected:


};

#endif // STACK_H
