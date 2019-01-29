#include <iostream>

using namespace std;


class Complex{
private:
    int real;
    int img;
public:
    Complex(int r = 0, int i = 0){
        real = r;
        img = i;
    }

    void display(){
        cout << real << " + i" << img << endl;
    }

    friend ostream& operator<<(ostream &o, Complex &c);
};


ostream &operator<<(ostream &o, Complex &c){
    o << c.real << " + i" << c.img << endl;
    return o;
}

int main()
{
    Complex c(3, 10);
    cout << "Insertion operator overloading:" << endl;
    c.display();
    cout << c << endl;
    operator<<(cout, c);
    return 0;
}
