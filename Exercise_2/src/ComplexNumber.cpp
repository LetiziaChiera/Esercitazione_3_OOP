#include "ComplexNumber.hpp"
#include<iostream>
#include<cmath>

ComplexNumber operator+(const ComplexNumber& z1, const ComplexNumber& z2){
    double r = z1.real + z2.real;
    double i = z1.imag+z2.imag;
    ComplexNumber z(r,i);
    return z;
}


bool operator==(const ComplexNumber& z1, const ComplexNumber& z2){
    return (abs(z1.real-z2.real)<1e-15 && abs(z1.imag-z2.imag)<1e-15);
    }


ostream& operator<<(ostream& os, const ComplexNumber& z){// operatore di stampa
    if (abs(z.real)<1e-15 && abs(z.imag)<1e-15)
        os<< 0;
    else if(abs(z.real) < 1e-15)
        os<<z.imag<<"i";
    else if(abs(z.imag) < 1e-15)
        os<<z.real;
    else
        os<<z.real;
              if(z.imag<0)
              os << z.imag << "i";
              else
              os<< "+"<< z.imag<< "i";
    return os;
}


ComplexNumber operatorConjugate(const ComplexNumber& z){
    double r = z.real;
    double i = -z.imag;
    ComplexNumber z1(r,i);
    return z1;
}
