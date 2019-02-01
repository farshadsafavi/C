#ifndef CUBOID_H
#define CUBOID_H

#include <Rectangle.h>


class Cuboid : public Rectangle
{
    private:
        int height;
    public:
        Cuboid(int h);
        int getHeight(){return height;}
        void setHeight(int h){height = h;}
        int volume(){return getLength()*getBreadth()*height;}
        ~Cuboid();

};

#endif // CUBOID_H
