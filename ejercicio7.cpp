#include <iostream>
using namespace std;

int main() 
{
    int ar, bs, l, al, bsm, k;
    cout << "De que figura quiere sacar el area:\n";
    cout << "1.-Triangulo 2.-Trapecio 3.-Rectangulo\n";
    cin >> k;
    
    if (k == 1) {
        cout << "Ingresa la base de tu triangulo: ";
        cin >> bs;
        cout << "Ingresa la altura del triangulo: ";
        cin >> al;
        ar = (bs * al) / 2;
        cout << "El area de tu triangulo es: " << ar << endl;
    }
    else if (k == 2) {
        cout << "Ingresa la base mayor de tu trapecio: ";
        cin >> bsm;
        cout << "Ingresa la base menor del trapecio: ";
        cin >> bs;
        cout << "Ingresa la altura del trapecio: ";
        cin >> al;
        ar = ((bsm + bs) * al) / 2;  
        cout << "El area de tu trapecio es: " << ar << endl;
    }
    else if (k == 3) {
        cout << "Ingresa la base de tu rectangulo: ";
        cin >> bs;
        cout << "Ingresa la altura del rectangulo: ";
        cin >> al;
        ar = bs * al;
        cout << "El area de tu rectangulo es: " << ar << endl;
    }

    return 0;
}
