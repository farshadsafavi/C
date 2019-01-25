#include <iostream>
#include <Student.h>
using namespace std;

int main()
{
    cout << "Student Exercise:" << endl;
    Student s[5];
    for (int i = 0; i < 5; i++){
        int roll;
        string name;
        int m,p,c;
        cout<<"Enter Roll number of a Student: ";
        cin>>roll;
        cout<<"Enter Name of a Student:";
        cin>>name;
        cout<<"Enter marks in 3 subjects";
        cin>>m>>p>>c;
        Student s1(roll,name,m,p,c);
        s[i] = s1;
        cout<<"Total Marks:"<<s1.total()<<endl;
        cout<<"Grade of Student:"<<s1.grade()<<endl;
    }
    int maximum = 0;
    string name = "";
    for(int i = 0; i < 5; i++){
        if(s[i].total() > maximum){
            maximum = s[i].total();
            name= s[i].getName();
        }
    }
    cout << name << "  " << maximum<< endl;
}
