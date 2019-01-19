#include <iostream>

using namespace std;

int search_fun(int A[], int n, int key){
    for (int i = 0; i < n; i++){
        if(A[i] == key){
            return i;
        }
    }
    return 0;
}

int main()
{
    cout << "Linear search index using function:" << endl;
    int A[]={2,4,5,7,10,9,13};
    int k;
    cout<<"Enter an Element to be Searched:";
    cin>>k;
    int index=search_fun(A,7,k);

    cout<<"Element found at index :"<<index<<endl;

    return 0;
}
