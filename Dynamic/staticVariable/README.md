# Static variables
- They have local scope but remain in memory through out the execution of program
- They are created in code section
- They are history-sensitive
```
Void fun(){
    static int v=0;
    int a=10;
    v++:
    cout<<a<<“ “<<v;
}
Int main(){
    fun();
    fun();
    fun();
}
```