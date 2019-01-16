# Call by Address
- Address of actual parameters are passed.
- Formal parameters must be pointers
- Formal parameters can indirectly access actual parameters.
- Changes done using formal parameters will reflect in actual parameters

```
Void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
Int main(){
    int a=10, b=20;
    swap(&a,&b);
    cout<<a<<b;
}
```
# Call by Reference
- Actual parameters are passed as reference
- Formal parameters can directly access actual parameters
- Function call is converted into inline function, if not possible it will become call by address
- Reference don’t take extra memory
- Syntax is same as Call by Value except, formal parameters are reference

```
Void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
Int main(){
    int x=10, y=20;
    swap(x,y);
    cout<<x<<y;
}
```