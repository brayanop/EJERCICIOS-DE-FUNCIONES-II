#include<iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int suma(int a,int b){
	return a+b;
}
int resta(int a,int b){
	return a-b;
}
float calculo_Acirculo(float R){
	float area = M_PI * pow (R,2);
	return area;
}
void num_aletorio (int N,int valor ){
cout << "Numeros aleatorios generados:" << endl;	
for (int i = 0; i < N; i++) {
        int num = rand() % valor + 1; 
        cout << num << endl;
    }
	}
float calculo_hipotenusa (float a, float b){
    float suma = a*a + b*b;
    float c = sqrt(suma);
    return c;
}
void calculo_raices(int a, int b, int c, float &raiz1, float &raiz2) {
    int discriminante = b * b - 4 * a * c;

    if (discriminante < 0) {
        cout << "El discriminante es negativo. Las raíces son complejas" << endl;
        raiz1 = 0;
        raiz2 = 0;
    } else {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
    }
}
