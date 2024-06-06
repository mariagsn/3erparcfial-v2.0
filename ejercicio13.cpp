#include <iostream>
using namespace std;
int main() {
    int x;

    cout << "Ingresa un numero: ";
    cin >> x;

    if (x % 2 == 0) {
        cout << "El numero " << x << " es par" << "\n";
    } else {
        cout << "El numero " << x << " no es par" << "\n";
    }

    if (x % 3 == 0) {
        cout << "El numero " << x << " es divisible por 3" << "\n";
    } else {
        std::cout << "El numero " << x << " no es divisible por 3" << "\n";
    }

    return 0;
}
