#include "FullTime.h"


FullTime::~FullTime()
{
    //dtor
}

FullTime::FullTime(int id, std::string name, int salary):Employee(id, name){
    this->salary = salary;
}
