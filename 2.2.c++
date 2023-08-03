#include <iostream>

int main() {
    int numero;

     std::cout << "Digite um numero: ";
     std::cin >> numero;

     if (numero > 0) {
        std::cout << "O numero é positivo." << std::endl;
     } else if (numero < 0) {
        std::cout << "O numero é negativo." << std::endl;
     } else {
        std::cout << "O numero é zero." << std::endl;
     }   
     
     return 0;
}
