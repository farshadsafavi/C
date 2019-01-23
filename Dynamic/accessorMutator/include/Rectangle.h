#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        int getLenegth();
        void setLength(int l);
        int getBreadth();
        void setBreadth(int b);
        int area();
        int primeter();
        Rectangle();
        virtual ~Rectangle();

};

#endif // RECTANGLE_H
