#include <iostream>
#include<fullTime.h>
#include<PartTime.h>


int main()
{
    std::cout << "OOP Exercise:" << std::endl;
    PartTime p1(1,"John",300);
    FullTime p2(2,"Raj",5000);
    std::cout<<"Salary of "<< p2.getName() <<" is: "<<p2.getSalary()<<std::endl;
    std::cout<<"Daily wage of "<<p1.getName()<<" is: "<<p1.getDailyWage()<<std::endl;
    return 0;
}
