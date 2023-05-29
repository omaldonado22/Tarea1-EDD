#include <iostream>
using namespace std;
unsigned long long factorial(int n) {
    unsigned long long resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    cout << "N\tFactorial\n";
    cout << "-----------------\n";

    for (int i = 1; i <= 5; i++) {
        unsigned long long fact = factorial(i);
        cout << i << "\t" << fact << "\n";
    }

    return 0;
}
