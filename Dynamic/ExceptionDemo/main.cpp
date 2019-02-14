#include <iostream>

using namespace std;

int main()
{
    cout << "Exception Demo" << endl;
    int x = 10;
    int y = 0;
    int c = 0;
    try{
        if(y == 0){
            throw 101;
        }
        c = x / y;
        cout << "The division of x "<< x << " by y " << y << " is " << c << endl;
    } catch(int e){
        cout << "Catch the error: " << e << endl;
    }
    cout << "Bye" << endl;
    cout <<"------------------" << endl;
    y = 5;
    try{
        if(y == 0){
            throw 101;
        }
        c = x / y;
        cout << "The division of x "<< x << " by y " << y << " is " << c << endl;
    } catch(int e){
        cout << "Catch the error: " << e << endl;
    }
    cout << "Bye" << endl;


    return 0;
}
