#include <iostream>

int main (){
    int numero;
    std::cout << (" Insira o numero de repetições");
    std::cin >> numero;

    for (int contador = 0; contador  <= numero; contador++) {
        std::cout << contador << std::endl;
    }

    return 0;
}
