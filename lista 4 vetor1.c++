#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Semente para gerar números aleatórios
    int numero_secreto = rand() % 100 + 1; // Gera um número entre 1 e 100
    int tentativa;
    int tentativas = 0;

    std::cout << "Bem-vindo ao jogo de adivinhacao!\n";

    while (true) {
        std::cout << "Digite um numero entre 1 e 100: ";
        std::cin >> tentativa;
        tentativas++;

        if (tentativa < numero_secreto) {
            std::cout << "O numero secreto e maior. Tente novamente!\n";
        } else if (tentativa > numero_secreto) {
            std::cout << "O numero secreto e menor. Tente novamente!\n";
        } else {
            std::cout << "Parabens! Voce adivinhou o numero secreto " << numero_secreto << " em " << tentativas << " tentativas.\n";
            break;
        }
    }

    return 0;
}


//roda na web