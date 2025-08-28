// Materia: Programación I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 28/08/2025
// Número de ejercicio: 8

#include <iostream>
using namespace std;

int main() 
{
    int numero;

    cout << "Ingresa un número entero: ";
    cin >> numero;

    if (numero % 2 == 0) 
    {
        cout << "El número es par." << endl;
    } else 
    {
        cout << "El número es impar." << endl;
    }

    return 0;
}