#include <iostream>
using namespace std;
int main() {
    double ventasBrutas;
    const double comisionPorcentaje = 0.09;
    const double salarioBase = 200.0;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        // Ingreso de las ventas brutas
        cout << "Ingrese las ventas brutas del vendedor: $";
        cin >> ventasBrutas;


        double ingresos = salarioBase + (ventasBrutas * comisionPorcentaje);

        cout << "Los ingresos del vendedor son: $" << ingresos <<endl;


        cout << "\n¿Desea calcular los ingresos de otro vendedor? (s/n): ";
        cin >> continuar;
    }

    return 0;
}
