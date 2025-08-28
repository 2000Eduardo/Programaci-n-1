// Materia: Programación I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 28/08/2025
// Número de ejercicio: 7

#include <iostream>
using namespace std;

int main() 
{
    char letra;

    cout << "Ingresa una letra: ";
    cin >> letra;

    if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z')) 
    {
        
        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ||
            letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') 
        {
            cout << "La letra es una vocal." << endl;
        } else 
        {
            cout << "La letra es una consonante." << endl;
        }
    } else 
    {
        cout << "El carácter ingresado es especial." << endl;
    }

    return 0;
}