#include <iostream>

int main(){
    double numero1, numero2, numero3, media;
    
    std::cout << " Digite o primiero número:   ";
    std::cin >> numero1;

    std::cout << " Digite o segundo número:   ";
    std::cin >> numero2;

    std::cout << " Digite o terceiro número:   ";
    std::cin >> numero3;

    media = (numero1 + numero2 + numero3) / 3;

    std::cout << "A média dos números é:" << media << std::endl;

    return 0;
}
