#include <iostream>
#include<Innova.h>
#include<Swift.h>
using namespace std;

int main()
{
    cout << "Polymorphism:" << endl;
    Car *c;
    c = new Innova;
    c->start();
    c = new Swift;
    c->start();

    Car *arr[3];
    arr[0] = new Innova();
    arr[1] = new Swift();
    arr[2] = new Car();
    for(int i = 0; i < 3; i++){
        arr[i]->start();
    }
    return 0;
}
