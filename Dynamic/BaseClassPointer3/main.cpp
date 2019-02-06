#include <iostream>
#include<AdvancedCar.h>
using namespace std;

int main()
{
    cout << "Base class pointer derived class object:" << endl;
    AdvancedCar a;
    a.start();
    a.playMusic();

    BasicCar *b;
    b = new AdvancedCar();
    b->start();
    // can not use b->playMusic

    AdvancedCar *A;
    A = new AdvancedCar();
    A->playMusic();
    A->start();

    return 0;
}
