#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;
    cout << "Ingresa 3 numeros: ";
    cin >> n1 >> n2 >> n3;

    if (n1 == 1 && n2 == 2 && n3 == 3) {
        cout << "Tu acceso es permitido\n";
    } else {
        cout << "Tu acceso no es permitido\n";
    }

    return 0;
}