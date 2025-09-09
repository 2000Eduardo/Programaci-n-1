#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() 
{
    int N;
    int caras = 0, cruces = 0;

    cout << "Ingresa el número de lanzamientos de la moneda: ";
    cin >> N;

    srand(time(0));

    for (int i = 0; i < N; i++) 
    {
        int lanzamiento = rand() % 2; 
        if (lanzamiento == 0) 
        {
            cruces++;
        } 
        else 
        {
            caras++;
        }
    }

    float porcentaje_caras = (static_cast<float>(caras) / N) * 100;
    float porcentaje_cruces = (static_cast<float>(cruces) / N) * 100;

    cout << "Porcentaje de caras: " << porcentaje_caras << "%" << endl;
    cout << "Porcentaje de cruces: " << porcentaje_cruces << "%" << endl;

    return 0;
}