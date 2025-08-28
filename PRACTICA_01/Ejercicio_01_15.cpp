// Materia: Programación I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 28/08/2025
// Número de ejercicio: 15

#include <iostream>
using namespace std;

int main() 
{
    int N;
    float suma = 0.0, nota;

    cout << "Ingresa el número de notas: ";
    cin >> N;

    int i = 0;
    while (i < N) 
    {
        cout << "Ingresa la nota " << (i + 1) << ": ";
        cin >> nota;
        suma += nota;
        i++;
    }

    cout << "El promedio de las notas es: " << (suma / N) << endl;

    return 0;
}