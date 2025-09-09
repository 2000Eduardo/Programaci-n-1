// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas 
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 08/09/2025
// Número de ejercicio: 3

#include <iostream>
#include <cstdlib>
#include <ctime>   
using namespace std;

int calcular_factorial(int n) 
{
    int factorial = 1;
    for (int i = 1; i <= n; i++) 
    {
        factorial *= i; 
    }
    return factorial;
}

int main() 
{
    srand(time(0));
    int numero_aleatorio = rand() % 10 + 1; 

    int factorial = calcular_factorial(numero_aleatorio); 

    cout << "Número aleatorio: " << numero_aleatorio << endl;
    cout << "Factorial de " << numero_aleatorio << " es: " << factorial << endl;
    return 0;
}