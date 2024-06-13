#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n;

    // Pedimos el tamaño del arreglo
    cout << "Digite el tamaño del arreglo: ";
    cin >> n;

    // Creamos el arreglo de números con el tamaño ingresado
    vector<int> num(n);

    // A cada posición le damos un dato con el ciclo for
    for (int i = 0; i < n; ++i) {
        cout << "Digite un numero para la posicion " << i + 1 << ": ";
        cin >> num[i]; // Leemos el número y lo almacenamos en el arreglo
    }

    // Imprimimos los datos asignados con un ciclo for
    for (int i = 0; i < n; ++i) {
        cout << "El dato en la posicion " << i + 1 << " es: " << num[i] << endl;
    }

    return 0;
}