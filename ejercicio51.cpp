#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char n[20];
    char contra[20];
    int precioUnitario, cantidad;
    int intentos = 3;
    int total = 0;
    int numdeventa = 0;

    do {
        cout << "Introduce tu nombre: ";
        cin >> n;

        cout << "Introduce tu contraseña: ";
        cin >> contra;

        if (strcmp(n, "maria") == 0 && strcmp(contra, "2b40") == 0) {
            cout << "Bienvenido al sistema.\n"; 
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                cout << "Nombre de usuario o contraseña incorrectos. Te quedan " << intentos << " intentos.\n";
            } else {
                cout << "Se ha superado el número de intentos permitido.\n";
                return 1; 
            }
        }
    } while (intentos > 0);

    cout << "Para terminar, introduce la cantidad de 0\n\n";

    while (true) {
        cout << "Venta " << ++numdeventa << ":" << endl;
        cout << "Ingresa la cantidad de los artículos: ";
        cin >> cantidad;

        if (cantidad == 0) {
            break;
        } else if (cantidad < 0) {
            cout << "Lo siento, las cantidades no pueden ser negativas. Ingresa otra cantidad.\n";
            continue;
        }

        cout << "Ingresa el precio unitario del artículo: ";
        cin >> precioUnitario;

        if (precioUnitario < 0) {
            cout << "Lo siento, los precios no pueden ser negativos. Ingresa otro precio.\n";
            continue;
        }

        int totalVenta = cantidad * precioUnitario;
        total += totalVenta;
        cout << "El total de esta venta es: " << totalVenta << " pesos\n";
    }

    cout << "Tu total de los productos es de " << total << " pesos\n";

    return 0;
}
