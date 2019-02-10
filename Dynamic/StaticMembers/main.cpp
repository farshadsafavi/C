#include <iostream>
#include<Test.h>
using namespace std;

int main()
{
    cout << "Static Members:" << endl;
    Test t1;
    cout << t1.counter << endl;
    Test t2;
    cout << t2.counter << endl;
    Test t3, t4;
    cout << t3.counter << endl;
    cout << t4.counter << endl;

    t1.counter = 25;
    cout << t1.counter << endl;
    cout << t2.counter << endl;
    cout << t3.counter << endl;
    cout << t4.counter << endl;

    cout << t1.getCount() << endl;
    cout << t2.getCount() << endl;
    cout << t3.getCount() << endl;
    cout << t4.getCount() << endl;
    return 0;
}
