// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 17/09/2025
// Número de ejercicio: 9

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Ingrese el número de vendedoras: ";
    cin >> n;

    double sueldo_basico, total_vendido, comision;

    for (int i = 1; i <= n; ++i) 
    {
        cout << "Ingrese el sueldo básico de la vendedora " << i << ": ";
        cin >> sueldo_basico;

        cout << "Ingrese el total vendido por la vendedora " << i << ": ";
        cin >> total_vendido;

        comision = total_vendido * 0.10; 
        double sueldo_total = sueldo_basico + comision;

        cout << "Vendedora " << i << ": " << endl;
        cout << "Sueldo total: " << sueldo_total << " Bs" << endl;
        cout << "Comisión extra: " << comision << " Bs" << endl << endl;
    }

    return 0;
}