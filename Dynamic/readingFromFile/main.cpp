#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "Reading from a file:" << endl;
    // The first method
    ifstream ifs;
    ifs.open("Mys.txt");
    if(!ifs.is_open())
        cout << "File can not be open!" << endl;

    if(!ifs)
        cout << "File can not be open!" << endl;

    // The second method
    ifstream ifs2("My.txt");
    if(!ifs2.is_open())
        cout << "File can not be open!" << endl;

    if(!ifs2)
        cout << "File can not be open!" << endl;
    string name;
    int roll;
    string branch;

    ifs2 >> name >> roll >> branch ;

    if(!ifs2.eof())
        cout << "All data has been read!" << endl;
    cout << "Name: " << name << " Roll number: " << roll << " Branch: " << branch << endl;


    return 0;
}
