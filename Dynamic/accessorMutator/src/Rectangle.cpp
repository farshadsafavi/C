#include <iostream>
#include <Rectangle.h>
using namespace std;

Rectangle::Rectangle()
{
    //ctor
}

Rectangle::~Rectangle()
{
    //dtor
}

int Rectangle::getLenegth(){
    return length;
}

void Rectangle::setLength(int l){
    this->length = 0;
    if(l > 0)
        length = l;
    else
        cout <<"Please enter positive number!" << endl;

}

int Rectangle::getBreadth(){
    return breadth;
}

void Rectangle::setBreadth(int b){
    breadth = 0;
    if(b > 0)
        breadth = b;
    else
        cout <<"Please enter positive number!" << endl;
}

int Rectangle::area(){
    return this->breadth*this->length;
}


int Rectangle::primeter(){
    return 2 * (breadth + length);
}


