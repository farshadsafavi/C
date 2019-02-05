#ifndef CHILD_H
#define CHILD_H

#include <Parent.h>


class Child : protected Parent
{
    public:
        Child();
        void funChild();
};

#endif // CHILD_H
