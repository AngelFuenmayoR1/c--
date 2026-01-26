#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double peso, tasaBase = 0, recargo = 0, total;
    char tipoEnvio;
    
    // Título del programa
    cout << "=== CALCULADORA DE TASAS DE SERVICIO ===" << endl;
    cout << "========================================" << endl;
    
    // 1. Leer el peso del paquete (con validación)
    cout << "Ingrese el peso del paquete (kg): ";
    cin >> peso;
    
    // Validar que el peso sea mayor a 0
    if (peso <= 0) {
        cout << "ERROR: El peso debe ser mayor a 0 kg." << endl;
        return 1; // Terminar el programa con código de error
    }
    
    // 2. Leer el tipo de envío (con validación)
    cout << "Ingrese tipo de envío (N: Nacional, I: Internacional): ";
    cin >> tipoEnvio;
    
    // Convertir a mayúscula para facilitar comparaciones
    tipoEnvio = toupper(tipoEnvio);
    
    // Validar el tipo de envío
    if (tipoEnvio != 'N' && tipoEnvio != 'I') {
        cout << "ERROR: Tipo de envío no válido. Use N o I." << endl;
        return 1; // Terminar el programa con código de error
    }
    
    // 3. Calcular la tasa base según el peso (estructura if-else)
    if (peso <= 2.0) {
        tasaBase = 5.00;
        cout << "Rango de peso: Hasta 2 kg" << endl;
    }
    else if (peso <= 5.0) { // peso entre 2.01 y 5.0
        tasaBase = 8.50;
        cout << "Rango de peso: 2.01 a 5 kg" << endl;
    }
    else if (peso <= 10.0) { // peso entre 5.01 y 10.0
        tasaBase = 12.25;
        cout << "Rango de peso: 5.01 a 10 kg" << endl;
    }
    else { // peso mayor a 10.0
        tasaBase = 15.00;
        cout << "Rango de peso: Más de 10 kg" << endl;
    }
    
    // 4. Calcular recargo si es internacional
    if (tipoEnvio == 'I') {
        recargo = tasaBase * 0.10; // 10% de recargo
    }
    
    // 5. Calcular el costo total
    total = tasaBase + recargo;
    
    // 6. Mostrar los resultados con formato
    cout << fixed << setprecision(2);
    cout << "\n===== RESUMEN DE COSTOS =====" << endl;
    cout << "Peso del paquete: " << peso << " kg" << endl;
    cout << "Tipo de envío: " << (tipoEnvio == 'N' ? "Nacional" : "Internacional") << endl;
    cout << "Tasa base: $" << tasaBase << endl;
    
    if (tipoEnvio == 'I') {
        cout << "Recargo internacional (10%): $" << recargo << endl;
    } else {
        cout << "Recargo internacional: $0.00" << endl;
    }
    
    cout << "=============================" << endl;
    cout << "TOTAL A PAGAR: $" << total << endl;
    cout << "=============================" << endl;
    
    return 0;
}