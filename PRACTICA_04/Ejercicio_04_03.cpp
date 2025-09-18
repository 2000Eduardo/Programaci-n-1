// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 17/09/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

void modificar_valores(int valor, int &referencia) 
{
    valor *= 2;
    referencia += 10;
    cout << "Dentro de la función: valor = " << valor << ", referencia = " << referencia << endl;
}

int main() 
{
    int num1 = 5;
    int num2 = 20;

    cout << "Antes de modificar: num1 = " << num1 << ", num2 = " << num2 << endl;

    modificar_valores(num1, num2);

    cout << "Después de modificar: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}