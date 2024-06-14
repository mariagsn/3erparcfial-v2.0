#include <iostream>

int main() {
    // Definimos la matriz con 2 filas y 2 columnas
    int matriz[2][2];

    // Asignamos valores a la matriz
    matriz[0][0] = 10;  // Fila 1, columna 1
    matriz[0][1] = 20;  // Fila 1, columna 2
    matriz[1][0] = 30;  // Fila 2, columna 1
    matriz[1][1] = 40;  // Fila 2, columna 2

    // Imprimimos los datos de la matriz
    std::cout << "El dato que hay en la fila 1 y columna 1 es: " << matriz[0][0] << std::endl;
    std::cout << "El dato que hay en la fila 1 y columna 2 es: " << matriz[0][1] << std::endl;
    std::cout << "El dato que hay en la fila 2 y columna 1 es: " << matriz[1][0] << std::endl;
    std::cout << "El dato que hay en la fila 2 y columna 2 es: " << matriz[1][1] << std::endl;

    return 0;
}