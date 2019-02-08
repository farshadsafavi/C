#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <Base.h>


class Rectangle : public Base
{
    protected:
        int x;
        int y;
    public:
        Rectangle();
        Rectangle(int x, int y);
        virtual void display();
        void area();
        void perimeter();
        virtual void volume();
        virtual ~Rectangle();

};

#endif // RECTANGLE_H
