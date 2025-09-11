// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 10/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

string es_par_o_impar(int numero) 
{
    if (numero % 2 == 0) 
    {
        return "Par";
    } else 
    {
        return "Impar";
    }
}

int main() 
{
    int numero;

    cout << "Ingresa un número: ";
    cin >> numero;

    string resultado = es_par_o_impar(numero);
    cout << "El número " << numero << " es " << resultado << "." << endl;

    return 0;
}