// Materia: Programacion I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Disenio Digital
// Fecha creacion: 03/08/2025
// Numero de ejercicio: 18

#include <iostream>
using namespace std;

bool es_primo(int n) 
{
    if (n <= 1) 
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    int contador = 0;
    int numero = 2;

    cout << "Los primeros 100 números primos son:" << endl;

    while (contador < 100) 
    {
        if (es_primo(numero)) 
        {
            cout << numero << " ";
            contador++;
        }
        numero++;
    }

    cout << endl;
    return 0;
}