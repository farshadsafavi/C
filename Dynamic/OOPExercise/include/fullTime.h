#ifndef FULLTIME_H
#define FULLTIME_H
#include<iostream>
#include <Employee.h>


class FullTime : public Employee
{
    private:
        int salary;
    public:
        FullTime(int id, std::string name, int salary);
        int getSalary(){return salary;}
        ~FullTime();



};

#endif // FULLTIME_H
