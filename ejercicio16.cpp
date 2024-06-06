#include <iostream>

using namespace std;

int main() {
    
    int num[5], menor;
    

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el número " << i+1 << ": ";
        cin >> num[i];
    }

  
    menor = num[0];
    for (int i = 1; i < 5; i++) {
        if (num[i] < menor) {
            menor = num[i];
        }
    }

    cout << "El menor número ingresado es: " << menor << "\n";
    
    return 0;
}
