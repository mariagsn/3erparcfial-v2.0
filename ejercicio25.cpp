#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int mayor, menor, suma;

    cout << "Ingrese 10 numeros:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    mayor = menor = numeros[0];
    for (int i = 1; i < 10; ++i) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    suma = 0;
    for (int i = 0; i < 10; ++i) {
        suma += numeros[i];
    }

    cout << "El mayor numero es: " << mayor << "\n";
    cout << "El menor numero es: " << menor <<"\n";
    cout << "La suma de los numeros es: " << suma <<"\n" ;

    return 0;
}
