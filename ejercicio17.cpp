#include <iostream>
using namespace std;

int main() {
    int num[100];

    for (int i = 0; i < 100; i++) {
        num[i] = i + 1;
    }

    for (int i = 0; i < 100; i++) {
        cout << num[i] << endl;
    }

    return 0;
}
