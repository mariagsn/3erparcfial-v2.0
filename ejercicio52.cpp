#include <iostream>
using namespace std;

// Gabriel y Maria Guadalupe hicieron la funcion de calcular promedio
float calcularpromedio(float cal1, float cal2, float cal3) {
    float promedio = (cal1 * 0.20 + cal2 * 0.20 + cal3 * 0.60);
    return promedio;
}

// Luisa y Santiago crearon función para encontrar la calificación más alta
float calificacionMaxima(float cal1, float cal2, float cal3) {
    if (cal1 >= cal2 && cal1 >= cal3) {
        return cal1;
    } else if (cal2 >= cal1 && cal2 >= cal3) {
        return cal2;
    } else {
        return cal3;
    }
}

int main() {
    char repetir;

    do {
        float cal1, cal2, cal3; // Leonardo realizó la entrada de los números y el repetir con la letra c
        cout << "Ingresa tus 3 calificaciones: ";
        cin >> cal1 >> cal2 >> cal3;

        float prom = calcularpromedio(cal1, cal2, cal3);
        float maxima = calificacionMaxima(cal1, cal2, cal3);

        cout << "El promedio es: " << prom << endl;
        cout << "La calificación más alta es: " << maxima << endl;

        cout << "Para repetir, escribe 'c'; de lo contrario, escribe cualquier otra tecla: ";
        cin >> repetir;
    } while (repetir == 'c');

    return 0;
}
