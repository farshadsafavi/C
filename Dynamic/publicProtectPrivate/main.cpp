#include <iostream>
#include <Child.h>
#include <Parent.h>
#include <GrandChild.h>
using namespace std;

int main()
{
    cout << "Public Protected and private" << endl;
    Child c;
    Parent p;
    GrandChild g;
    p.c = 10;
    //c.c = 10;
    cout<<p.c<<endl;
    g.funGrandChild();
    // c is protected but is not public
    cout<<g.getC()<<endl;
    return 0;
}
