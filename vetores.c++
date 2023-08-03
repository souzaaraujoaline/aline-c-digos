#include <iostream>

int main() {
    int numeros[5]; // Declaração de um array de 5 elementos

    for (int i = 0; i < 5; i++) {
        std::cin >> numeros[i]; // Lê os valores do array
    }

    std::cout << "Elementos do array:" <<std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << numeros[i] << " "; // Exibe os valores do array
    }

    return 0;
}
