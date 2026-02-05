#include <iostream>
using namespace std;

int main() {
    string codigo;
    char categoria;
    int subtipo;

    cout << "Ingrese el codigo del producto de la etiqueta (ej: E3): ";
    cin >> codigo;

    if (codigo.length() != 2) {
        cout << "ERROR: El codigo debe tener exactamente 2 caracteres ej: E3, R1, A5, H2." << endl;
        return 0;
    }

    categoria = codigo[0];
    subtipo = codigo[1] - '0';

    switch(categoria) {
        case 'E': case 'e':
            cout << "Categoria: Electronica" << endl;
            if (subtipo < 1 || subtipo > 5) {
                cout << "ERROR: Subtipo invalido para Electronica (debe ser 1-5)." << endl;
                return 0;
            }
            break;
        case 'R': case 'r':
            cout << "Categoria: Ropa" << endl;
            if (subtipo < 1 || subtipo > 4) {
                cout << "ERROR: Subtipo invalido para Ropa (debe ser 1-4)." << endl;
                return 0;
            }
            break;
        case 'A': case 'a':
            cout << "Categoria: Alimentos" << endl;
            if (subtipo < 1 || subtipo > 6) {
                cout << "ERROR: Subtipo invalido para Alimentos (debe ser 1-6)." << endl;
                return 0;
            }
            break;
        case 'H': case 'h':
            cout << "Categoria: Hogar" << endl;
            if (subtipo < 1 || subtipo > 3) {
                cout << "ERROR: Subtipo invalido para Hogar (debe ser 1-3)." << endl;
                return 0;
            }
            break;
        default:
            cout << "ERROR: Categoria no reconocida recuerda que E: Electronica, R: Ropa, A: Alimentos, H: Hogar." << endl;
            return 0;
    }

    cout << "Subtipo: " << subtipo << endl;
    return 0;
}