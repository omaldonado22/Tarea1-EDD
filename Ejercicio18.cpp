#include <iostream>
using namespace std;
int main() {
    int altura;
    cout << "Ingrese la altura del rombo: ";
    cin >> altura;

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout <<endl;
    }

    for (int i = altura - 1; i >= 1; i--) {
        for (int j = 1; j <= altura - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout <<endl;
    }

    return 0;
}
