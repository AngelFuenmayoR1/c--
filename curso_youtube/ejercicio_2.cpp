//variables en cpp    
#include <iostream>

int main () {
    // variables enteras int solo numeros enteros
    int x; //Declaracion de la variable
    x = 5; //Asignacion de la variable
    std::cout << "El valor de x es:"<<x<<std::endl;
    int y = 10; //Declaracion y asignacion en una sola linea
    std::cout<< "El valor de y es:"<<y<<std::endl;
    /*
    algunos ejemplos de tipo de datos enteros:
    edad:29 anos
    numero de estudiantes:30
    año actual:2026
    son variables que no tienen decimales
    */

    //double(Desimales o flotantes)
    double temperatura = 25.1;
    double precio = 9.99;
    std::cout<<"La temperatura es: "<<temperatura<<std::endl;

    //char (Caracteres individual)
    char letra = 'A';
    std::cout<<"La letra es: "<<letra<<std::endl;
    return 0;
}