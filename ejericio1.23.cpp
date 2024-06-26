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