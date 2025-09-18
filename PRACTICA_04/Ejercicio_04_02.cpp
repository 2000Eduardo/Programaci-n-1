// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 17/09/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;

double calcular_volumen(double radio, double altura = 10) 
{
    return 3.14159 * radio * radio * altura; 
}

int main() 
{
    double radio = 5;

    double volumen = calcular_volumen(radio);
    cout << "El volumen del cilindro con radio " << radio << " y altura por defecto es: " << volumen << endl;

    double altura = 15;
    volumen = calcular_volumen(radio, altura);
    cout << "El volumen del cilindro con radio " << radio << " y altura " << altura << " es: " << volumen << endl;

    return 0;
}