#ifndef DERIVED_H
#define DERIVED_H

#include <Base.h>


class Derived : public Base
{
    private:
    public:
        Derived();
        Derived(int y);
        Derived(int x,int y);
        ~Derived();


};

#endif // DERIVED_H
