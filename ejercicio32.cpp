#include <iostream>
using namespace std;

int main() {
    // Declaramos el arreglo con un tamaño de 5 posiciones
    int num[5];

    // A cada posición le asignamos un dato con un ciclo for
    for (int i = 0; i < 5; i++) {
        // Pedimos los datos
        cout << "Digite un número para la posición " << i << ": ";
        cin >> num[i]; // Capturamos los números ingresados directamente en el arreglo
    }

    // Imprimimos los datos asignados con un ciclo for
    for (int i = 0; i < 5; i++) {
        cout << "El dato en la posición " << i << " es: " << num[i] << endl;
    }

    return 0;
}