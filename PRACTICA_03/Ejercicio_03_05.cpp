// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 10/09/2025
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

float calcular_promedio_ponderado(int calificaciones[], int pesos[]) 
{
    float suma_ponderada = 0;
    int suma_pesos = 0;
    for (int i = 0; i < 4; i++) 
    {
        suma_ponderada += calificaciones[i] * pesos[i];
        suma_pesos += pesos[i];
    }
    return suma_ponderada / suma_pesos;
}

int main() 
{
    srand(time(0));
    int pesos[4] = {10, 20, 30, 40};
    int calificaciones[4];

    for (int &cal : calificaciones) 
    {
        cal = rand() % 100 + 1;
    }

    float promedio = calcular_promedio_ponderado(calificaciones, pesos);
    cout << "Promedio ponderado: " << promedio << endl;

    return 0;
}