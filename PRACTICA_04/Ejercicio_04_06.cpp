// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 17/09/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

bool es_primo(int num) 
{
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) 
    {
        if (num % i == 0) return false;
    }
    return true;
}
int sumar_digitos_distintos_de_cero(int numero) 
{
    int suma = 0;
    while (numero > 0) 
    {
        int digito = numero % 10;
        if (digito != 0) 
        {
            suma += digito;
        }
        numero /= 10;
    }
    return suma;
}

int main() 
{
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    int suma_digitos = sumar_digitos_distintos_de_cero(numero);
    cout << "Suma de los dígitos distintos de cero: " << suma_digitos << endl;

    if (es_primo(suma_digitos)) 
    {
        cout << "La suma de los dígitos es un número primo." << endl;
    } else 
    {
        cout << "La suma de los dígitos no es un número primo." << endl;
    }

    return 0;
}