#include <iostream>
using namespace std;
int main() {
    int contador = 1;
    int numero;
    int maximo = 0;

    while (contador <= 10) {
        cout << "Ingrese el número " << contador << ": ";
        cin >> numero;

        if (numero > maximo) {
            maximo = numero;
        }

        contador++;
    }

    cout << "El número más grande es: " << maximo <<endl;

    return 0;
}
