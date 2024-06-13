#include <iostream>
#include <vector>

using namespace std;
int main() {
    int t, num, acum = 0;

    // Pedimos el tamaño del vector (arreglo)
    cout << "Digite el tamano del vector (arreglo): ";
    cin >> t;

    // Creamos el arreglo y le pasamos el tamaño ingresado
    vector<int> vector(t);

    // Llenamos el arreglo con un ciclo for
    for (int i = 0; i < t; ++i) {
        // Pedimos los números
        cout << "Digite un numero: ";
        cin >> num;

        vector[i] = num; // Le damos al vector los números ingresados
        acum += vector[i]; // Acumulamos los números y los sumamos
    }

    // Imprimimos todos los datos del arreglo
    for (int i = 0; i < t; ++i) {
        cout << "El dato en la posicion " << i + 1 << " es: " << vector[i] <<endl;
    }

    // Resultado total
    cout << "La suma de todos los numeros es: " << acum << endl;

    return 0;
}