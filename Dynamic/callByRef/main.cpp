#include <iostream>

using namespace std;
void swap_ref(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap_addrs(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 10;
    cout << " Call by reference: " << endl;
    cout << "input: " << x << " and  " << y << endl;
    swap_ref(x, y);
    cout << "output: " << x << " and  " << y << endl;

    x = 5, y = 10;
    cout << " Call by address: " << endl;
    cout << "input: " << x << " and  " << y << endl;
    swap_addrs(&x, &y);
    cout << "output: " << x << " and  " << y << endl;
    return 0;
}
