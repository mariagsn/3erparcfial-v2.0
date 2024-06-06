#include <iostream>
using namespace std;

int main() {
    int hora;
    cout << "Escribe la hora del dia: ";
    cin >> hora;
    
    if (hora < 12) {
        cout << "Buenos dias";
    } else if (hora < 19) {
        cout << "Buenas tardes";
    } else {
       cout << "Buenas noches";
    }
    
    return 0;
}