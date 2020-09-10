/*
8) Escriba programas que resuelvan los siguientes problemas clásicos:
El problema de las torres de Hanói. Consiste en mover una torre de discos, de una aguja
hacia otra, nada más con la ayuda de una aguja auxiliar. La torre consiste de n discos de
diferente tamaño, que van colocados uno sobre otro, iniciando en la base con el más
grande y terminando en la parte superior con el más pequeño. Solo puede moverse un
disco a la vez y en ningún momento un disco puede estar sobre otro más pequeño que
él. 
*/

#include <iostream>

using namespace std;

int disco = 0;

void torresHanoi(int, string, string, string);

int main() {

    int n = 0;

    cout << endl;
    cout << "Ingresa la cantidad de discos: ";
    cin >> n;
    cout << endl;

    torresHanoi(n, "A", "B", "C");

    return 0;
}

void torresHanoi(int n, string inicio, string auxiliar, string destinacion) {
    if (n == 1)
    {
        cout << "Disco " << n << " en " << inicio << " hacia " << destinacion << endl;
        return;
    }
    else
    {
        torresHanoi(n-1, inicio, destinacion, auxiliar);
        cout << "Disco " << n << " en " << inicio << " hacia " << destinacion << endl;
        torresHanoi(n-1, auxiliar, inicio, destinacion);
    }
    
}
 