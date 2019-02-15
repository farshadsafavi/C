#include <iostream>

using namespace std;
int division(int x, int y){
    if(y==0){
        throw 101;
    }
    return x/y;
}
int main()
{
    cout << "Throw and catch between functions:" << endl;
    try{
        int r = division(10, 2);
        cout <<"The first result is: " << r << endl;
        r = division(10, 0);
        cout <<"The second result is: " << r << endl;
    }catch(int e){
        cout << "The error is: " << e << endl;
    }
    return 0;
}
