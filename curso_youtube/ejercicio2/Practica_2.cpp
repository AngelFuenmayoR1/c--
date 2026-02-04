#include <iostream>

int main () {
    // Practica de variables en C++

    // parte 1
    // int enteros

    // Ejecicio horientado a estudiantes

    int Total_Estudiantes = 29;
    int salon_A = 1;
    std::cout << "El total de estudiantes es de "<<Total_Estudiantes<<" en el salon "<<salon_A<<std::endl;

    //parte 2
    // double decimales

    // Eercicio horientado a venta de queso

    double Precio_Queso = 6.56;
    double Cliente = 0.5;
    double Total_Venta =  Cliente * Precio_Queso;
    std::cout << "El precio del queso por Kilo es de: "<< Precio_Queso<<"$"<< std::endl;
    std::cout << "el total de la venta es de:"<< Total_Venta<<"$"<< std::endl;

    // parte 3 
    
    // char caracteres

    // Ejercicio horientado a calificaciones
    char calificacion_maxima = 'A';
    char calificacion_media = 'B';
    char calificacion_baja = 'C';
    char calificacion_reprobada = 'F';
    std::cout << "las calificaciones estan divididas en:"<<std::endl;
    std::cout << "Calificacion maxima: "<< calificacion_maxima << std::endl
                << "Calificacion media: "<< calificacion_media << std::endl
                << "Calificacion baja: "<< calificacion_baja << std::endl
                << "Calificacion reprobada: "<< calificacion_reprobada << std::endl;
   
    // parte 4  
    //booleanos(verdadero o falso)
    // Ejercicio horientado a clima
    bool esta_lloviendo = true;
    bool esta_soleado = false;
    bool esta_nublado = true;
    std::cout << "1 indica verdadero y 0 indica falso"<<std::endl;
    std::cout << "¿Esta lloviendo?: "<< esta_lloviendo << std::endl;
    std::cout << "¿Esta soleado?: "<< esta_soleado << std::endl;
    std::cout << "¿Esta nublado?: "<< esta_nublado << std::endl;
    

    // parte 5 
    // string cadenas de caracteres
    // Ejercicio horientado saludos 
    std::string saludo = "Buenos";
    std::string saludo1 = "Buenas";
    std::string dia = "Dias";
    std::string tarde = "Tardes";
    std::string noche = "Noches";
    std::string nombre = "sisu";
    std::string mensaje = saludo + " " + dia + ", " + nombre + "!";
    std::string mensaje1 = saludo1 + " " + tarde + ", " + nombre + "!";
    std::string mensaje2 = saludo1+ " " + noche + ", " + nombre + "!";

    std::cout << mensaje << std::endl;
    std::cout << mensaje1 << std::endl;
    std::cout << mensaje2 << std::endl;
    return 0;
}