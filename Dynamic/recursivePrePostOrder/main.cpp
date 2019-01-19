#include <iostream>

using namespace std;

void preorder_fun(int n){
    if(n > 0){
        cout << n << endl;
        preorder_fun(n - 1);
    }
}

void postorder_fun(int n){
    if(n > 0){
        postorder_fun(n - 1);
        cout << n << endl;
    }
}

int main()
{
    cout << "preorder: "<<endl;
    preorder_fun(5);
    cout << "postorder: "<<endl;
    postorder_fun(5);
    return 0;
}
