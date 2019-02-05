#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
class Employee
{
    private:
        std::string name;
        int id;
    public:
        Employee(int id, std::string name);
        int getId(){return id;}
        void setId(int id){id = id;}
        std::string getName(){return this->name;}
        void setName(std::string name){name = name;}
        ~Employee();

    protected:
};

#endif // EMPLOYEE_H
