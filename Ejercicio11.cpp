#include <iostream>
using namespace std;
int main() {
    int lado;

    cout << "Ingrese el tamaño del lado del cuadrado (entre 1 y 20): ";
    cin >> lado;

    if (lado < 1 || lado > 20) {
        cout << "Tamaño de lado inválido. El tamaño debe estar entre 1 y 20." <<endl;
        return 0;
    }

    for (int i = 1; i <= lado; i++) {
        for (int j = 1; j <= lado; j++) {
            if (i == 1 || i == lado || j == 1 || j == lado) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout <<endl;
    }

    return 0;
}
