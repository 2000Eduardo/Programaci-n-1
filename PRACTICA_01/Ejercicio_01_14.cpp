// Materia: Programación I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 28/08/2025
// Número de ejercicio: 14

#include <iostream>
using namespace std;

int main() 
{
    int N;

    cout << "Ingresa un número entero N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}