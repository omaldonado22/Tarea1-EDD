#include <iostream>
using namespace std;
int main() {
    int empleado = 1;
    double horasTrabajadas;
    double tarifaPorHora;
    double sueldoBruto;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
       
        cout << "Empleado " << empleado <<endl;
        cout << "Ingrese las horas trabajadas: ";
        cin >> horasTrabajadas;
        cout << "Ingrese la tarifa por hora: $";
        cin >> tarifaPorHora;

    
        if (horasTrabajadas <= 40) {
            sueldoBruto = horasTrabajadas * tarifaPorHora;
        } else {
            double horasExtras = horasTrabajadas - 40;
            sueldoBruto = (40 * tarifaPorHora) + (horasExtras * tarifaPorHora * 1.5);
        }

        
        cout << "Sueldo bruto del empleado: $" << sueldoBruto <<endl;

        empleado++;

        cout << "\n¿Desea calcular el sueldo bruto de otro empleado? (s/n): ";
        cin >> continuar;
    }

    return 0;
}
