// Materia: Programación I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 28/08/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

int main() 
{
    float radio;
    float volumen;

    cout << "Ingresa el radio de la esfera: ";
    cin >> radio;

    volumen = (4.0 / 3.0) * 3.14159 * (radio * radio * radio);

    cout << "El volumen de la esfera es: " << volumen << endl;

    return 0;
}