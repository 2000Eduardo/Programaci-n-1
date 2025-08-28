// Materia: Programación I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 28/08/2025
// Número de ejercicio: 12

#include <iostream>
using namespace std;

int main() 
{
    int numero;

    cout << "Ingresa un número entre 1 y 5: ";
    cin >> numero;

    while (numero < 1 || numero > 5) 
    {
        cout << "Número inválido. Inténtalo de nuevo: ";
        cin >> numero;
    }

    cout << "Número válido ingresado: " << numero << endl;

    return 0;
}