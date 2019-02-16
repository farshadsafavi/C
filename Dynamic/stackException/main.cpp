#include <iostream>
#include<Stack.h>
#include<stackoverflow.h>
#include<stackunderflow.h>
using namespace std;

int main()
{
    cout << "stack exception:" << endl;
    Stack s(5);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(10);
    s.push(9);
    try{
     s.push(8);
    } catch(stackoverflow e){
        cout << "stackoverflow Error!" << endl;
    }
    for(int i = 0; i < 10; i++){
        try{
            cout << "top is: " << s.pop() << endl;
        }catch(stackunderflow e){
            cout << "stackunderflow Error--> stop" << endl;
            break;
        }
    }
    return 0;
}
