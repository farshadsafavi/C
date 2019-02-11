#include <iostream>
#include<Student.h>
using namespace std;

int main()
{
    cout << "Static Members:" << endl;
    Student s1("John");
    Student s2("Ravi");
    Student s3("Khan");
    Student s4("Khan");
    Student s5("Khan");
    Student s6("Khan");


    s1.display();
    s6.display();
    cout<<"Number Admission "<<Student::getRoll()<<endl;
    return 0;
}
