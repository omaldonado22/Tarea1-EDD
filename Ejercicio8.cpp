#include <iostream>
using namespace std;
int main() {
    int numeroCuenta;
    double saldoInicial;
    double cargos;
    double creditos;
    double limiteCredito;

    cout << "Verificación de límites de crédito" <<endl;

    cout << "Ingrese el número de cuenta (-1 para terminar): ";
    cin >> numeroCuenta;

    while (numeroCuenta != -1) {
        cout << "Ingrese el saldo inicial: ";
        cin >> saldoInicial;

        cout << "Ingrese el total de cargos: ";
        cin >> cargos;

        cout << "Ingrese el total de créditos: ";
        cin >> creditos;

        cout << "Ingrese el límite de crédito permitido: ";
        cin >> limiteCredito;

        double nuevoSaldo = saldoInicial + cargos - creditos;

        cout << "\nInformación del cliente" <<endl;
        cout << "Número de cuenta: " << numeroCuenta <<endl;
        cout << "Límite de crédito: " << limiteCredito <<endl;
        cout << "Nuevo saldo: " << nuevoSaldo <<endl;

        if (nuevoSaldo > limiteCredito) {
            cout << "Se excedió el límite de su crédito" <<endl;
        }

        cout << "\nIngrese el número de cuenta (-1 para terminar): ";
        cin >> numeroCuenta;
    }

    return 0;
}
