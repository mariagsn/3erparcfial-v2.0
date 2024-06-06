#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    switch(numero) {
        case 1:
            cout << "As\n";
            break;
        case 10:
            cout << "Sota\n";
            break;
        case 11:
            cout << "Caballo\n";
            break;
        case 12:
            cout << "Rey\n";
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "No es ninguna figura\n";
            break;
        default:
            out << "Este no es un numero de una baraja española\n";
    }

    return 0;
}