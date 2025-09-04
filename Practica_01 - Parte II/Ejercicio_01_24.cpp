// Materia: Programacion I, Paralelo 4
// Autor: Eduardo Gomez Rojas
// Carnet: 11104404 L.P.
// Carrera del estudiante: Disenio Digital
// Fecha creacion: 03/08/2025
// Numero de ejercicio: 24

#include <iostream>
using namespace std;

int main() 
{
    int opcion;

    do 
    {
        cout << "Menú de opciones:" << endl;
        cout << "1. Opción 1" << endl;
        cout << "2. Opción 2" << endl;
        cout << "3. Opción 3" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccionar una opción: ";
        cin >> opcion;

        if (opcion >= 0 && opcion <= 3) 
        {
            if (opcion == 1) 
            {
                cout << "Has seleccionado la Opción 1." << endl;
            } else if (opcion == 2) 
            {
                cout << "Has seleccionado la Opción 2." << endl;
            } else if (opcion == 3) 
            {
                cout << "Has seleccionado la Opción 3." << endl;
            } else if (opcion == 0) 
            {
                cout << "Saliendo del programa." << endl;
            }
        } else 
        {
            cout << "Por favor selecciona otra opción" << endl;
        }

    } while (opcion != 0);

    return 0;
}