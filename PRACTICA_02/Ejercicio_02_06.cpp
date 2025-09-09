// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas 
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 08/09/2025
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

bool es_primo(int numero) 
{
    if (numero <= 1) return false; 
    for (int i = 2; i * i <= numero; i++) 
    {
        if (numero % i == 0) return false; 
    }
    return true; 
}

int main() 
{
    int N;
    cout << "Ingresa el número de números aleatorios a generar: ";
    cin >> N;

    srand(time(0));

    int contador_primos = 0;

    cout << "Números generados: " << endl;

    for (int i = 0; i < N; i++) 
    {
        int numero_aleatorio = rand() % 10000 + 1; 
        cout << numero_aleatorio << " "; 

        if (es_primo(numero_aleatorio) ) 
        {
            contador_primos++; 
        }
    }

    cout << endl;
    cout << "Cantidad de números primos: " << contador_primos << endl;

    return 0;
}