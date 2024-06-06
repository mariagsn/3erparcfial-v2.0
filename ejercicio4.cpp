#include <iostream>

int main() {
    char car;

    std::cout << "Ingrese un caracter: ";
    std::cin >> car;

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
            std::cout << "El caracter ingresado es una vocal.\n";
            break;
        default:
            std::cout << "El caracter ingresado no es una vocal.\n";
            break;
    }

    return 0;
}