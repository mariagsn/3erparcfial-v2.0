#include <iostream>
#include <vector>

int main() {
    int f, c, acum = 0;

    // Pedir el número de filas
    std::cout << "Digite el numero de filas: ";
    std::cin >> f;

    // Pedir el número de columnas
    std::cout << "Digite el numero de columnas: ";
    std::cin >> c;

    // Declarar la matriz con las dimensiones especificadas
    std::vector<std::vector<int>> matriz(f, std::vector<int>(c));

    // Llenar la matriz con datos proporcionados por el usuario y calcular la suma de la columna 1
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << "Digite dato para la fila " << i + 1 << ", columna " << j + 1 << ": ";
            std::cin >> matriz[i][j];
            if (j == 0) {  // Si estamos en la primera columna
                acum += matriz[i][j];  // Sumar el elemento a la variable acum
            }
        }
    }

    // Mostrar la matriz
    std::cout << "La matriz ingresada es:" << std::endl;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Mostrar la suma de todos los elementos de la columna 1
    std::cout << "Todos los elementos de la columna 1 suman un total de: " << acum << std::endl;

    return 0;
}