// Materia: Programación I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 28/08/2025
// Número de ejercicio: 9

#include <iostream>
using namespace std;

int main() 
{
    int edad;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad <= 12) 
    {
        cout << "Eres un niño." << endl;
    } else if (edad <= 18) 
    {
        cout << "Eres un adolescente." << endl;
    } else if (edad < 60) 
    {
        cout << "Eres mayor de edad." << endl;
    } else 
    {
        cout << "Eres un adulto mayor." << endl;
    }

    return 0;
}