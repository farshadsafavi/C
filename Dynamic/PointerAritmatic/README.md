# Problems Using Pointers
It might cause run-time problems:
1. Uninitialize pointers
2. Memory leak
3. Dangling pointers

## 1. Uninitialize pointer:
`int *p;`
`*p = 25;`

The pointer is not initialized in the above example. Invalid 
First, we need to initialize the pointer and then assign value to the pointer.

### There are three methods to initialize the pointer:
1. if you have already assigned a variable:
    `int x = 10;`
    `int *p;`
    `p = &x;`
2. Assign some address in hexadecimal codes:
    `int *p;`
    `p = (int *) 0x5628;`
3. Dynamically assign heap memory to the pointer:
    `int *p;`
    `p = new int[5];`

## 2. Memory leak:
If we allocate heap memory and  do not deallocate the memory, it will produce leak memory(we might run out of the memory):

    int *p = new int[5];
    .
    delete []p;
    // We can write one of the following three 
    p = NULL; 
    p = 0;
    p = nullptr;

## 3. Dangling Pointer:
Look at follwing main function:

    void main(){
        int *p = new int[5];
        fun(p);
    }

    void fun(int *q){
        delete []q;
    }
p is pointing to the heap memory, q also pints to the same memory. After we delete the memory using function fun. The memory shared by both q and p and removing the heap memory produce *dangling p pointer*. if the control comes back to the main function, when we want to access "*P" since p is pointing to the location which is not existing and produce error.


