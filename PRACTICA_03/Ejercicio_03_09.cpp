// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 10/09/2025
// Número de ejercicio: 9

#include <iostream>
using namespace std;

void calcular_tiempo(int minutos_trabajados) 
{
    const int jornada_laboral = 8 * 60;
    int diferencia = minutos_trabajados - jornada_laboral;

    if (diferencia > 0) 
    {
        cout << "Tiempo trabajado extra: " << diferencia << " minutos." << endl;
    } else if (diferencia < 0) 
    {
        cout << "Tiempo debido a la empresa: " << -diferencia << " minutos." << endl;
    } else {
        cout << "Tiempo trabajado es exactamente la jornada laboral." << endl;
    }
}

int main() 
{
    int minutos;

    cout << "Ingresa el tiempo trabajado en minutos: ";
    cin >> minutos;

    calcular_tiempo(minutos);

    return 0;
}