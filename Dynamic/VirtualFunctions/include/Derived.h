#ifndef DERIVED_H
#define DERIVED_H

#include <Base.h>


class Derived : public Base
{
    public:
        Derived();
        void fun();
        virtual ~Derived();

    protected:

    private:
};

#endif // DERIVED_H
