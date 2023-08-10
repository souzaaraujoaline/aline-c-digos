#include <iostream>
#include <ctime>
#include <cstdlib>

// Função para gerar uma letra aleatória do alfabeto
char gerarLetraAleatoria() {
    return 'A' + rand() % 26;  // Gera um número entre 0 e 25 e adiciona o valor ASCII de 'A'
}

int main() {
    srand(time(0)); // Inicializa a semente para geração de números aleatórios

    char letraSorteada = gerarLetraAleatoria();
    char chute;
    int tentativas = 0;
    const int limiteTentativas = 5;

    std::cout << "Bem-vindo ao jogo de adivinhar a letra!\n";
    
    do {
        std::cout << "Tentativa " << tentativas + 1 << "/" << limiteTentativas << ": ";
        std::cin >> chute;
        chute = std::toupper(chute); // Converte o chute para maiúscula
        
        if (chute == letraSorteada) {
            std::cout << "Parabens! Voce acertou.\n";
            break;
        } else {
            std::cout << "Tente novamente.\n";
        }
        
        tentativas++;
    } while (tentativas < limiteTentativas);

    std::cout << "A letra sorteada era: " << letraSorteada << std::endl;
    std::cout << "Voce utilizou " << tentativas << " tentativas." << std::endl;

    return 0;
}
