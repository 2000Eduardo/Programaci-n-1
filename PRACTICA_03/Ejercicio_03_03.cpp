// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 10/09/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

bool es_capicua(int numero) 
{
    int original = numero;
    int invertido = 0;

    while (numero > 0) 
    {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    return original == invertido;
}

int main() 
{
    int numero;

    cout << "Ingresa un número: ";
    cin >> numero;

    if (es_capicua(numero)) 
    {
        cout << "El número " << numero << " es capicua." << endl;
    } else 
    {
        cout << "El número " << numero << " no es capicua." << endl;
    }

    return 0;
}