#include <iostream>
#include <vector>
#include <string>

int main() {
    int n;

    // Pedimos la cantidad de países
    std::cout << "Digite el numero de paises: ";
    std::cin >> n;

    // Creamos el arreglo y le pasamos el tamaño ingresado
    std::vector<std::string> paises(n);

    // Llenamos el arreglo con un ciclo for
    for (int i = 0; i < n; ++i) {
        std::cout << "Digite pais " << i + 1 << ": ";
        std::cin >> paises[i]; // Pedimos el nombre del país y lo almacenamos en el arreglo
    }

    // Pedimos la posición
    int pos;
    std::cout << "Digite la posicion: ";
    std::cin >> pos;

    // Verificamos si la posición es válida
    if (pos >= 1 && pos <= n) {
        // Mostramos el país que se encuentra en la posición digitada
        std::cout << "El pais que hay en la posicion " << pos << " es: " << paises[pos - 1] << std::endl;
    } else {
        std::cout << "Posicion invalida!" << std::endl;
    }

    return 0;
}