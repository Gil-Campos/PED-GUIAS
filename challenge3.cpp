/*
3) Crear un programa en C++ donde se declare un arreglo de enteros, de tamaño n que será
solicitado al usuario. Luego crear una función recursiva que reciba la dirección inicial del
arreglo, la cantidad de elementos que se van a introducir y luego llenar dicho arreglo. Por
último, mostrar el arreglo en la consola.
*/

#include <iostream>
#include <string>

using namespace std;

void recursiveData(int*, int);

int main() {

    int n = 0;
    
    cout << endl;
    cout << "Por favor ingresa un entero: ";
    cin >> n;
    cout << endl;
    
    int num[n];

    cout << "Ingresa los datos: " << endl;
    recursiveData(num, n);
    
    cout << endl;
    cout << "Imprimiendo datos: " << endl;
    for(int i = 0; i < n; i++) {
        cout << num[i] << endl;
    }

    return 0;
}

void recursiveData(int *arreglo, int limit) {
    if (limit == 0) {
        return;
    } else {
        cin >> *(arreglo);
        recursiveData((arreglo + 1), (limit - 1));
    }
}

