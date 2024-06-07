#include <iostream>
using namespace std;

int main() {
    int num, menor = intmax, suma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el número " << i+1 << ": ";
        cin >> num;
        
        suma += num; 
        
        if (num < menor) {
            menor = num; 
        }
    }

    cout << "El menor número ingresado es: " << menor << "\n";
    cout << "La suma de los números ingresados es: " << suma << "\n";

    return 0;
}
