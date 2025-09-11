// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 10/09/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;

float celsius_a_fahrenheit(float celsius) 
{
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() 
{
    float celsius;

    cout << "Ingresa la temperatura en grados Celsius: ";
    cin >> celsius;

    float fahrenheit = celsius_a_fahrenheit(celsius);
    cout << celsius << " grados Celsius son " << fahrenheit << " grados Fahrenheit." << endl;

    return 0;
}