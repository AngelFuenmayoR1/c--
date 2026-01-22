// test_vscode.cpp
// Código para probar la configuración de C++ en Visual Studio Code

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// Función para calcular el factorial de un número
unsigned long long calcularFactorial(int n) {
    if (n <= 1) return 1;
    return n * calcularFactorial(n - 1);
}

// Clase de ejemplo para demostrar OOP
class Calculadora {
public:
    Calculadora() {
        std::cout << "Calculadora creada!" << std::endl;
    }
    
    double sumar(double a, double b) {
        return a + b;
    }
    
    double restar(double a, double b) {
        return a - b;
    }
    
    double multiplicar(double a, double b) {
        return a * b;
    }
    
    double dividir(double a, double b) {
        if (b == 0) {
            throw std::runtime_error("Error: División por cero");
        }
        return a / b;
    }
};

// Función para demostrar el uso de templates
template <typename T>
T maximo(T a, T b) {
    return (a > b) ? a : b;
}

// Función principal
int main() {
    std::cout << "=========================================" << std::endl;
    std::cout << "PRUEBA DE CONFIGURACION C++ EN VS CODE" << std::endl;
    std::cout << "=========================================" << std::endl;
    
    // 1. Prueba de entrada/salida básica
    std::cout << "\n1. Prueba de entrada/salida:" << std::endl;
    std::cout << "Hola, Visual Studio Code con C++!" << std::endl;
    
    // 2. Prueba de funciones
    std::cout << "\n2. Prueba de funciones:" << std::endl;
    int numero = 5;
    std::cout << "Factorial de " << numero << " es: " 
              << calcularFactorial(numero) << std::endl;
    
    // 3. Prueba de estructuras de control
    std::cout << "\n3. Prueba de estructuras de control:" << std::endl;
    std::cout << "Números pares del 1 al 10: ";
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    
    // 4. Prueba de STL (Standard Template Library)
    std::cout << "\n4. Prueba de STL (vectores y strings):" << std::endl;
    std::vector<std::string> lenguajes = {"C++", "Python", "Java", "JavaScript", "Rust"};
    std::cout << "Lenguajes de programación:" << std::endl;
    for (const auto& lenguaje : lenguajes) {
        std::cout << "  - " << lenguaje << std::endl;
    }
    
    // 5. Prueba de templates
    std::cout << "\n5. Prueba de templates:" << std::endl;
    std::cout << "Maximo entre 10 y 20: " << maximo(10, 20) << std::endl;
    std::cout << "Maximo entre 3.14 y 2.71: " << maximo(3.14, 2.71) << std::endl;
    
    // 6. Prueba de manejo de excepciones
    std::cout << "\n6. Prueba de manejo de excepciones:" << std::endl;
    try {
        Calculadora calc;
        std::cout << "10 + 5 = " << calc.sumar(10, 5) << std::endl;
        std::cout << "10 / 2 = " << calc.dividir(10, 2) << std::endl;
        
        // Esto debería lanzar una excepción
        std::cout << "10 / 0 = " << calc.dividir(10, 0) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Excepción capturada: " << e.what() << std::endl;
    }
    
    // 7. Prueba de operaciones matemáticas
    std::cout << "\n7. Prueba de operaciones matemáticas:" << std::endl;
    double radio = 5.0;
    double area = M_PI * radio * radio;
    std::cout << "Área de un círculo con radio " << radio 
              << " es: " << area << std::endl;
    
    std::cout << "\n=========================================" << std::endl;
    std::cout << "PRUEBA COMPLETADA EXITOSAMENTE!" << std::endl;
    std::cout << "=========================================" << std::endl;
    
    // Esperar entrada para que la consola no se cierre inmediatamente
    std::cout << "\nPresiona Enter para salir...";
    std::cin.get();
    
    return 0;
}