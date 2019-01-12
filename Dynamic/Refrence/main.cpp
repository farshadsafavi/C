#include <iostream>

using namespace std;

int main()
{
    cout << "Reference: " << endl;
    int x = 10;
    //&y must initialized
    int &y = x;
    // we can not assign y = b;
    cout <<x << endl;
    x++;
    y++;
    cout << "The content is the same: (Reference y is Alias of variable x)";
    cout << x<< endl;
    cout << y << endl;
    cout << "The address of x and y are (y is reference to x): " << &x  <<" = " << &y << endl;
    return 0;
}
