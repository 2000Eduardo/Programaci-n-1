#include <iostream>
using namespace std;

string esParOImpar(int numero) 
{
    if (numero % 2 == 0) 
    {
        return "Par";
    } else 
    {
        return "Impar";
    }
}

int main() 
{
    int numero;

    cout << "Ingresa un número: ";
    cin >> numero;

    string resultado = esParOImpar(numero);
    cout << "El número " << numero << " es " << resultado << "." << endl;

    return 0;
}