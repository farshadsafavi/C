#ifndef BASE_H
#define BASE_H


class Base
{
    private:
        int x;
    public:
        Base();
        Base(int x);
        void display();
        void setX(int x);
        int getX();
        virtual ~Base();

};

#endif // BASE_H
