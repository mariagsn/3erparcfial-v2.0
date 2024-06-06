#include <iostream>
using namespace std;

int main() {
    int a, b, l, al, bm, f;

    cout << "De que figura quieres sacar el area?\n";
    cout << "1.- Calcular el area de un triangulo\n";
    cout << "2.- Calcular el area de un trapecio\n";
    cout << "3.- Calcular el area de un rectangulo\n";
    cin >> f;

    switch (f) {
        case 1:
            cout << "Ingresa la base de tu triangulo: ";
            cin >> b;
            cout << "Ingresa la altura del triangulo: ";
            cin >> al;
            a = (b * al) / 2;
            cout << "El area de tu triangulo es de: " << a;
            break;
        case 2:
            cout << "Ingresa la base mayor de tu trapecio: ";
            cin >> bm;
            cout << "Ingresa la base menor del trapecio: ";
            cin >> b;
            cout << "Ingresa la altura de tu trapecio: ";
            cin >> al;
            a = ((bm + b) * al) / 2;
            cout << "El area de tu trapecio es de: " << a;
            break;
        case 3:
            cout << "Ingresa la base de tu rectangulo: ";
            cin >> b;
            cout << "Ingresa la altura del rectangulo: ";
            cin >> al;
            a = b * al;
            cout << "El area de tu rectangulo es de: " << a;
            break;
        default:
            cout << "Opcion no valida";
            break;
    }

    return 0;
}

