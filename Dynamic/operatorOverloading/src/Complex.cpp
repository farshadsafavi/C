#include<iostream>
#include "Complex.h"
#include <math.h>
using namespace std;

Complex::Complex()
{
    this->real = 0;
    this->img = 0;
}

Complex::~Complex()
{
    cout << "The object is destroyed!" << endl;
}

Complex::Complex(int real, int img){
    this->real = real;
    this->img = img;
}

Complex Complex::operator+(Complex c){
    Complex sum;
    sum.real = this->real + c.real;
    sum.img = this->img + c.img;
    return sum;
}

void Complex::display(){
    cout << this->real << " + i"<<this->img << endl;
}

int Complex::vector_length(){
    return sqrt(this->real*this->real + this->img*this->img);
}
