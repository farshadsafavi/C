#ifndef CUBOID_H
#define CUBOID_H

#include <Rectangle.h>


class Cuboid : public Rectangle
{
    private:
        int h;
    public:
        Cuboid();
        Cuboid(int x, int y,int h);
        void display();
        void volume();
        virtual ~Cuboid();
};

#endif // CUBOID_H
