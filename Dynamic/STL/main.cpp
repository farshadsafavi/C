#include <iostream>

using namespace std;

template <typename T>
int size_in_bits(const T &a){
    return sizeof(a)*8;
}
int main()
{
    cout << "Template:" << endl;
    cout << size_in_bits(21) << endl;
    cout << size_in_bits('a') << endl;
    cout << size_in_bits(17.2f) << endl;
    cout << size_in_bits(3.5) << endl;
    return 0;
}
