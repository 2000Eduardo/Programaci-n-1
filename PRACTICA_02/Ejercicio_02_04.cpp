// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas 
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 08/09/2025
// Número de ejercicio: 4

#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() 
{
    srand(time(0));
    int numero_pensado = rand() % 51;
    int intento, intentosRestantes = 5;

    cout << "Estoy pensando en un número entre 0 y 50." << endl;

    while (intentos_restantes > 0) 
    {
        cout << "Intento " << (6 - intentos_restantes) << ": ";
        cin >> intento;

        if (intento == numero_pensado) 
        {
            cout << "¡Felicitaciones! Adivinaste el número." << endl;
            return 0; 
        } 
        else if (intento < numero_pensado) 
        {
            cout << "El número está entre " << intento << " y 50." << endl;
        } 
        else 
        {
            cout << "El número está entre 0 y " << intento << "." << endl;
        }

        intentos_restantes--; 
    }

    cout << "Lo siento, no adivinaste el número. Era: " << numero_pensado << endl;

    return 0;
}