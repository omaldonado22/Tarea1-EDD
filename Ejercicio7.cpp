#include <iostream>
using namespace std;
int main() {
    int totalKilometros = 0;
    double totalLitros = 0.0;

    double kilometros;
    double litros;

    cout << "Registro de viajes\n";
    cout << "Ingrese los kilómetros conducidos (-1 para terminar): ";
    cin >> kilometros;

    while (kilometros != -1) {
        cout << "Ingrese los litros usados en el viaje: ";
        cin >> litros;

        totalKilometros += kilometros;
        totalLitros += litros;

        cout << "Ingrese los kilómetros conducidos (-1 para terminar): ";
        cin >> kilometros;
    }

    if (totalLitros != 0.0) {
        double kilometrosPorLitro = totalKilometros / totalLitros;
        cout << "\nTotal de kilómetros por litro obtenidos en todos los viajes: "
                  << kilometrosPorLitro <<endl;
    } else {
        cout << "\nNo se registraron viajes." <<endl;
    }

    return 0;
}


