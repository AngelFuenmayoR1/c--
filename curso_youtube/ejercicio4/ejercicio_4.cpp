#include <iostream>

namespace primero
{
    int x = 5;
}

namespace segundo
{
    int x = 15;
}

int main()
{

    int x = 10;

    std::cout << "El valor de x es: " << x << std::endl;
    std::cout << "El valor de x en el namespace primero es: " << primero::x << std::endl;
    std::cout << "El valor de x en el namespace segundo es: " << segundo::x << std::endl;

    /*
    Podemos observar que al usar namespaces
    podemos tener variables con el mismo nombre en diferentes contextos sin que haya conflicto entre ellas.
    */
    return 0;
}