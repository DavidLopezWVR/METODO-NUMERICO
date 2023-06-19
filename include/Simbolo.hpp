#pragma once
#include <iostream>

using namespace std;

class Simbolo {
private:
    double a;
    double b;

public:

    Simbolo(double limInferior, double limSuperior) {
        a = limInferior;
        b = limSuperior;
    }

    void imprimirSimboloIntegral() {
        cout << "Simbolo de integral: \n";
        cout<< endl;
        cout << "      /"<< b <<endl;
        cout << "     |"<<"  __________" <<endl;
        cout << "     |"<<" V(x^3 + 4)"<<endl;
        cout << "     |"<<endl;
        cout << "     |"<<endl;
        cout << "    / "<< a <<endl;
        
    }
};

