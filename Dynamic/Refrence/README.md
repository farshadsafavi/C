# Reference
- Reference is a Alias of variable
- It must be initialised when declared
```
    int x = 20;
    int &y = x;
```
- It doesn’t take any memory
- It cannot be modified to refer other variable
```
    int x = 20;
    int &y = x;
    int b = 10;
    ERROR if we assign y = b OR &y = b the expression is NOT assignable
```
- Syntax for reference declaration is:
```
    Int &y=x;
```
