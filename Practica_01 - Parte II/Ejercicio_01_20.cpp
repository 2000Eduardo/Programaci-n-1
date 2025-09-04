// Materia: Programacion I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Disenio Digital
// Fecha creacion: 03/08/2025
// Numero de ejercicio: 20

#include <iostream>
using namespace std;

int main() 
{
    int numero;
    int contador = 0;

    cout << "Ingresa un número entero: ";
    cin >> numero;

    if (numero == 0) 
    {
        contador = 1;
    } else 
    {
        if (numero < 0) 
        {
            numero = -numero;
        }

        while (numero > 0) 
        {
            numero /= 10; 
            contador++;   
        }
    }

    cout << "La cantidad de dígitos es: " << contador << endl;

    return 0;
}