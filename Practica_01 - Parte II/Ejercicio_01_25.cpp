// Materia: Programacion I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Disenio Digital
// Fecha creacion: 03/08/2025
// Numero de ejercicio: 25

#include <iostream>
using namespace std;

int main() 
{
    int numero;
    char respuesta;

    do 
    {
        cout << "Ingresa un número para mostrar su tabla de multiplicar: ";
        cin >> numero;

        cout << "Tabla de multiplicar de " << numero << ":" << endl;
        for (int i = 1; i <= 10; i++) 
        {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }

        cout << "¿Desea calcular otra tabla? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 's' || respuesta == 'S');

    cout << "Gracias por usar el programa." << endl;

    return 0;
}