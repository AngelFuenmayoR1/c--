#include <iostream>

int main () {

    const double PI = 3.14159;
    double radio = 10.0;
    const double area = 2 * PI * radio;
    std::cout << "El area de un circulo con radio "<< radio << " es: " << area << " centimetros cuadrados" << std::endl;

    // CONST nos ayuda a definir constantes que no pueden ser modificadas durante la ejecucion del programa tipo 
    // ejemplo PI o el area de un circulo en este caso vaible que no cambiara su valor
    /*
    const double GRAVEDAD = 9.81; // en m/s^2
    double peso_agua = 100.0; // en kg
    */
    return 0;
}