// Materia: Programacion I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Disenio Digital
// Fecha creacion: 03/08/2025
// Numero de ejercicio: 22

#include <iostream>
using namespace std;

int main() 
{
    int numero1, numero2;

    cout << "Ingresar el primer número: ";
    cin >> numero1;
    cout << "Ingresar el segundo número: ";
    cin >> numero2;

    if (numero1 % numero2 == 0) 
    {
        cout << numero1 << " es múltiplo de " << numero2 << endl;
    } else if (numero2 % numero1 == 0) 
    {
        cout << numero2 << " es múltiplo de " << numero1 << endl;
    } else 
    {
        cout << "Ninguno es múltiplo del otro." << endl;
    }

    return 0;
}