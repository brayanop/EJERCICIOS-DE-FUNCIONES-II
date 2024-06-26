//Crea un programa que calcule la hipotenusa de un triángulo rectángulo utilizando la fórmula de Pitágoras. Solicita al usuario los valores de los catetos y utiliza la función sqrt de cmath para calcular la raíz cuadrada de la suma de los cuadrados de los catetos. Muestra el resultado de la hipotenusa calculada.
#include<bits/stdc++.h>
#include"funciones.h"
using namespace std;
int main()
{
    float cateto_A, cateto_B;
    float hipotenusa;
    cout<<"Ingrese el primer cateto :"<< endl;
    cin>> cateto_A;
    cout<<"Ingrese el segundo cateto:"<< endl;
    cin>> cateto_B;
    hipotenusa = calculo_hipotenusa(cateto_A,cateto_B);
    cout<<"la hipotenusa es:"<< hipotenusa;
    return 0;
}
