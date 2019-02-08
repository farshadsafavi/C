#ifndef CIRCLE_H
#define CIRCLE_H

#include <Base.h>


class Circle : public Base
{
    private:
        int r;
    public:
        Circle();
        Circle(int r);
        void area();
        void perimeter();
        void display();
        virtual ~Circle();

    protected:

};

#endif // CIRCLE_H
