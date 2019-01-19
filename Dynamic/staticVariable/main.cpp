#include <iostream>

using namespace std;

int fun(){
    static int a = 4;
    a++;
    cout << a << endl;
}
int main()
{
    cout << "Static variable:" << endl;
    fun();
    fun();
    return 0;
}
