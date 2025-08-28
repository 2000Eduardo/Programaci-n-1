// Materia: Programación I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 28/08/2025
// Número de ejercicio: 5

#include <iostream>
using namespace std;

int main() 
{
    float grados_centigrados, kelvin;

    cout << "Ingresa la temperatura en grados centígrados: ";
    cin >> grados_centigrados;

    kelvin = grados_centigrados + 273.15;

    cout << "La temperatura en Kelvin es: " << kelvin << endl;

    return 0;
}