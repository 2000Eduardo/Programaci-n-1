// Materia: Programacion I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Disenio Digital
// Fecha creacion: 03/08/2025
// Numero de ejercicio: 17

#include <iostream>
using namespace std;

int suma_divisores(int n) 
{
    int suma = 0;
    for (int i = 1; i < n; i++) 
    {
        if (n % i == 0) 
        {
            suma += i;
        }
    }
    return suma;
}

int main() 
{
    int numero1, numero2;
    
    cout << "Ingresa el primer número: ";
    cin >> numero1;
    cout << "Ingresa el segundo número: ";
    cin >> numero2;

    int suma1 = suma_divisores(numero1);
    int suma2 = suma_divisores(numero2);

    if (suma1 == numero2 && suma2 == numero1) 
    {
        cout << numero1 << " y " << numero2 << " son números amigos." << endl;
    } else 
    {
        cout << numero1 << " y " << numero2 << " no son números amigos." << endl;
    }

    return 0;
}