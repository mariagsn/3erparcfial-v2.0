#include <iostream>
#include <cstring>

int main() {
    char n[20];
    char nom[20]; 
    char contra[20];
    int precioUnitario, cantidad;
    int intentos = 3;
    int total = 0;

    do {
        std::cout << "Introduce tu nombre: ";
        std::cin >> n;

        std::cout << "Introduce tu contraseña: ";
        std::cin >> contra;

        if (strcmp(n, "maria") == 0 && strcmp(contra, "2b40") == 0) {
            std::cout << "Bienvenido al sistema.\n"; 
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                std::cout << "Nombre de usuario o contraseña incorrectos. Te quedan " << intentos << " intentos.\n";
            } else {
                std::cout << "Se ha superado el número de intentos permitido.\n";
                return 1; 
            }
        }
    } while (intentos > 0);

    std::cout << "Para terminar, introduce la cantidad de 0\n\n";

    while (true) {
        std::cout << "Ingresa nombre para esta compra: ";
        std::cin >> nom;
        std::cout << "Ingresa la cantidad de los artículos: ";
        std::cin >> cantidad;

        if (cantidad == 0) {
            break;
        } else if (cantidad < 0) {
            std::cout << "Lo siento, las cantidades no pueden ser negativas. Ingresa otra cantidad.\n";
            continue;
        }

        std::cout << "Ingresa el precio unitario del artículo: ";
        std::cin >> precioUnitario;

        if (precioUnitario < 0) {
            std::cout << "Lo siento, los precios no pueden ser negativos. Ingresa otro precio.\n";
            continue;
        }

        total += cantidad * precioUnitario;
    }

    std::cout << "Tu total de los productos es de " << total << " pesos\n";

    return 0;
}