// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 10/09/2025
// Número de ejercicio: 11

#include <iostream>
using namespace std;

double retirar_dinero(double &saldo, double cantidad) 
{
    if (cantidad > saldo) 
    {
        cout << "Saldo insuficiente." << endl;
        return saldo;
    }
    if (static_cast<int>(cantidad) % 10 != 0) 
    {
        cout << "El monto a retirar debe ser múltiplo de 10." << endl;
        return saldo;
    }

    saldo -= cantidad; 
    cout << "Retiro exitoso. Nuevo saldo: " << saldo << " Bs." << endl;
    return saldo;
}

int main() 
{
    double saldo = 1000.0;
    double cantidad;

    cout << "Saldo disponible: " << saldo << " Bs." << endl;
    cout << "Ingresa la cantidad a retirar: ";
    cin >> cantidad;

    retirar_dinero(saldo, cantidad);

    return 0;
}