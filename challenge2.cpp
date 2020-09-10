/*
2) Ocupar el registro “Estudiante” del ejercicio anterior, con la diferencia que ya no se
almacenará estado. Defina un arreglo de n estudiantes y ocupe la función para calcular el
promedio de las notas para cada uno de los estudiantes del arreglo, luego debe crear una
función que encuentre cuál es el promedio más alto y muestre en consola la información
del estudiante que lo posee. 
*/
#include <iostream>

using namespace std;

struct Estudiante {
    string nombre;
    string apellido;
    float* notas;
};

void datos();
float promedio(int, float*);
void encontrarMayor(int, float*, Estudiante*);

int main() {

    datos();

    return 0;
}

void datos() 
{

    int cantNotas = 0, cantEstudiantes = 0;

    cout << endl;
    cout << "Por favor ingresa la cantidad de estudiantes: ";
    cin >> cantEstudiantes;
    cout << endl;

    struct Estudiante estudiante[cantEstudiantes];
    float promedios[cantEstudiantes];

    cout << "Ingresa la cantidad de notas: ";
    cin >> cantNotas;
    cout << endl;

    float *datosNotas = new float[cantNotas];

    for (int i = 0; i < cantEstudiantes; i++)
    {
        cout << "Ingresa el nombre del estudiante " << i + 1 << ": ";
        cin >> estudiante[i].nombre;
        cout << "Ingresa el apellido del estudiante " << i + 1 << ": ";
        cin >> estudiante[i].apellido;
        cout << endl;
    }

    for (int i = 0; i < cantEstudiantes; i++)
    {
        cout << "Ingresa la nota del estudiante: " << endl;
        for (int j = 0; j < cantNotas; j++)
        {
            cin >> datosNotas[j];
        }

        estudiante[i].notas = datosNotas;                        
    }

    for (int i = 0; i < cantEstudiantes; i++)
    {
        promedios[i] = promedio(cantNotas, estudiante[i].notas);
    }

    encontrarMayor(cantNotas, promedios, estudiante);

}

float promedio(int limit, float *notas) 
{
    float suma = 0, promedio = 0;

    for (int i = 0; i < limit; i++)
    {
        suma += notas[i];
    }

    promedio = suma / limit;
    
    return promedio;    
}

void encontrarMayor(int limit, float *promedios, Estudiante *estudiante) 
{
    int check = 0, posicion = 0;
    for (int i = 0; i < limit; i++)
    {
        if (promedios[i] > check)
        {
            check = promedios[i];
            posicion = i;
        }
    }
    
    cout << endl;
    cout << "El estudiante" << " " << estudiante[posicion].nombre << " " << estudiante[posicion].apellido << "Tiene el promedio mas alto con: " << promedios[posicion];
    cout << endl;
}
