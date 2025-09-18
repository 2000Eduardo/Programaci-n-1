// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 17/09/2025
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    int n;
    cout << "Ingrese el número de productos vendidos: ";
    cin >> n;

    double suma_total = 0.0;
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < n; ++i) 
    {
        suma_total += (rand() % 31 + 20);
    }

    double iva = suma_total * 0.13;
    if (suma_total > 2500) suma_total *= 0.95;

    cout << "Suma total de ventas: " << suma_total << " Bs" << endl;
    cout << "Pago del IVA: " << iva << " Bs" << endl;

    return 0;
}