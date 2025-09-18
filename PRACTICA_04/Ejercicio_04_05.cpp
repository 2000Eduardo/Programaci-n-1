// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 17/09/2025
// Número de ejercicio: 5

#include <iostream>
using namespace std;

double calcular_salario(double horas_trabajadas, double tarifa_por_hora) 
{
    return horas_trabajadas * tarifa_por_hora;
}

double calcular_bonificacion(double horas_trabajadas, double tarifa_por_hora) 
{
    if (horas_trabajadas > 8) 
    {
        double horas_extras = horas_trabajadas - 8;
        return horas_extras * tarifa_por_hora * 1.5; // Bonificación del 50% sobre la tarifa
    }
    return 0;
}

int main() 
{
    double horas_trabajadas, tarifa_por_hora;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horas_trabajadas;
    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifa_por_hora;

    double salario = calcular_salario(horas_trabajadas, tarifa_por_hora);
    double bonificacion = calcular_bonificacion(horas_trabajadas, tarifa_por_hora);

    cout << "Salario del trabajador: " << salario << endl;
    cout << "Salario bonificación: " << bonificacion << endl;

    return 0;
}