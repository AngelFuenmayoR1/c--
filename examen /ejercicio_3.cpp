#include <iostream>
using namespace std;

int main() {
    char tipo;
    int noches, personas;
    double precioNoche, subtotal, descuentoPorcentaje = 0, descuentoFijo = 0, total;

    cout << "Bienvenido al sistema de reservacion de hotel!" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Descuento por estancia de 5 o mas noches: 15% de Descuento" << endl;
    cout << "Descuento fijo por 3 o mas personas: $20 menos en su total" << endl;
    cout << "Tipo de habitacion S: Sencilla para 2 personas, D: Doble para 4 personas, U: Suite para 6 personas: ";
    cin >> tipo;
    cout << "Cuantas de noches se decea quedar: ";
    cin >> noches;
    cout << "Cuantas son personas: ";
    cin >> personas;

    if (noches < 1 || personas < 1) {
        cout << "ERROR: Noches y personas minimo deben ser 1 presona y 1 noche" << endl;
        return 0;
    }

    switch(tipo) {
        case 'S': case 's':
            precioNoche = 80;
            if (personas > 2) {
                cout << "ERROR: La habitacion Sencilla solo permite maximo 2 personas." << endl;
                return 0;
            }
            break;
        case 'D': case 'd':
            precioNoche = 120;
            if (personas > 4) {
                cout << "ERROR: La habitacion Doble solo permite maximo 4 personas." << endl;
                return 0;
            }
            break;
        case 'U': case 'u':
            precioNoche = 200;
            if (personas > 6) {
                cout << "ERROR: La Suite solo permite maximo  6 personas." << endl;
                return 0;
            }
            break;
        default:
            cout << "ERROR: Recuerda que S: Sencilla para 2 personas, D: Doble para 4 personas, U: Suite para 6 personas." << endl;
            return 0;
    }

    subtotal = precioNoche * noches;

    if (noches >= 5) {
        descuentoPorcentaje = subtotal * 0.15;
    }
    if (personas >= 3) {
        descuentoFijo = 20;
    }

    total = subtotal - descuentoPorcentaje - descuentoFijo;

    cout << "Subtotal: $" << subtotal << endl;
    if (descuentoPorcentaje > 0) {
        cout << "Descuento por 15% (noches >= 5): $" << descuentoPorcentaje << endl;
    }
    if (descuentoFijo > 0) {
        cout << "Descuento fijo (personas >= 3): $" << descuentoFijo << endl;
    }
    cout << "Total a pagar: $" << total << endl;

    return 0;
}