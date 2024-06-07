#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char nom[20];
    char cont[20];
    int intentos = 3;

    do {
        cout << "Introduce tu nombre: ";
        cin >> nom;

        cout << "Introduce tu contraseña: ";
        cin >> cont;

        if (strcmp(nom, "maria") == 0 && strcmp(cont, "2b40") == 0) {
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

    return 0;
}