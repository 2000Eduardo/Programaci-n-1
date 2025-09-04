// Materia: Programacion I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Disenio Digital
// Fecha creacion: 03/08/2025
// Numero de ejercicio: 23

#include <iostream>
using namespace std;

int main() 
{
    int numero;
    cout << "Ingresa un número entero: ";
    cin >> numero;

    int numeroOriginal = numero;
    int reverso = 0;

    if (numero == 0) 
    {
        reverso = 0;
    } else 
    {
        if (numero < 0) 
        {
            numero = -numero; 
        }

        while (numero > 0) 
        {
            int digito = numero % 10; 
            reverso = reverso * 10 + digito; 
            numero /= 10;
        }

        if (numeroOriginal < 0) 
        {
            cout << "-";
        }
    }

    cout << "El número al revés es: " << reverso << endl;

    return 0;
}