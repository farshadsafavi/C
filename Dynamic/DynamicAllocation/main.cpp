#include <iostream>

using namespace std;

int main()
{
    cout << "Dynamically allocate memory using pointer:" << endl;
    int *p = new int[5];
    p[0] = 12;
    p[1] = 13;
    for(int i = 0; i < 5; i++){
        cout << p[i] << endl;
    }
    // We need to delete array which is allocated in heap first
    // and then assign p to the null ;otherwise, it leads to memory leak
    delete []p;
    p = nullptr;

    int A[10];
    // There is no syntax available in c++ to change the size of A[10] to A[20]
    int e;
    cout << "Enter the number of elements: ";
    cin >> e;
    int P[e];
    //Size display 4*e since every integer has 4 bytes size
    cout << "The array size is: " <<sizeof P << endl;

    int d;
    cout << "Enter the number of elements: ";
    cin >> d;
    int *arr = new int[d];
    //Size display 4*e since every integer has 4 bytes size
    cout << "The array size is: " <<d << endl;
    cout << "Enter the number of elements: ";
    cin >> d;
    // good practice to delete arr.
    delete []arr;
    arr = new int[d];
    //Size display 4*e since every integer has 4 bytes size
    cout << "The array size is: " <<d<< endl;
    cout << "The array size in the stack is: " <<sizeof arr<< endl;
    return 0;
}
