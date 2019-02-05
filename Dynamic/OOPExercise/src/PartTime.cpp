#include "PartTime.h"

PartTime::PartTime(int id, std::string name, int dailyWage):Employee(id, name)
{
    this->dailyWage = dailyWage;
}
