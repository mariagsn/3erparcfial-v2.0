#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario;
    cout << "¿Qué usuario eres?" << endl;
    cin >> usuario;
    int opcion;

    if (usuario == "anonimo") {
        cout << "Identificarse" << endl;
        cout << "1. Anónimo" << endl;
        cout << "2. Ver todos los productos a la venta" << endl;
        cout << "0. Salir de la aplicación" << endl;
        cin >> opcion;
        // Aquí puedes añadir el manejo de opciones para anónimo
    } else if (usuario == "registrado") {
        cout << "Registrado" << endl;
        cout << "1. Modificar mis datos personales" << endl;
        cout << "2. Mostrar mis vendedores recomendados" << endl;
        cout << "3. Recomendar un vendedor" << endl;
        cout << "4. Ver todos los productos a la venta" << endl;
        cout << "5. Ver los productos de mis vendedores recomendados" << endl;
        cout << "6. Poner a la venta un producto" << endl;
        cout << "7. Desconectarse (volver a anónimo)" << endl;
        cout << "0. Salir de la aplicación" << endl;
        cin >> opcion;

        // Aquí puedes añadir el manejo de opciones para usuario registrado
        if (opcion == 7) {
            usuario = "anonimo";
            // Repetir el ciclo del menú si es necesario
        }
    } else if (usuario == "administrador") {
        cout << "Administrador" << endl;
        cout << "1. Dar de alta un nuevo usuario" << endl;
        cout << "2. Modificar los datos de un usuario" << endl;
        cout << "3. Mostrar todos los usuarios" << endl;
        cout << "4. Mostrar todos los vendedores recomendados por un usuario" << endl;
        cout << "5. Ver los productos ofrecidos por un vendedor" << endl;
        cout << "6. Mostrar todos los productos a la venta" << endl;
        cout << "7. Desconectarse (volver a anónimo)" << endl;
        cout << "0. Salir de la aplicación" << endl;
        cin >> opcion;

        // Aquí puedes añadir el manejo de opciones para administrador
        if (opcion == 7) {
            usuario = "anonimo";
            // Repetir el ciclo del menú si es necesario
        }
    } else {
        cout << "Usuario no reconocido" << endl;
    }

    return 0;
}