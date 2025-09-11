// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 10/09/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

bool es_bisiesto(int anio) 
{
    return (año % 4 == 0 && año % 100 != 0) || (año % 400 == 0);
}

int dias_en_mes(int anio, int mes) 
{
    if (mes == 2) 
    { 
        return es_bisiesto(anio) ? 29 : 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) 
    {
        return 30; 
    } else 
    {
        return 31; 
    }
}

int main() 
{
    int anio, mes;

    cout << "Ingresa el año: ";
    cin >> anio;
    cout << "Ingresa el mes (1-12): ";
    cin >> mes;

    int dias = dias_en_mes(anio, mes);
    cout << "El mes " << mes << " del año " << anio << " tiene " << dias << " días." << endl;

    return 0;
}