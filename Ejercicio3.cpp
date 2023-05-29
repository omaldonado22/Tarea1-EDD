#include <iostream>
using namespace std;
int main() {
    const int numRepeticiones = 10;
    int contador = 1;

    while (contador <= numRepeticiones) {
        double totalKilometros;
        double costoGasolina;
        double promedioKilometrosLitro;
        double cuotasEstacionamiento;
        double peaje;

        // Ingreso de datos
        cout << "Repetición " << contador <<endl;
        cout << "Ingrese el total de kilómetros conducidos por día: ";
        cin >> totalKilometros;
        cout << "Ingrese el costo por litro de gasolina: ";
        cin >> costoGasolina;
        cout << "Ingrese el promedio de kilómetros por litro: ";
        cin >> promedioKilometrosLitro;
        cout << "Ingrese las cuotas de estacionamiento por día: ";
        cin >> cuotasEstacionamiento;
        cout << "Ingrese el peaje por día: ";
        cin >> peaje;

        // Cálculo del costo diario
        double costoDiario = (totalKilometros / promedioKilometrosLitro) * costoGasolina + cuotasEstacionamiento + peaje;

        // Mostrar el costo diario
        std::cout << "El costo diario de conducir al trabajo es: $" << costoDiario <<endl;

        contador++;
    }

    return 0;
}
