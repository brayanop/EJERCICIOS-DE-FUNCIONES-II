//Crea un programa que genere y muestre una serie de números aleatorios entre 0 y un número máximo especificado por el usuario
#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int N;
    int valor;

    cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
    cin >> N;
    
    cout << "Ingrese el valor maximo permitido para los numeros: ";
    cin >> valor;

    cout << "Numeros aleatorios generados:" << endl;
    for (int i = 0; i < N; i++) {
        int num = rand() % valor + 1; 
        cout << num << endl;
    }

    return 0;
}
