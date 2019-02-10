#include <iostream>
#include<Test.h>
#include<your.h>
using namespace std;

void fun(){
    Test t;
    t.a = 10;
    t.b = 15;
    t.c = 9;
    t.display();
}

int main()
{
    cout << "Friend Class and Function:" << endl;
    fun();
    // Class Friend
    your y;
    y.fun();
    return 0;
}
