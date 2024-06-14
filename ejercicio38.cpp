#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

int main() {
    // Declaramos el arreglo de tamaño 10
    int num[10];

    // Inicializamos la semilla del generador de números aleatorios
    std::srand(std::time(0));

    // Llenamos el arreglo con números aleatorios entre 1 y 100
    for (int i = 0; i < 10; ++i) {
        num[i] = std::rand() % 100 + 1;
    }

    // Imprimimos los datos del arreglo
    for (int i = 0; i < 10; ++i) {
        std::cout << "El numero aleatorio en la posicion " << i + 1 << " es: " << num[i] << std::endl;
    }

    return 0;
}