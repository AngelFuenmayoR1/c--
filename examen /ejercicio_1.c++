#include <iostream>
using namespace std;

int main() {

    double peso, Tasa_Base, recargo = 0, total;
    char tipoEnvio;

    cout << "Ingrese el total del peso del paquete: ";
    cin >> peso;
    cout << "Precione (N) para envios Nacionales para envios Internacionales precione (I): ";
    cin >> tipoEnvio;

    if (peso <= 0) {
        cout << "ERROR: El peso debe ser positivo." << endl;
        return 0;
    }

    if (peso <= 2) {
        Tasa_Base = 5.00;
    } else if (peso <= 5) {
        Tasa_Base = 8.50;
    } else if (peso <= 10) {
        Tasa_Base = 12.25;
    } else {
        Tasa_Base = 15.00;
    }

    if (tipoEnvio == 'I' || tipoEnvio == 'i') {
        recargo = Tasa_Base * 0.10;
    }

    total = Tasa_Base + recargo;

    cout << "Tasa base: $" << Tasa_Base << endl;
    if (recargo > 0) {
        cout << "Recargo internacional (10%): $" << recargo << endl;
    }
    cout << "Total a pagar: $" << total << endl;

    return 0;
}