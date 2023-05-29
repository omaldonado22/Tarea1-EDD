#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,suma=0;
cout << "Ingrese un número: ";
cin >> n;
    for (int i = 1; i <= n; i++) {
        suma += pow(i, i);
    }

    std::cout << "La suma de los números con el exponente de su valor hasta " << n << " es: " << suma << endl;

    return 0;
}
