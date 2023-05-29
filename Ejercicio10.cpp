#include <iostream>
using namespace std;
int main() {
    const int cantidadValores = 10;
    int valores[cantidadValores];

    cout << "Ingrese " << cantidadValores << " valores:" << endl;

    for (int i = 0; i < cantidadValores; i++) {
        cout << "Valor " << (i + 1) << ": ";
        cin >> valores[i];
    }

    int max1 = valores[0];  
    int max2 = valores[0];  

    for (int i = 1; i < cantidadValores; i++) {
        if (valores[i] > max1) {
            max2 = max1;
            max1 = valores[i];
        } else if (valores[i] > max2 && valores[i] < max1) {
            max2 = valores[i];
        }
    }

    cout << "Los dos valores más grandes son: " << max1 << " y " << max2 <<endl;

    return 0;
}
