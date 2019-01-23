#include <iostream>
#include<stdlib.h>
#include<IntBag.h>
using namespace std;

int main()
{
    cout << "The project to implement a Bag using C++:" << endl;

    IntBag bag;
    int i = rand() % 100 + 1;
    for (int i = 0; i < 10; i++){
        int value = rand() % 100 + 1;
        bag.add(value);
    }
    cout << "start: " << endl;
    bag.print();
    IntBag bag2(bag);
    cout << "start: " << endl;
    bag2.print();
    return 0;
}
