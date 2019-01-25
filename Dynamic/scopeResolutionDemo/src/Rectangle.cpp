#include <iostream>
#include "Rectangle.h"
using namespace std;
Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int length, int breadth){
    this->length = length;
    this->breadth = breadth;
}

Rectangle::Rectangle(Rectangle &r){
    this->length = r.length;
    this->breadth = r.breadth;
}

Rectangle::~Rectangle()
{
    cout << "Rectangle Destroyed" << endl;
}

// Mutators
void Rectangle::setLength(int l){
    length = l;
}

void Rectangle::setBreadth(int b){
    breadth = b;
}
        // Facilitators
int Rectangle::area(){
    return length*breadth;
}

int Rectangle::perimeter(){
    return 2*(length + breadth);
}

// Enquirer
bool Rectangle::isSquare(){
    return length == breadth;
}
