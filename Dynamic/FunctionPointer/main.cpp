#include <iostream>

using namespace std;

void display(){
    cout <<"Hello" << endl;
}

int maximum(int x , int y){
    return (x > y) ? x : y;
}

int minimum(int x, int y){
    return (x > y) ? y : x;
}

int main()
{
    display();
    // Pointer to a function
    void (*fp)(); // Declaration of a pointer
    fp = display; // Initialization of a pointer
    (*fp)();      // function call

    int(*fp1)(int, int); // Declaration of a pointer
    fp1 = maximum;        // Initialization of a pointer
    (*fp1)(2, 5);         // maximum is called
    cout << (*fp1)(2, 5) << endl;

    int(*fp2)(int, int); // Declaration of a pointer
    fp2 = minimum;        // Initialization of a pointer
    (*fp2)(2, 5);         // minimum is called
    cout << (*fp2)(2, 5) << endl;

    fp2 = maximum;        // Initialization of a pointer
    (*fp2)(2, 5);         // minimum is called
    cout << (*fp2)(2, 5) << endl;

    return 0;
}
