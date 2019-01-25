#include <iostream>
#include <Rectangle.h>
using namespace std;

int main()
{
    cout << "Rectangle:" << endl;
    Rectangle r1(10, 10);
    cout <<"Area: " << r1.area() << endl;
    cout <<"Perimeter: " << r1.perimeter() << endl;
    if(r1.isSquare()){
        cout <<"This is a square!" << endl;
    }
    return 0;
}
