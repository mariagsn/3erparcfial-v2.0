#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Definición de arreglos unidimensionales
    string arreglo1[3];
    int arreglo2[3];

    arreglo1[0] = "Fernando";
    arreglo1[1] = "Oscar";

    arreglo2[0] = 74;
    arreglo2[1] = 56;
    arreglo2[2] = 10;

    int matriz1[2][2] = {{1, 2}, {3, 4}};
    string matriz2[2][2] = {{"A", "B"}, {"C", "D"}};

    cout << "Arreglo 1:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "El dato de la posicion " << i << " es: " << arreglo1[i] << endl;
    }

    cout << "Arreglo 2:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "El dato de la posicion " << i << " es: " << arreglo2[i] << endl;
    }

    cout << "Matriz 1:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "El dato en la posicion (" << i << ", " << j << ") es: " << matriz1[i][j] << endl;
        }
    }

    cout << "Matriz 2:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "El dato en la posicion (" << i << ", " << j << ") es: " << matriz2[i][j] << endl;
        }
    }

    return 0;
}
