#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student
{
    private:
        std::string name;
        int addNum;
        static int roll;
    public:
        Student(std::string name);
        void display();
        static int getRoll();
        virtual ~Student();

    protected:


};

#endif // STUDENT_H
