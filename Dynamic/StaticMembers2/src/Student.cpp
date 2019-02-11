#include "Student.h"
#include<iostream>
int Student::roll = 0;

Student::Student(std::string name)
{
    roll++;
    this->addNum = roll;
    this->name = name;
}

Student::~Student()
{
    //dtor
}

int Student::getRoll(){
    return roll;
}

void Student::display(){
    std::cout <<"name: " << this->name << "admission number: " <<this->addNum << std::endl;
}




