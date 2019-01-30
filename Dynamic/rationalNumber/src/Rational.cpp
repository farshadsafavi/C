#include "Rational.h"

Rational::Rational()
{
    setp(1);
    setq(1);
}

Rational::~Rational()
{
    //dtor
}

Rational::Rational(int p, int q){
    setp(p);
    setq(q);
}

Rational::Rational(Rational &r){
    setp(r.p);
    setq(r.q);
}

int Rational::getp(){
    return this->p;
}

int Rational::getq(){
    return this->q;
}

void Rational::setq(int q){
    this->q = q;
}

void Rational::setp(int p){
    this->p = p;
}

Rational operator+(Rational r1, Rational r2){
    Rational temp;
    temp.setp(r2.getq() * r1.getp() + r2.getp() *r1.getq());
    temp.setq(r1.getq()* r2.getq());
    return temp;
}

ostream &operator<<(ostream &o, Rational &r1){
    o << r1.getp() << "/" << r1.getq();
    return o;
}
