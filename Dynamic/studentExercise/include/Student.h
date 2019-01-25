#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
    private:
        int roll;
        string name;
        int mathMark;
        int phyMark;
        int chemMark;
    public:
        Student();
        Student(int , string, int, int, int);
        string getName(){ return name;}
        int total();
        char grade();
        ~Student();
};

#endif // STUDENT_H
