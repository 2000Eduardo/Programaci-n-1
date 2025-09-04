// Materia: Programacion I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Disenio Digital
// Fecha creacion: 03/08/2025
// Numero de ejercicio: 16

#include <iostream>
using namespace std;

int main() 
{
    int numero;
    bool esPrimo = true;

    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero <= 1) 
    {
        esPrimo = false;
    } else {
        for (int i = 2; i <= numero / 2; i++) 
        {
            if (numero % i == 0) 
            {
                esPrimo = false;
            }
            if (!esPrimo) 
            {
                i = numero / 2;
            }
        }
    }

    if (esPrimo) 
    {
        cout << numero << " es un número primo." << endl;
    } else 
    {
        cout << numero << " no es un número primo." << endl;
    }

    return 0;
}