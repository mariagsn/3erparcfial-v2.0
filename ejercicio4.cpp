#include <iostream>
using namespace std;

int main() {
    char car;

    cout << "Ingrese un caracter: ";
    cin >> car;

    switch (car) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "El caracter ingresado es una vocal.\n";
            break;
        default:
            cout << "El caracter ingresado no es una vocal.\n";
            break;
    }

    return 0;
}