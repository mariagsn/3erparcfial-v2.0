#include <iostream>
using namespace std;

int main() {
    int pro, cant;
    double importe = 0.0;

    cout << "Para terminar, introduce la cantidad de 0.\n\n";
    cout << "Muy bien, ingresa la cantidad de tus artículos vendidos: ";
    cin >> pro;

    while (pro != 0) {
        cout << "¿De qué precio fueron? $";
        cin >> cant;
        if (pro < 0 || cant < 0) {
            cout << "Lo siento, las cantidades no pueden ser negativas. Ingresa otra cantidad.\n\n";
        } else {
            double imp = pro * cant;
            importe += imp;
        }
        cout << "\nCantidad: ";
        cin >> pro;
    }

    cout << "Tu total de los productos es de $" << importe << " pesos.\n";

    return 0;
}

