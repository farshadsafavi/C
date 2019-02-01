#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle();
        Rectangle(int l, int b);
        Rectangle(Rectangle &r);
        int getLength(){return length;}
        int getBreadth(){return breadth;}
        void setLength(int l);
        void setBreadth(int b);
        int area();
        int perimeter();
        bool isSquare();
        ~Rectangle();
};

#endif // RECTANGLE_H
