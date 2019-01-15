#include <iostream>

using namespace std;
int sum (int a , int b , int c = 0){
    return a + b + c;
}

int maxim(int a, int b = 0, int c = 0){
    if(a > c && a > b){
        return a;
    } else if(b > c){
        return b;
    } else{
        return c;
    }
}

int maxim_single_line(int a = 0, int b = 0, int c = 0){
    return (a > b && a > c) ? a:(b > c? b : c);
}
int main()
{
    cout << "Default arguments in function:" << endl;
    cout << "Function with two arguments: " << sum (10, 5)<< endl;
    cout << "Function with three arguments: " <<sum (12, 13, 3)<< endl;

    cout << "Maximum of 3, 16, 9 is : " << maxim_single_line(3, 16, 9) << endl;
    cout << "Maximum of 3, 16, 9 is : " << maxim(3, 16, 9) << endl;

    cout << "Max function with two arguments 5, 8 :" << maxim(5, 8) << endl;
    cout << "Max function with one argument 10 :" << maxim(10) << endl;

    cout << maxim_single_line() << endl;
    cout << maxim_single_line(10) << endl;
    cout << maxim_single_line(10, 13) << endl;
    cout << maxim_single_line(10, 13, 15) << endl;
    return 0;
}
