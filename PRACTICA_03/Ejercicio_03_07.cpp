// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 10/09/2025
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generar_datos_alumnos(int N) 
{
    int mayores_de_18 = 0, altos = 0, suma_edad = 0;
    float suma_altura = 0;

    for (int i = 0; i < N; i++) 
    {
        int edad = rand() % 35 + 1;      
        float altura = (rand() % 81 + 120) / 100.0;

        suma_edad += edad;
        suma_altura += altura;

        if (edad > 18) mayores_de_18++;
        if (altura > 1.75) altos++;
    }

    cout << "Edad media: " << static_cast<float>(suma_edad) / N << " años" << endl;
    cout << "Altura media: " << suma_altura / N << " m" << endl;
    cout << "Alumnos mayores de 18 años: " << mayores_de_18 << endl;
    cout << "Alumnos que miden más de 1.75 m: " << altos << endl;
}

int main() 
{
    srand(time(0)); 
    int N;

    cout << "Número de alumnos: ";
    cin >> N;

    generar_datos_alumnos(N);

    return 0;
}