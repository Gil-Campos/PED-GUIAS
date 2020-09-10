/*
6) Construir una función recursiva que calcule la suma de los n primeros números
naturales.
*/

#include <iostream>

using namespace std;

int sumaNaturales(int);

int suma = 0;

int main() {

    int n = 0, f = 0;

    cout << endl;
    cout << "Ingresa la cantidad que quieres sumar: ";
    cin >> n;
    cout << endl;

    cout << "La suma de los primeros " << n << " numeros naturales es " << sumaNaturales(n);

    return 0;
}

int sumaNaturales(int n) {

    if(n == 0) {
        return suma;
    } else {
        suma += n;
        sumaNaturales(n-1);
    }
}
