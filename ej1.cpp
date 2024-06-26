#include<bits/stdc++.h>
#include"funciones.h"
using namespace std;
int main()
{
    float radio;
    float Area;
    cout<<"Ingrese el radio del circulo :"<< endl;
    cin>> radio;
    Area = calculo_Acirculo(radio);
    cout<<"El area del circulo es:"<< Area;
    return 0;
}