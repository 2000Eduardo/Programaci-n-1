// Materia: Programación I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 28/08/2025
// Número de ejercicio: 13

#include <iostream>
using namespace std;

int main() 
{
    int N, suma = 0;

    cout << "Ingresa un número entero N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) 
    {
        suma += i;
    }

    cout << "La suma de todos los enteros desde 1 hasta " << N << " es: " << suma << endl;

    return 0;
}