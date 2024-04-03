#include<iostream>
#include<cmath>
#include<string>
#include<ostream>

using namespace std;

struct ComplexNumber
{
    double real;
    double imag;
    ComplexNumber() = default; // mantengo il costruttore di default
    // definsico il costruttore passando a e b come riferimento
    ComplexNumber(double a, double b):
        real(a),
        imag(b){}
    string standard_output(){
        if (abs(real)<1e-15 && abs(imag)<1e-15){
            return "0";
        }
        else if (abs(real) < 1e-15){
            return to_string(imag)+"i"; // to_string = funzione che converte un valore di tipo base in una stringa
        }
        else if (abs(imag) < 1e-15){
            return to_string(real);
        }
        else{
            return to_string(real)+"+"+to_string(imag)+"i";
        }
    }
};
    // DICHIARO LE FUNZIONI
ComplexNumber operator+(const ComplexNumber& z1, const ComplexNumber& z2);
bool operator==(const ComplexNumber& z1, const ComplexNumber& z2);
ostream& operator<<(ostream& os, const ComplexNumber& z); // operatore di stampa
ComplexNumber operatorConjugate(const ComplexNumber& z);
