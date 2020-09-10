/*
5) Dados dos números enteros llamados mayor y menor, obtener el máximo común divisor
(mcd) de ambos por el método de Euclides. Para resolver este problema se procede así:
a) se realiza la división entera del mayor entre el menor, b) si el residuo es cero, el mcd
está en la variable llamada menor, despliega el resultado y termina el programa, c)
pero si el residuo no es cero, el valor de menor pasa a mayor y el valor de residuo pasa
a menor, d) repetir el paso a.
*/

#include <iostream>

using namespace std;

int algEuclides(int, int);

int main() {

    int mayor = 0, menor = 0;

    cout << endl; 
    cout << "Ingresa el numero mayor: ";
    cin >> mayor;
    cout << endl;

    cout << "Ingresa el numero menor: ";
    cin >> menor;
    cout << endl;
    
    cout << "El mcd de " << mayor << " y " << menor << " es: " << algEuclides(mayor, menor);

    return 0;
}

int algEuclides(int mayor, int menor) {

    if ( mayor % menor == 0) {
        return menor;
    } else {
        algEuclides(menor, mayor % menor);
    }
}