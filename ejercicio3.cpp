#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Ingresa 3 numeros:\n";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    cout << "Los numeros ordenados de menor a mayor son: " << num1 << " " << num2 << " " << num3 << '\n';

    return 0;
}