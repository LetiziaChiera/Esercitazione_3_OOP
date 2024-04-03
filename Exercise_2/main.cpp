#include "ComplexNumber.hpp"
#include<iostream>


int main()
{
    ComplexNumber z1(1,2);
    cout << z1 << endl;


// utilizzo l'operatore ==
    ComplexNumber z2(1,2);
    if (z1 == z2){
        cout<< "z1 e z2 sono uguali"<< endl;
    }
        else
        {
            cout << "i due numeri sono diversi"<< endl;
        }
    ComplexNumber z3(2,1);
        // utilizzo l'operatore ==
    if (z1 == z3){
        cout<< "z1 e z3 sono uguali"<< endl;
    }
    else
    {
        cout << "z1 e z3 sono diversi"<< endl;
    }

//utilizzo l'operatore somma
    ComplexNumber sum = z1 + z3;
    cout << "somma di z1 + z3 = " << sum<< endl;

// utilizzo operatore coniugato
    ComplexNumber conjz1 = operatorConjugate(z1);
    cout<< "coniugato di z1 = " << conjz1<< endl;


    return 0;

}
