#include <iostream>

bool verificarPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2;   i <= numero / 2; ++i) {
        if (numero % i == 0) {
           return false;
        }
    }

    return true;
}


int main () {
    int numero;
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    if (verificarPrimo(numero)) {
        std::cout << "O número é primo." << std::endl;
    } else {    
       std::cout << " O número não é primo." << std::endl;
    }

    return 0;
}    
