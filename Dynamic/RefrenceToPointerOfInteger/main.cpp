#include <iostream>

using namespace std;

int main()
{
    cout << "Pointer to the reference of an integer:" << endl;
    int x = 10;
    int *y = &x;
    int *&z = y;
    cout << *z << " = " << *y << " = " << x << endl;
    return 0;
}
