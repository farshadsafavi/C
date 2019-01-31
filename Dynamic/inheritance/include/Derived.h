#ifndef DERIVED_H
#define DERIVED_H

#include <Base.h>


class Derived : public Base
{
    private:
        int y;
    public:
        Derived();
        Derived(int x, int y);
        void show();
        virtual ~Derived();

};

#endif // DERIVED_H
