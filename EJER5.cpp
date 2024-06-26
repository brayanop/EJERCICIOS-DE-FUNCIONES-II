// Amplía el ejercicio anterior definiendo una función void llamada calcularRaices que reciba los coeficientes de la ecuación (a, b, c) por valor y las variables donde se almacenarán las raíces por referencia. 
#include <iostream>
#include <cmath>

using namespace std;

void calcularRaices(float a, float b, float c) {
    float discriminante = b * b - 4 * a * c;
    float raiz_real1, raiz_real2;

    if (discriminante > 0) {
        raiz_real1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz_real2 = (-b - sqrt(discriminante)) / (2 * a);
        raiz_imaginaria = 0;
        cout << "Las raíces son reales y diferentes:" << endl;
        cout << "Raiz 1 = " << raiz_real1 << endl;
        cout << "Raiz 2 = " << raiz_real2 << endl;
    } else if (discriminante == 0) {
        raiz_real1 = -b / (2 * a);
        cout << "Las raices son:" << endl;
        cout << "Raices iguales = " << raiz_real1 << endl;
    } else { 
        cout << "Las raíces son complejas:" << endl;
    }
}

int main() {
    float a, b, c;
    cout << "Ingrese el coeficiente a: ";
    cin >> a;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;
    calcularRaices(a, b, c);
    return 0;
} 
