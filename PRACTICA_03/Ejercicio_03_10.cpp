// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 10/09/2025
// Número de ejercicio: 10

#include <iostream>
using namespace std;

double calcular_tarifa(double km_recorridos) 
{
    const double tarifa_base = 10.0; 
    const double precio_por_km = 2.0; 
    double total = tarifa_base + (km_recorridos * precio_por_km);

    if (km_recorridos > 10) 
    {
        total *= 0.9; 
    }

    return total;
}

int main() 
{
    double km;

    cout << "Ingresa la distancia recorrida en km: ";
    cin >> km;

    double tarifa = calcular_tarifa(km);
    cout << "El precio del viaje en taxi es: " << tarifa << " Bs." << endl;

    return 0;
}