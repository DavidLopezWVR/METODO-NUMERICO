#include <iostream>
#include <Simpson13.hpp>
#include <Simbolo.hpp>
#include <Precision.hpp>



using namespace std;

int main() {
    
    double limInferior, limSuperior;
    int segmentos,numDecimales;

    cout << "Ingrese el limite inferior del intervalo: ";
    cin >> limInferior;

    cout << "Ingrese el limite superior del intervalo: ";
    cin >> limSuperior;

    cout << "Ingrese el numero de segmentos (debe ser un numero par): ";
    cin >> segmentos;
    cout<< endl;

    if (segmentos % 2 != 0) {
        cout << "El numero de segmentos debe ser par. Reinicie el programa e intente nuevamente." << endl;
        cout<< endl;
        return 0;
    }

    cout << "Ingrese el numero de decimales de precision(Fix): ";
    cin >> numDecimales;
    cout<< endl;

    Simbolo imprimir(limInferior, limSuperior);
    imprimir.imprimirSimboloIntegral();

    Simpson13 simpson(limInferior, limSuperior, segmentos);
    double resultado = simpson.integrar();

    Precision precision(numDecimales);
    precision.setPrecision(resultado);

    return 0;
}

