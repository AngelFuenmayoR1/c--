#include <iostream>
#include <vector>
// venctor para crecar un contenedor dinamico

/* typedef std::vector<std::pair<std::string, int>> pair_list_t; */
typedef std::string text_t;
typedef int number_t;
int main () {

    text_t nombre = "Susu";
    std::cout << "El nombre es: " << nombre << std::endl;

    number_t edad = 23;
    std::cout << "La edad es: " << edad << std::endl;

    /* pair_list_t pair_list; */
    // pair_list_t es un plus para no tener que escribir todo el vector cada vez
    // _t lo que tremina es una convención para typedefs
    //pair_list es el nombre de la variable


    return 0;
}