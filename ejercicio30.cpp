#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char nom[20];
    char cont[20];
    int pro, cant;
    int intentos = 3;
    int importe = 0;

    do {
        cout << "Introduce tu nombre: ";
        cin >> nom;

        cout << "Introduce tu contraseña: ";
        cin >> cont;

        if (strcmp(nom, "maria") == 0 && strcmp(cont, "2b38") == 0) {
            cout << "Bienvenido al sistema.\n";
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                cout << "Nombre de usuario o contraseña incorrectos. Te quedan " << intentos << " intentos.\n";
            } else {
                cout << "Se ha superado el número de intentos permitido.\n";
                break;
            }
        }
    } while (intentos > 0);

    cout << "Para terminar, introduce la cantidad de 0.\n\n";
    cout << "Muy bien, ingresa la cantidad de tus artículos vendidos: ";
    cin >> pro;

    while (pro != 0) {
        cout << "¿De qué precio fueron? $";
        cin >> cant;
        if (pro < 0 || cant < 0) {
            cout << "Lo siento, las cantidades no pueden ser negativas. Ingresa otra cantidad.\n\n";
        } else {
            float imp = pro * cant;
            importe += imp;
        }
        cout << "\nCantidad: ";
        cin >> pro;
    }

    cout << "Tu total de los productos es de $" << importe << " pesos.\n";

    return 0;
}
