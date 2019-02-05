#ifndef PARTTIME_H
#define PARTTIME_H
#include<iostream>
#include <Employee.h>


class PartTime : public Employee
{
    private:
        int dailyWage;
    public:
        PartTime(int id, std::string name, int dailyWage);
        int getDailyWage(){return dailyWage;}


};

#endif // PARTTIME_H
