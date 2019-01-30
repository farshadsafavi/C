#include<iostream>
#ifndef RATIONAL_H
#define RATIONAL_H
using namespace std;

class Rational
{
    private:
        int p;
        int q;
    public:
        Rational();
        Rational(int p, int q);
        Rational(Rational &r);
        int getp();
        int getq();
        void setq(int q);
        void setp(int p);
        Rational operator+(Rational r)
        {
            Rational t;
            t.p=this->p*r.q+this->q*r.p;
            t.q=this->q*r.q;
            return t;
        }
        friend ostream &operator<<(ostream &o, Rational &r);
        virtual ~Rational();
};

#endif // RATIONAL_H
