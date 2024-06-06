#include <iostream>

using namespace std;

int main() {
    
    int num[5]; 
    int menor, mayor;
    bool Repetidos = false;

    cout << "Ingrese 5 numeros: ";
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
    }

    menor = mayor = num[0];
    for (int i = 1; i < 5; i++) {
        if (num[i] < menor) {
            menor = num[i];
        } else if (num[i] > mayor) {
            mayor = num[i];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (num[i] == num[j]) {
                Repetidos = true;
                cout << "Numero repetido: " << num[i] << '\n';
                break;
            }
        }
    }

    cout << "El numero menor es: " << menor << '\n';
    cout << "El numero mayor es: " << mayor << '\n';

    if (Repetidos) {
        cout << "Hay numeros repetidos." << '\n';
    } else {
        cout << "No hay numeros repetidos." << '\n';
    }

    return 0;
}
