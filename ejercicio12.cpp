#include <iostream>
using namespace std;

int main() {
    int num1, num2, total;

    cout << "Dime el primer numero: ";
    cin >> num1;
    cout << "Dime el segundo numero: ";
    cin >> num2;

    if (num2 == 0) {
        cout << "No es posible dividir por cero." << "\n";
        return 1; 
    }

    total = num1 % num2;

    cout << "El total de la division es " << total << "\n";

    if (total != 0) {
        cout << "El numero no es divisible" << "\n";
    } else {
        cout << "El numero es divisible" << "\n";
    }

    return 0;
}
