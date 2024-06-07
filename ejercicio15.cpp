#include <iostream>
using namespace std;

#define precioe 70

int main() {
    int edad;
    float precio;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    
    if (edad < 5) {
        precio = precioe * 0.4;
    } else if (edad > 60) {
        precio = precioe * 0.45;
    } else {
        precio = precioe;
    }
    
    cout << "El precio de la entrada es de: " << precio << " pesos";
    
    return 0;
}