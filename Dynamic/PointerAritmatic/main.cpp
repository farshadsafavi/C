#include <iostream>

using namespace std;

int main()
{
    cout << "Pointer Arithmetic:" << endl;
    int A[5]{2, 4, 6, 8, 10};
    int *p = A;
    cout << *p << endl;
    for (int i = 0; i < 5; i++){
        cout <<*p << endl;
        p++;
    }
    p--;
    cout << "Pointer decrement:" << endl;
    for (int i = 0; i < 5; i++){
        cout <<*p << endl;
        p--;
    }
    p++;
    cout << "The address of the first pinter  :" << p << endl;
    // Add 8 bytes to the previous p address since integer is 4 bytes
    cout << "The address of the pinter + 2 is :" << p + 2<< endl;
    // Type the content
    cout << "*(p) is the content :" << *p << endl;
    // Add 8 bytes to the previous p address since integer is 4 bytes
    cout << "*(p + 2) is the content: " << *(p + 2)<< endl;
    cout << "Print all elements using i[A]: ";
    for(int i = 0; i < 5; i++){
        cout <<i[A] << endl;
    }
    cout << "Print all address of elements using p:\n";
    for(int i = 0; i < 5; i++){
        cout << p+i << endl;
    }

    cout << "Print all elements using *(A + i):\n";
    for(int i = 0; i < 5; i++){
        cout << *(A+i) << endl;
    }

    cout << "Print all addresses using (A + i):\n";
    for(int i = 0; i < 5; i++){
        cout << (A+i) << endl;
    }

    int *q = &A[4];

    cout << "The address of q is: " << q << endl;
    cout << "The address of p is: " << p << endl;
    // The difference is shows number of elements between them not number of bytes4bytes
    cout << "q - p: The difference between two pointers shows number of elements between them not number of bytes: " << q - p << endl;
    cout << "p - q: The difference between two pointers shows number of elements between them not number of bytes: " << p - q << endl;
    return 0;
}
