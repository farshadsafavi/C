#include <iostream>

using namespace std;
int a = 10;
int b = 10 + a;
int g = 5;

int fun(){
    int x = 10;
    int g = 15;
    cout << x << endl;
    cout << a << endl;
    b++;
    cout << b << endl;
    cout << "compiler execute the nearest scope (g in local scope is 15): " << g << endl;
    {
        int g = 0;
        g++;
        cout <<"compiler execute the nearest scope (g in local scope is 1): " << g << endl;
    }
    cout << "compiler execute the nearest scope (g in local scope is 15): " << g << endl;
    cout << "compiler execute the global variable using scope resolution ::g = 5 -->" << ::g << endl;
}

int main()
{
    cout << "Local and global variable practice: " << endl;
    cout << b << endl;
    fun();
    cout << a << endl;
    cout << b << endl;

    return 0;
}
