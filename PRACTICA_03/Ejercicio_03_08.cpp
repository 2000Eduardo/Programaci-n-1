// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 10/09/2025
// Número de ejercicio: 8

#include <iostream>
using namespace std;

void convertir_dinero(int monto) 
{
    int billetes[] = {200, 100, 50, 20, 10};
    int monedas[] = {5, 2, 1};

    cout << "Para " << monto << " Bs:" << endl;

    for (int billete : billetes) 
    {
        if (monto >= billete) 
        {
            cout << monto / billete << " billete(s) de " << billete << " Bs" << endl;
            monto %= billete;
        }
    }

    for (int moneda : monedas) 
    {
        if (monto >= moneda) 
        {
            cout << monto / moneda << " moneda(s) de " << moneda << " Bs" << endl;
            monto %= moneda;
        }
    }
}

int main() 
{
    int monto;
    cout << "Ingresa el monto en Bs: ";
    cin >> monto;
    convertir_dinero(monto);
    return 0;
}