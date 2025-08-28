// Materia: Programación I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 28/08/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

int main() 
{
    float base;
    float altura;
    float area;

    cout << "Ingresa la base del triángulo: ";
    cin >> base;

    cout << "Ingresa la altura del triángulo: ";
    cin >> altura;

    area = (base * altura) / 2;

    cout << "El área del triángulo es: " << area << endl;

    return 0;
}