#include "Circle.h"
#include<iostream>

Circle::Circle(){
    this->r = 0;
}

Circle::Circle(int r)
{
    this->r = r;
}

Circle::~Circle()
{
    //dtor
}

void Circle::display(){
    std::cout<<"Circle with radius: " << this->r << std::endl;
}

void Circle::area(){
    std::cout<<"The area: " << 3.14*(this->r *this->r)<< std::endl;
}

void Circle::perimeter(){
    std::cout<<"Perimeter: " << 3.14*(2 *this->r)<< std::endl;
}
