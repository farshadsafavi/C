#ifndef OUTER_H
#define OUTER_H
#include<iostream>

class Outer
{

    public:
        Outer();
        virtual ~Outer();
        void fun();
        class Inner{
        public:
            void display(){
                std::cout << "Display Inner Class!" << std::endl;
            }

        };
    private:
        Inner i;


    protected:
};

#endif // OUTER_H
