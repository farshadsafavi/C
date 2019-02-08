#include "Rectangle.h"
#include<iostream>
Rectangle::Rectangle(){
    this->x = 0;
    this->y = 0;
}

Rectangle::Rectangle(int x, int y)
{
    this->x = x;
    this->y = y;
}

Rectangle::~Rectangle()
{
    //dtor
}


void Rectangle::display(){
    std::cout<<"Rectangle with: " << this->x << " width " << this->y <<" breadth " <<std::endl;
}

void Rectangle::area(){
    std::cout<<"The area: " << (this->x *this->y)<< std::endl;
}

void Rectangle::perimeter(){
    std::cout<<"Perimeter: " << 2 * (this->x+this->y)<< std::endl;
}

void Rectangle::volume(){
    std::cout<<"No volume!"<< std::endl;
}
