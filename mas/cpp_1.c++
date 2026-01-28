#include <iostream>

// Función que existe, pero ¿se ejecutará?
void funcionFantasma() {
    std::cout << "Soy un fantasma que nadie llama.\n";
}
int main() { // funciono main prefecta mente despues de corregir el erroe/ sumamente importante es el comienzo puerta del castillo donde inicia todo el programa
    std::cout << "¿Este mensaje se imprimirá?\n";
    funcionFantasma(); // Llamada a la función existente / main tiene todo el poder para llamar a otras funciones Fantasma
    return 0;
}