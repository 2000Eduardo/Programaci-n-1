// Materia: Programación I, Paralelo 4
// Autor: Eduardo Erick Miguel Gomez Rojas
// Fecha creación: 17/09/2025
// Número de ejercicio: 7

#include <iostream>
using namespace std;

// Función para calcular el MCD usando el Algoritmo de Euclides
int calcular_mcd(int m, int n) 
{
    while (n != 0) 
    {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

// Función para calcular el MCM
int calcular_mcm(int m, int n, int mcd) 
{
    return (m * n) / mcd;
}

int main() 
{
    int m, n;

    cout << "Ingrese dos enteros positivos (m y n): ";
    cin >> m >> n;

    // Aseguramos que m sea mayor o igual que n
    if (m < n) 
    {
        swap(m, n);
    }

    int mcd = calcular_mcd(m, n);
    int mcm = calcular_mcm(m, n, mcd);

    cout << "MCD(" << m << ", " << n << ") = " << mcd << endl;
    cout << "MCM(" << m << ", " << n << ") = " << mcm << endl;

    return 0;
}