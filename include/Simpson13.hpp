#pragma once
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Simpson13 {
private:
    double a;  // Límite inferior del intervalo
    double b;  // Límite superior del intervalo
    int n;     // Número de segmentos

public:
    Simpson13(double limInferior, double limSuperior, int segmentos) {
        a = limInferior;
        b = limSuperior;
        n = segmentos;
    }

    double func(double x) {
        // Definir aquí la función a integrar
        return sqrt(pow(x, 3) + 4);
    }

    double integrar() {
        double h = (b - a) / n;
        double resultado = func(a) + func(b);

        vector<vector<double>> table_results;
        table_results.push_back({a, resultado});

        for (int i = 1; i < n; i++) {
            double x = a + i * h;
            if (i % 2 == 0) {
                resultado += 2 * func(x);
            } else {
                resultado += 4 * func(x);
            }

            table_results.push_back({x, resultado});
        }

        resultado *= h / 3;

        // Mostrar tabla de resultados
        cout<< endl;
        cout << "Iteracion\tX\t\tResultado" << endl;
        for (int i = 0; i < table_results.size(); i++) {
            cout << i << "\t\t" << table_results[i][0] << "\t\t" << table_results[i][1] << endl;
            cout<<"___________|________________|_____________"<< endl;
        }
        cout<< endl;

        return resultado;
    }
};