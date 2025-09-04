// Materia: Programacion I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Disenio Digital
// Fecha creacion: 03/08/2025
// Numero de ejercicio: 19

#include <iostream>
using namespace std;

int main() 
{
    int numero;

    cout << "Ingresa un número: ";
    cin >> numero;

    cout << "Tabla de multiplicar del " << numero << ":" << endl;

    for (int i = 1; i <= 10; i++) 
    {
        int resultado = numero * i;
        cout << numero << " x " << i << " = " << resultado << endl;
    }

    return 0;
}