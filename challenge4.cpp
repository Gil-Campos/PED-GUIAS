/*
4) Calcular la raíz digital de un número entero (no negativo) ingresado por el usuario,
utilizando recursión. La raíz digital de un número se obtiene sumando todas las cifras del
número, si el resultado de esta suma es mayor que 9 se debe volver a sumar los dígitos
del resultado. Por ejemplo, con el número 19, la suma de sus dígitos es 10, dado que el
resultado es mayor a nueve, se debe volver a sumar los dígitos del resultado, la suma de
sus dígitos es 1, por ende, la raíz digital es 1.
*/

#include <iostream>

using namespace std;

int raizDigital(int, int);

int main() {

    int n = 0, c = 0;

    cout << endl;
    cout << "Ingresa un numero entero (positivo): ";
    cin >> n;
    cout << endl;

    cout << "La raiz digital de " << n << " es: " << raizDigital(n, c); 
    cout << endl;

    return 0;
}

int raizDigital(int num) {
    int suma = 0;
    if (num < 10)
    {
        return num;
    } else {
        //Le copie el while a Henry :)
        while (num > 0)
        {
            suma = suma + num%10;
            num = num/10;
        }
        cout << "La suma es: " << suma << endl;
        return raizDigital(suma);
    }
}