#include <iostream>

using namespace std;

int main() {
    int pot, num;
    
    cout << "Ingrese el número que quiere elevar a una potencia: ";
    cin >> num;  
    cout << "Ingrese a qué potencia lo quiere elevar: ";
    cin >> pot;  

    int resul = 1;
    for (int i = 0; i < pot; ++i) {
        resul *= num;
    }

    cout << "El resultado de su potencia es: " << resul << endl;

    return 0;
}
