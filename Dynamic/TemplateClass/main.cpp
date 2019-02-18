#include <iostream>
#include<Stack.h>

using namespace std;


int main()
{
     Stack<float> s(10);
     s.push(10);
     s.push(23);
     s.push(33);
     cout << s.pop() << endl;
}
