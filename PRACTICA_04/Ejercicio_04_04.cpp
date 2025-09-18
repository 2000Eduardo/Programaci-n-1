// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 17/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

double convertir_celsius_a_fahrenheit(double celsius) 
{
    return (celsius * 9.0 / 5.0) + 32;
}

double mayor_temperatura(double temp1, double temp2) 
{
    return (temp1 > temp2) ? temp1 : temp2;
}

int main() 
{
    double celsius = 25;
    double fahrenheit = convertir_celsius_a_fahrenheit(celsius);
    cout << celsius << " grados Celsius son " << fahrenheit << " grados Fahrenheit." << endl;

    double temp1 = 30;
    double temp2 = 25;
    double mayor = mayor_temperatura(temp1, temp2);
    cout << "La mayor temperatura es: " << mayor << " grados." << endl;

    return 0;
}