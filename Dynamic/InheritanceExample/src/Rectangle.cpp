#include "Rectangle.h"

Rectangle::Rectangle()
{
    this->length = 1;
    this->breadth = 1;
}

Rectangle::~Rectangle()
{
    //dtor
}

Rectangle::Rectangle(int l, int b){
    this->length = l;
    this->breadth = b;
}

Rectangle::Rectangle(Rectangle &r){
    this->length = r.length;
    this->breadth = r.breadth;
}

void Rectangle::setLength(int l){
    this->length = l;
}

void Rectangle::setBreadth(int b){
    this->breadth = b;
}

int Rectangle::area(){
    return this->breadth*this->length;
}

int Rectangle::perimeter(){
    return 2*(this->breadth + this->length);
}

bool Rectangle::isSquare(){
    return this->breadth == this->length;
}
