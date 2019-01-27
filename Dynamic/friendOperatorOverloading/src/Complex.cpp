#include "Complex.h"
#include <iostream>
Complex::Complex()
{
    this->real = 0;
    this->img = 0;
}

Complex::Complex(int real, int img){
    this->real = real;
    this->img = img;
}

Complex::~Complex()
{

}

void Complex::display(){
    std::cout << real << " + i" << img << std::endl;
}

Complex operator+(Complex c1, Complex c2){
    Complex temp = Complex(c1.real + c2.real, c1.img + c2.img);
    return temp;
}
