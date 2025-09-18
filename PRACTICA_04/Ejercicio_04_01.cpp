// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 17/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

void intercambiar_valores(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int x = 5;
    int y = 10;

    cout << "Antes de intercambiar: " << endl;
    cout << "x = " << x << ", y = " << y << endl;

    intercambiar_valores(x, y);

    cout << "Después de intercambiar: " << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}