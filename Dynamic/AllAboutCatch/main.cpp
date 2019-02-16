#include <iostream>

using namespace std;
class myException1:exception{
public:
    void display(){
        cout << "exception1" << endl;
    }
};

class myException2:myException1{
public:
    void display(){
        cout << "exception2" << endl;
    }
};
int main()
{
    cout << "All about catch blocks:" << endl;

    try{
        throw 1;
    } catch(int e){
        cout << "Int: " << e <<endl;
    }catch(string e){
        cout << "string: " << e <<endl;
    }catch(double e){
        cout << "double: " << e <<endl;
    }

    try{
        throw 1.5;
    } catch(int e){
        cout << "Int: " << e <<endl;
    }catch(string e){
        cout << "string: " << e <<endl;
    }catch(double e){
        cout << "double: " << e <<endl;
    }

    try{
        throw string("string error");
    } catch(int e){
        cout << "Int: " << e <<endl;
    }catch(string e){
        cout << "string: " << e <<endl;
    }catch(double e){
        cout << "double: " << e <<endl;
    }

     try{
        throw myException1();
    } catch(int e){
        cout << "Int: " << e <<endl;
    }catch(string e){
        cout << "string: " << e <<endl;
    }catch(double e){
        cout << "double: " << e <<endl;
    }catch(...){
        cout << "Any type of error can cause Ellipsis"<<endl;
    }
    // The child first and parent second
    try{
        throw myException1();
    } catch(myException2 e){
        cout << "myException2: "<<endl;
        e.display() ;
    }catch(myException1 e){
        cout << "myException1: " <<endl;
        e.display() ;
    }

    try{
        throw myException2();
    } catch(myException2 e){
        cout << "myException2: "<<endl;
        e.display() ;
    }catch(myException1 e){
        cout << "myException1: " <<endl;
        e.display() ;
    }
    // Wrong: we must put child first and then parent
    cout<< "wrong since child must be first and parent the last catch!" << endl;
    try{
        throw myException2();
    } catch(myException1 e){
        cout << "myException2: "<<endl;
        e.display() ;
    }catch(myException2 e){
        cout << "myException1: " <<endl;
        e.display() ;
    }

    return 0;
}
