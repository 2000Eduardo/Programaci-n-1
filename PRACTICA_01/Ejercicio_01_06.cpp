// Materia: Programación I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 28/08/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

int main() 
{
    int numero;

    cout << "Ingresa un número entero: ";
    cin >> numero;

    if (numero > 0) 
    {
        cout << "El número es positivo." << endl;
    } else if (numero < 0) 
    {
        cout << "El número es negativo." << endl;
    } else 
    {
        cout << "El número es cero." << endl;
    }

    return 0;
}