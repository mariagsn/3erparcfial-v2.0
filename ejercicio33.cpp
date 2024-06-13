#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;

    // Pedimos el número de posiciones o tamaño
    cout << "Digite el numero de posiciones: ";
    cin >> n;

    // Creamos el arreglo de nombres con el tamaño ingresado
    vector<string> personas(n);

    // A cada posición le damos un dato con el ciclo for
    for (int i = 0; i < n; ++i) {
        cout << "Digite un nombre para la posicion " << i << ": ";
        cin >> personas[i]; // Leemos el nombre y lo almacenamos en el arreglo
    }

    // Imprimimos los datos asignados con un ciclo for
    for (int i = 0; i < n; ++i) {
        cout << "El dato en la posicion " << i << " es: " << personas[i] <<endl;
    }

    return 0;
}