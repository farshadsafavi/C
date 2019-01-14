#include <iostream>

using namespace std;

// Display function
void display(){
    cout << "Hello world!" << endl;
}

float add(float x, float y){
    float z;
    z = x + y;
    return z;
}

int maxim(int a, int b){
    return (a>b) ? a : b;
}
// Function overloading
int maxim(int a, int b , int c){
    int max1 = maxim(a, b);
    int max2 = maxim(b, c);
    return maxim(max1, max2);
}

int maximum2(int a, int b, int c){
    if(a > b && a > c){
        return a;
    } else if(b > c){
        return b;
    } else{
        return c;
    }
}
// Function overloading sum
int sum(int a, int b){
    return a + b;
}

float sum(float a, float b){
    return a + b;
}

double sum(double a, double b){
    return a + b;
}

int sum (int a, int b, int c){
    return a + b + c;
}

int main()
{
    display();
    float x = 2.3, y = 7.9, z;
    z = add(x, y);
    cout << "The addition two two numbers is: " << z << endl;

    int a = 5,b  = 10, c = 15, r;
    r = maxim(a, b, c);
    cout << "Maximum of " <<a <<", " << b << ", " << c << " is: " << r << endl;
    r = maximum2(a, b, c);
    cout << "Maximum of " <<a <<", " << b << ", " << c << " is: " << r << endl;

    cout << "call sum(10, 5): " << sum(10, 5) << endl;
    cout << "call sum(12.5f, 3.4f): " << sum(12.5f, 3.4f) << endl;
    cout << "call sum(12.5, 3.4) by default is double : " << sum(12.5f, 3.4f) << endl;
    cout << "call sum(10, 2, 3): " << sum(10, 20, 3) << endl;
    return 0;
}
