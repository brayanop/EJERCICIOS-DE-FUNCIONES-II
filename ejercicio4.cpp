//Crea un programa que calcule las raíces de una ecuación cuadrática utilizando la fórmula general
#include <iostream>
#include <cmath>

using namespace std;
int main() {
	float a, b, c;
    float discriminante = b * b - 4 * a * c;
    float raiz_real1, raiz_real2;
    cout << "Ingrese el coeficiente a: ";
    cin >> a;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;
    if (discriminante > 0) {
        raiz_real1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz_real2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las raíces son reales :" << endl;
        cout << "Raiz 1 = " << raiz_real1 << endl;
        cout << "Raiz 2 = " << raiz_real2 << endl;
    } else if (discriminante == 0) {
        raiz_real1 = -b / (2 * a);
        cout << "Las raices son:" << endl;
        cout << "Raices iguales = " << raiz_real1 << endl;
    } else { 
        cout << "Las raíces son complejas.." << endl;
    }
    return 0;
} 
