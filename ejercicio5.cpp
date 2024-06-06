#include <iostream>

int main() {
    int horas, salario, extra, total;

    std::cout << "Ingresa la cantidad de horas trabajadas por semana: ";
    std::cin >> horas;

    std::cout << "Ingresa la cantidad de su salario por hora: ";
    std::cin >> salario;

    if (horas <= 40) {
        total = salario * horas;
        std::cout << "El pago total es de " << total << std::endl;
    } 
    else if (horas <= 50) {
        extra = salario * 1.5;
        total = (40 * salario) + ((horas - 40) * extra);
        std::cout << "El pago total es de " << total << std::endl;
    } 
    else {
        extra = salario * 2;
        total = (40 * salario) + (10 * salario * 1.5) + ((horas - 50) * extra);
        std::cout << "El pago total es de " << total << std::endl;
    }

    return 0;
}