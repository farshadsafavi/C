#include "Cuboid.h"
#include<iostream>

Cuboid::Cuboid(){
    this->x = 0;
    this->y = 0;
    this->h = 0;
}

Cuboid::Cuboid(int x, int y, int h):Rectangle(x, y)
{
    this->h = h;
}

Cuboid::~Cuboid()
{
    //dtor
}

void Cuboid::display(){
    std::cout<<"Rectangle with: " << this->x << " width " << this->y <<" breadth " <<
    this->h <<" height " <<std::endl;
}



void Cuboid::volume(){
    std::cout<<"volume: " << this->x * this->y * this->h<< std::endl;
}
