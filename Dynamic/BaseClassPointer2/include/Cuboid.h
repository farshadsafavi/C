#ifndef CUBOID_H
#define CUBOID_H
#include<Rectangle.h>

class Cuboid: public Rectangle
{
    public:
        Cuboid();
        void volume();
        virtual ~Cuboid();

    protected:

    private:
};

#endif // CUBOID_H
