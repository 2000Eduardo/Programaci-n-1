// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas 
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 08/09/2025
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() 
{
    int N;
    cout << "Ingresa el número de números aleatorios a generar: ";
    cin >> N;

    srand(time(0));

    int suma = 0;
    int mayor = 0;
    int menor = 1001; 

    for (int i = 0; i < N; i++) 
    {
        int numero_aleatorio = rand() % 1000 + 1; 
        suma += numero_aleatorio;

        if (numero_aleatorio > mayor) 
        {
            mayor = numero_aleatorio;
        }
        if (numero_aleatorio < menor) 
        {
            menor = numero_aleatorio;
        }
    }

    float promedio = static_cast<float>(suma) / N;

    cout << "Sumatoria de todos los números: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor valor generado: " << mayor << endl;
    cout << "Menor valor generado: " << menor << endl;

    return 0;
}