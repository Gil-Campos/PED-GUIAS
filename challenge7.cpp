/*
7) Calcule la raíz cuadrada de un número entero, n, por medio de los cálculos repetidos de
la expresión:

𝑟 = (𝑛/𝑟 + 𝑟)/2

Cada vez que se calcula un nuevo r, este está más cerca del valor real de la raíz de n. El
primer valor de r, valor semilla, puede ser un número positivo cualquiera.
*/

#include <iostream>
#include <cmath> 

using namespace std;

float calcRaiz(float, float);

int main() {

    float n = 0, r = 0;

    cout << endl;
    cout << "Ingresa un numero entero (positivo): ";
    cin >> n;
    cout << endl;

    cout << "Ingresa un el valor semilla: ";
    cin >> r;
    cout << endl;

    cout << "La raiz cuadrada de " << r << " es: " << calcRaiz(n, r);

    return 0;
}

float calcRaiz(float n, float siguiente) {

    float anterior = siguiente;
    siguiente = (n/siguiente + siguiente)/2;

    if (abs(anterior - siguiente) < 0.00000001) {
        return siguiente;
    } else {
        return calcRaiz(n, siguiente);
    }
}