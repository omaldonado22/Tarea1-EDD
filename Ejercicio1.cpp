#include <iostream>
using namespace std;
<<<<<<< HEAD

 int NUM_VENDEDORES = 10;

int main() {
    int ventas[NUM_VENDEDORES];
    int salarios[9] = {0};
    int culo;
    int culo;
    int culo2;

    for (int i = 0; i < NUM_VENDEDORES; i++) {
        cout << "Ingrese la cantidad de ventas del vendedor " << i + 1 << ": ";
        cin >> ventas[i];
    }

    for (int i = 0; i < NUM_VENDEDORES; i++) {
        double salario = 200 + 0.09 * ventas[i]; // Cálculo del salario del vendedor

        if (salario >= 200 && salario < 300)
            salarios[0]++;
        else if (salario >= 300 && salario < 400)
            salarios[1]++;
        else if (salario >= 400 && salario < 500)
            salarios[2]++;
        else if (salario >= 500 && salario < 600)
            salarios[3]++;
        else if (salario >= 600 && salario < 700)
            salarios[4]++;
        else if (salario >= 700 && salario < 800)
            salarios[5]++;
        else if (salario >= 800 && salario < 900)
            salarios[6]++;
        else if (salario >= 900 && salario < 1000)
            salarios[7]++;
        else if (salario >= 1000)
            salarios[8]++;
    }

    cout << "Resultados:" << endl;
    for (int i = 0; i < 9; i++) {
        if (i == 8)
            cout << "$1000 en adelante: ";
        else
            cout << "$" << 200 + i * 100 << "-" << 299 + i * 100 << ": ";

        cout << salarios[i] << " vendedores" << endl;
    }

    return 0;
}

=======
int main() {
    int arreglo[12];
    int culo;

cout << "Ingrese los valores del arreglo:" << std::endl;
    for (int i = 0; i < 12; i++) {
    cout << "Valor " << i + 1 << ": ";
    cin >> arreglo[i];
    }

    int maximo = arreglo[0];
    for (int i = 1; i < 12; i++) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
    }

    // Mostrar el valor máximo en pantalla
    std::cout << "El valor máximo es: " << maximo <<endl;

    return 0;
}
>>>>>>> c4fe329 (EJERCICIOS DE TAREA)
