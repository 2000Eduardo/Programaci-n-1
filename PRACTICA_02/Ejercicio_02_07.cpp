// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas 
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 08/09/2025
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;

int main() 
{
    int N;
    cout << "Ingresa el número total de niños (N): ";
    cin >> N;

    srand(time(0));

    int n1, n2, n3;

    n1 = rand() % (N + 1); 
    n2 = rand() % (N - n1 + 1); 
    n3 = N - n1 - n2;

    int consumo_pañales = (n1 * 6) + (n2 * 3) + (n3 * 2);

    cout << "Niños de 1 año: " << n1 << endl;
    cout << "Niños de 2 años: " << n2 << endl;
    cout << "Niños de 3 años: " << n3 << endl;
    cout << "Consumo total de pañales por día: " << consumo_pañales << " pañales." << endl;

    return 0;
}
