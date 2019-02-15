#include <iostream>

using namespace std;

class MyException:exception{
    public:
    void message(){
        cout << "896" << endl;
    }
};

int division1(int x, int y){
    if (y == 0)
        throw 105;
    return x/y;
}

int division2(int x, int y){
    if (y == 0)
        throw string("Divide by zero");
    return x/y;
}

int division3(int x, int y){
    if (y == 0)
        throw 1.5f;
    return x/y;
}

int division4(int x, int y) throw(MyException){
    if (y == 0)
        throw MyException();
    return x/y;
}

// It means No exception for this method
int division5(int x, int y) throw(){
    return x/y;
}

int main()
{
    cout << "All about Throw:" << endl;
    try{
        int d = division1(10, 3);
        d = division1(10, 0);
    }catch(int e){
        cout <<"The Error: " << e << endl;
    }catch(float e){
        cout <<"The Error: " << e << endl;
    }catch(string e){
        cout <<"The Error: " << e << endl;
    }

    try{
        int d = division2(10, 3);
        d = division2(10, 0);
    }catch(int e){
        cout <<"The Error: " << e << endl;
    }catch(float e){
        cout <<"The Error: " << e << endl;
    }catch(string e){
        cout <<"The Error: " << e << endl;
    }

    try{
        int d = division3(10, 3);
        d = division3(10, 0);
    }catch(int e){
        cout <<"The Error: " << e << endl;
    }catch(float e){
        cout <<"The Error: " << e << endl;
    }catch(string e){
        cout <<"The Error: " << e << endl;
    }

    try{
        int d = division4(10, 3);
        d = division4(10, 0);
    }catch(MyException e){
        cout <<"The Error"<<endl;
        e.message();
    }

    return 0;
}
