// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 10/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

float calcular_IMC(float peso, float altura) 
{
    return peso / (altura * altura);
}

int main() 
{
    float peso, altura;

    cout << "Ingresa el peso en kilogramos: ";
    cin >> peso;

    cout << "Ingresa la altura en metros: ";
    cin >> altura;

    float imc = calcular_IMC(peso, altura);
    cout << "El Índice de Masa Corporal es: " << imc << endl;

    return 0;
}