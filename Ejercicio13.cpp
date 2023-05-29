#include <iostream>
using namespace std;
int main() {
    int n;
    int suma = 0;

    cout << "Ingrese la cantidad de enteros a sumar seguido de los valores: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int numero;
        cout << "Ingrese el entero #" << i << ": ";
        cin >> numero;

        suma += numero;
    }

    cout << "La suma de los " << n << " enteros es: " << suma <<endl;

    return 0;
}
