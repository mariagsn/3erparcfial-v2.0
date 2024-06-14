#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int filas = 2;
    int columnas = 9;
    int matriz[filas][columnas];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 10; 
        }
    }
    cout << "Matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}