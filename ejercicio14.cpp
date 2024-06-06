#include <iostream>

using namespace std;

int main() {
    
    int num1,iguales,  sum = 0, num2; 
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " es mayor que y no son iguales" << num2 << "\n";
        sum = num1 + num2; 
    } else if (num1 < num2) {
        cout << num1 << " es menor que y no son iguales " << num2 << "\n";
        sum = num1 + num2; 
    } else {
        cout << num1 << " y " << num2 << " son iguales\n";
         iguales = num1 = num2;
    }
    return 0;
}
