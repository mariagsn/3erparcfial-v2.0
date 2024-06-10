#include <iostream>
#include <cmath> 
using namespace std;

bool esPrimo(int nm) {

    if (nm < 2) {
        return false;
    }
    int raiz = sqrt(nm);
    for (int i = 2; i <= raiz; ++i) {
        if (nm % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cout << "Introduce un número: ";
    cin >> n;

    if (esPrimo(n)) {
        cout << n << " es primo." << "\n";
    } else {
        cout << n << " no es primo." << "\n";
    }

    return 0;
}

