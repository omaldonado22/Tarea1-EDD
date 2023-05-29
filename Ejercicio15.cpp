#include <iostream>
#include <limits> 
using namespace std;
int main() {
    int n;
    int min = numeric_limits<int>::max(); 

    cout << "Ingrese la cantidad de enteros restantes seguido de los valores: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int numero;
        cout << "Ingrese el entero #" << i << ": ";
        cin >> numero;

        if (numero < min) {
            min = numero;
        }
    }

    if (n > 0) {
        cout << "El entero más pequeño es: " << min <<endl;
    } else {
        cout << "No se ingresaron valores para encontrar el entero más pequeño." <<endl;
    }

    return 0;
}
