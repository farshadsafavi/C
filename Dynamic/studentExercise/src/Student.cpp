#include "Student.h"
Student::Student()
{
    this->roll = 0;
    this->name = "";
    this->mathMark = 0;
    this->phyMark = 0;
    this->chemMark = 0;
}

Student::Student(int roll, string name, int mathMark, int phyMark, int chemMark)
{
    this->roll = roll;
    this->name = name;
    this->mathMark = mathMark;
    this->phyMark = phyMark;
    this->chemMark = chemMark;
}

Student::~Student()
{
    cout << "Student object is Destroyed!" << endl;
}

int Student::total(){
     return mathMark + phyMark + chemMark;
 }

char Student::grade(){
    float average = total()/3;
    if(average >= 60){
        return 'A';
    } else if(average >= 40){
        return 'B';
    } else{
        return 'C';
    }
}


