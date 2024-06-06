#include <iostream>

using namespace std;

int main() {
    int horas, salario, extra, total;

    cout << "Ingresa la cantidad de horas trabajadas por semana: ";
    cin >> horas;

    cout << "Ingresa la cantidad de su salario por hora: ";
    cin >> salario;

    if (horas <= 40) {
        total = salario * horas;
        cout << "El pago total es de " << total << '\n';
    } 
    else if (horas <= 50) {
        extra = salario * 1.5;
        total = (40 * salario) + ((horas - 40) * extra);
        cout << "El pago total es de " << total << '\n';
    } 
    else {
        extra = salario * 2;
        total = (40 * salario) + (10 * salario * 1.5) + ((horas - 50) * extra);
        cout << "El pago total es de " << total << '\n';
    }

    return 0;
}