// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas 
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 08/09/2025
// Número de ejercicio: 1

#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() 
{
    int N;
    int frecuencia_pares = 0;

    cout << "Ingresa el número de lanzamientos del dado: ";
    cin >> N;

    srand(time(0));

    for (int i = 0; i < N; i++) 
    {
        int lanzamiento = rand() % 6 + 1; 
        if (lanzamiento % 2 == 0) 
        {
            frecuencia_pares++;
        }
    }

    cout << "Frecuencia de caras pares: " << frecuencia_pares << endl;

    return 0;
}