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
        int getReal(){return real;}
        int getImg(){return img;}
        void setReal(int real){this->real = real;};
        void setImg(int img){this->img = img;}
        friend Complex operator+(Complex c1, Complex c2);
        void display();
        ~Complex();
};

#endif // COMPLEX_H
