// Materia: Programación I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 28/08/2025
// Número de ejercicio: 10

#include <iostream>
using namespace std;

int main() 
{
    int nota;

    cout << "Ingresa la nota del estudiante (0-100): ";
    cin >> nota;

    if (nota < 0 || nota > 100) 
    {
        cout << "Nota ingresada no es válida." << endl;
    } else if (nota >= 51) 
    {
        if (nota < 60) 
        {
            cout << "Calificación = C" << endl;
        } else if (nota < 70) 
        {
            cout << "Calificación = C+" << endl;
        } else if (nota < 80) 
        {
            cout << "Calificación = B" << endl;
        } else if (nota < 90) 
        {
            cout << "Calificación = B+" << endl;
        } else if (nota < 95) 
        {
            cout << "Calificación = A" << endl;
        } else 
        {
            cout << "Calificación = A+" << endl;
        }
    } else 
    {
        cout << "Reprobado." << endl;
    }

    return 0;
}