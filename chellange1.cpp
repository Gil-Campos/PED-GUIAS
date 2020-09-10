/*
1) Crear un registro “Estudiante” que almacenará: nombre, apellido, estado (asignarle
“Indefinido” como valor inicial) y notas (definir “notas” como un arreglo de float de
tamaño n). Luego crear una función que reciba las notas del estudiante y calcule el
promedio, una vez calculado el promedio de las notas, modificar el estado de dicho
estudiante dependiendo de su promedio, si su nota es menor a 6 modificarlo a
“Reprobado” y si es mayor o igual a 6 modificarlo a “Aprobado”. Por último, mostrar la
información del estudiante en consola.
*/

#include <iostream>
#include <string>

using namespace std;

void datos();
float calcPromedio(float notas[], string *estado, int n);

struct Estudiante {
    string nombre;
    string apellido;
    string estado = "Indefinido";
    float notas[];
};

struct Estudiante estudiante;

int main () 
{   
    datos();
    return 0;
}

void datos() {
    int n = 0;
    float promedio = 0;

    cout << endl;
    cout << "Por favor ingresa la cantidad de materias: ";
    cin >> n;
    estudiante.notas[n];
    cout << endl;

    cout << "Ingresa tu nombre: ";
    cin >> estudiante.nombre;
    cout << endl;

    cout << "Ingresa tu apellido: ";
    cin >> estudiante.apellido;
    cout << endl;

    cout << "Ingresa tus notas: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> estudiante.notas[i];
    }
    cout << endl;

    promedio = calcPromedio(estudiante.notas, &estudiante.estado, n);

    cout << "El promedio del estudiante " << estudiante.nombre << " es: " << promedio << ", estado: " << estudiante.estado;
    cout << endl;
}

float calcPromedio(float notas[], string *estado, int n) {
    float calc = 0;

    for (int i = 0; i < n; i++)
    {
        calc += notas[i];
    }

    if (calc / 2 >= 6) {
        *estado = "Aprobado";
    } else {
        *estado = "Reprobado";
    }
    
    return calc / n;
}