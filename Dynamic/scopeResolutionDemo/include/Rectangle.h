#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        // Constructors
        Rectangle();
        Rectangle(int , int);
        Rectangle(Rectangle &r);
        // accessors
        int getLength(){return length;}
        int getBreadth(){return breadth;}
        // Mutators
        void setLength(int);
        void setBreadth(int);
        // Facilitators
        int area();
        int perimeter();
        // Enquirer
        bool isSquare();
        // Destructor
        ~Rectangle();

};

#endif // RECTANGLE_H
