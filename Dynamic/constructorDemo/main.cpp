#include <iostream>

using namespace std;
class Rectangle{
private:
    int length;
    int breadth;
public:
    /*
    Rectangle(){
        length = 0;
        breadth = 0;
    }*/

    Rectangle(int l = 1, int b = 1){
        setLength(l);
        setBreadth(b);
    }

    Rectangle(Rectangle &r){
        length = r.getLength();
        breadth = r.getBreadth();
    }

    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }

    void setLength(int l){
        length = 0;
        if(l > 0){
            length = l;
        } else{
            cout <<"Enter a positive number" << endl;
        }
    }

    void setBreadth(int b){
        breadth = 0;
        if(b > 0){
            breadth = b;
        } else{
            cout <<"Enter a positive number" << endl;
        }
    }

    int area(){
        return length*breadth;
    }

    int primeter(){
        return 2*(length + breadth);
    }
};
int main()
{
    cout << "Constructor demo:" << endl;
    Rectangle r;
    cout << r.area() << endl;
    Rectangle r1(5, 10);
    cout << r1.area() << endl;
    cout << r1.primeter() << endl;
    Rectangle r2(r1);
    cout << r1.area() << endl;
    cout << r1.primeter() << endl;
    return 0;
}
