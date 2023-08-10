#include <iostream>
#include <ctime>
#include <cstdlib>

char gerarLetraAleatoria() {
    return static_cast<char>(rand() % 26 + 'A');  // Gera um número aleatório entre 0 e 25 e adiciona o valor ASCII de 'A'
}

int main() {
    srand(time(0)); // Inicializa a semente do gerador de números aleatórios com o tempo atual

    char letra_aleatoria = gerarLetraAleatoria();
    std::cout << "Letra aleatoria gerada: " << letra_aleatoria << std::endl;

    return 0;
}
