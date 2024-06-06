#include <iostream>
using namespace std;
int main() {
    int num, sum = 0, cont = 0;
    
    do {
        cout << "Introduce un numero 0 para finalizar: ";
        cin >> num;
        
        if(num != 0) {
            cout << "Has introducido el numero: " << num;
            sum += num;
            cont++;
        }
    } while(num != 0);
    
    cout << "Se ha introducido el numero 0";
    cout << "La cantidad de numeros es de: " << cont;
    cout << "La suma de los numeros es: " << sum;
    
    return 0;
}