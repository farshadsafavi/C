#include <iostream>

using namespace std;

void swap_f(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << " a, b swap: " << a<< " " << b << endl;
}

int main()
{
    cout << "Call by value (pass arguments by value): " << endl;
    int x = 5, y = 8;
    cout << " x, y before passing value: " << x<< " " << y << endl;
    swap_f(x, y);
    cout << " x, y after passing value: " << x<< " " << y << endl;
    return 0;
}
