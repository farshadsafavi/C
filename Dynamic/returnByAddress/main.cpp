#include <iostream>

using namespace std;

int *fun(){
    int x = 10;
    return &x;
}

int *fun2(){
    int* x = new int[5];
    for (int i = 0; i < 5; i++){
        x[i] = 5*i;
    }
    cout << x << endl;
    return x;
}

int &fun3(int &x){
    return x;
}

int main()
{
    cout << "Return by address" << endl;
    int *q = fun2();

    for(int i = 0; i < 5; i++){
        cout << q[i]<<endl;
    }
    cout << q << endl;

    int a = 10;
    fun3(a) = 25;
    cout << a << endl;
    return 0;
}
