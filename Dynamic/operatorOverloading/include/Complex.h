#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
    private:
        int real;
        int img;
    public:
        Complex();
        Complex(int real, int img);
        Complex operator+(Complex c);
        void display();
        int vector_length();
        ~Complex();
};

#endif // COMPLEX_H
