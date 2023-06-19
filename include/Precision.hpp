#pragma once
#include <iostream>
#include <iomanip>


using namespace std;

class Precision {
private:
    int decimales;  // Número de decimales de precisión

public:
    Precision(int numDecimales) {
        decimales = numDecimales;
    }

    void setPrecision(double resultado) {
        cout << "El resultado con " << decimales << " decimales de precision es: "
                  << fixed << setprecision(decimales) << resultado << endl;
    }
};