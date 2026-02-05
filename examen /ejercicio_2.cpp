#include <iostream>
using namespace std;

int main() {
    double promedio, ingreso, colegiatura, porcentaje = 0, montoBeca;

    cout << "Ingrese el promedio (0-10): ";
    cin >> promedio;
    cout << "Ingrese wel ingreso familiar mensual: $";
    cin >> ingreso;
    cout << "Ingrese el monto de la colegiatura: $";
    cin >> colegiatura;

    if (promedio < 0 || promedio > 10) {
        cout << "ERROR: Promedio debe estar entre 0 y 10." << endl;
        return 0;
    }
    if (ingreso <= 0) {
        cout << "ERROR: El ingreso familiar debe ser un numero positivo." << endl;
        return 0;
    }

    if (promedio >= 8.0 && ingreso <= 15000) {
        if (promedio >= 9.5) {
            if (ingreso <= 8000) porcentaje = 80;
            else porcentaje = 60;
        } else if (promedio >= 9.0) {
            if (ingreso <= 10000) porcentaje = 70;
            else porcentaje = 50;
        } else if (promedio >= 8.5) {
            if (ingreso <= 12000) porcentaje = 60;
            else porcentaje = 40;
        } else if (promedio >= 8.0) {
            if (ingreso <= 15000) porcentaje = 50;
        }
    } else {
        cout << "No cumple con los requisitos mínimos:(" << endl;
        return 0;
    }

    if (porcentaje > 0) {
        montoBeca = colegiatura * (porcentaje / 100);
        cout << "Porcentaje de beca: " << porcentaje << "%" << endl;
        cout << "Monto de beca: $" << montoBeca << endl;
        cout << "Total a pagar: $" << colegiatura - montoBeca << endl;
    } else {
        cout << "No aplica para beca." << endl;
    }

    return 0;
}