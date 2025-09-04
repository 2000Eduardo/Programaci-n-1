// Materia: Programacion I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Disenio Digital
// Fecha creacion: 03/08/2025
// Numero de ejercicio: 21

#include <iostream>
using namespace std;

int multiplicar(int a, int b) 
{
    int resultado = 0;

    for (int i = 0; i < b; i++) 
    {
        resultado += a;
    }

    return resultado;
}

int main() 
{
    int num1, num2;

    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;

    int producto = multiplicar(num1, num2);

    cout << "El producto de " << num1 << " y " << num2 << " es: " << producto << endl;

    return 0;
}