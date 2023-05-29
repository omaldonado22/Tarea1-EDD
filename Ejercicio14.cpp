#include <iostream>
using namespace std;
int main() {
    int numero;
    int suma = 0;
    int cantidad = 0;

    cout << "Ingrese los enteros (9999 para terminar): ";

    for (;;) {
        cin >> numero;

        if (numero == 9999) {
            break;
        }

        suma += numero;
        cantidad++;
    }

    if (cantidad != 0) {
        double promedio = static_cast<double>(suma) / cantidad;
        cout << "El promedio de los enteros es: " << promedio <<endl;
    } else {
        cout << "No se ingresaron valores para calcular el promedio." <<endl;
    }

    return 0;
}
