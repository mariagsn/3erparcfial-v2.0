#include <iostream>
#include <conio.h> 
#include <windows.h> 

using namespace std;

#define COLOR_MENUONE 13
#define COLOR_DEFAULT 15
#define COLOR_MENUSITODOS 9
#define COLOR_SELECTION 11
#define COLOR_MONROE 10

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void menu() {
    setColor(COLOR_MENUONE);
    cout << "Seleccione la figura geometrica para calcular el area:\n";
    setColor(COLOR_MENUSITODOS);
    cout << "1. Cuadrado\n";
    cout << "2. Rectangulo\n";
    cout << "3. Triangulo\n";
    cout << "4. Salir\n";
    setColor(COLOR_DEFAULT);
}

void areaCuadrado() {
    float lado;
    cout << "Ingrese la longitud del lado del cuadrado: ";
    cin >> lado;
    cout << "El area del cuadrado es: " << lado * lado << endl;
}

void areaRectangulo() {
    float largo, ancho;
    cout << "Ingrese la longitud del largo del rectangulo: ";
    cin >> largo;
    cout << "Ingrese la longitud del ancho del rectangulo: ";
    cin >> ancho;
    cout << "El area del rectangulo es: " << largo * ancho << endl;
}

void areaTriangulo() {
    float base, altura;
    cout << "Ingrese la longitud de la base del triangulo: ";
    cin >> base;
    cout << "Ingrese la longitud de la altura del triangulo: ";
    cin >> altura;
    cout << "El area del triangulo es: " << (base * altura) / 2 << endl;
}

int main() {
    int opcion;
    do {
        system("cls");
        menu();
        opcion = getch() - '0'; 
        system("cls");
        switch(opcion) {
            case 1:
                setColor(COLOR_SELECTION);
                areaCuadrado();
                setColor(COLOR_DEFAULT);
                break;
            case 2:
                setColor(COLOR_SELECTION);
                areaRectangulo();
                setColor(COLOR_DEFAULT);
                break;
            case 3:
                setColor(COLOR_SELECTION);
                areaTriangulo();
                setColor(COLOR_DEFAULT);
                break;
            case 4:
                setColor(COLOR_MONROE);
                cout << "Saliendo del programa...\n";
                setColor(COLOR_DEFAULT);
                break;
            default:
                setColor(COLOR_MONROE);
                cout << "Opcion no valida. Intente de nuevo.\n";
                setColor(COLOR_DEFAULT);
        }
        if(opcion != 4) {
            cout << "Presione cualquier tecla para continuar...\n";
            getch();
        }
    } while(opcion != 4);

    return 0;
}
