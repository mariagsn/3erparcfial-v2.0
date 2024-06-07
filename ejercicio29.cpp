#include <iostream>
#include <string>

int main() {
    std::string n;
    std::string contra;
    int precioUnitario, cantidad;
    int intentos = 3;
    int total = 0;

    do {
        std::cout << "Introduce tu nombre: ";
        std::cin >> n;

        std::cout << "Introduce tu contraseña: ";
        std::cin >> contra;

        if (n == "maria" && contra == "2b40") {
            std::cout << "Bienvenido al sistema.";
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                std::cout << "Nombre de usuario o contraseña incorrectos. Te quedan " << intentos << " intentos.";
            } else {
                std::cout << "Se ha superado el número de intentos permitido.";
                return 0;
            }
        }
    } while (true);

    std::cout << "Para terminar introduce la cantidad de 0.";
    std::cout << "Ingresa la cantidad de los artículos: ";
    std::cin >> cantidad;

    while (cantidad != 0) {
        std::cout << "Ingresa el precio unitario: ";
        std::cin >> precioUnitario;

        if (cantidad < 0 || precioUnitario < 0) {
            std::cout << "Las cantidades no son válidas, ingresa otra cantidad: ";
        } else {
            int preci = cantidad * precioUnitario;
            total += preci;
        }

        std::cout << "\nCantidad de artículos: ";
        std::cin >> cantidad;
    }

    std::cout << "Tu total es de: " << total;

    return 0;
}