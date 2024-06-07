#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    int pot, num;
    
    cout << "Ingrese el número que quiere elevar a una potencia: ";
    cin >> num;  
    cout << "Ingrese a qué potencia lo quiere elevar: ";
    cin >> pot;  
 
 
    int resul = pow(num, pot);

    cout << "El resultado de su potencia es: " << resul <<"\n";

    return 0;
}
