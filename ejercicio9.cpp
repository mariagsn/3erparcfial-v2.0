#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingresa el numero de terminos que deseas mostrar: ";
    cin >> num;
    cout << "Los numeros son: ";
    for (int i = 1; i <= num; i++) {
        cout << i * 5;
        if (i < num) {
            cout << ", ";  
        }
    }
    cout << "\n";  
    return 0;
}
