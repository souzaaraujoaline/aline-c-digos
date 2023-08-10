#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    srand(time(0)); // Semente para gerar números aleatórios

    std::vector<std::string> palavras = {
        "abacaxi", "banana", "laranja", "morango", "uva", "melancia", "manga"
    };

    int indice_palavra = rand() % palavras.size(); // Gera um índice aleatório do vetor
    std::string palavra_secreta = palavras[indice_palavra];

    std::string palavra_adivinhada(palavra_secreta.size(), '_'); // Palavra com '_' para as letras não adivinhadas

    std::cout << "Bem-vindo ao jogo de adivinhação de palavras!\n";
    std::cout << "A palavra secreta tem " << palavra_secreta.size() << " letras.\n";

    int tentativas = 0;

    while (true) {
        std::cout << "Palavra atual: " << palavra_adivinhada << std::endl;
        char letra;
        std::cout << "Digite uma letra: ";
        std::cin >> letra;
        letra = std::tolower(letra); // Transforma a letra para minúscula

        bool letra_adivinhada = false;

        for (size_t i = 0; i < palavra_secreta.size(); i++) {
            if (palavra_secreta[i] == letra) {
                palavra_adivinhada[i] = letra;
                letra_adivinhada = true;
            }
        }

        if (letra_adivinhada) {
            std::cout << "A letra está na palavra!\n";
        } else {
            std::cout << "A letra não está na palavra. Tente novamente!\n";
        }

        if (palavra_adivinhada == palavra_secreta) {
            std::cout << "Parabéns! Você adivinhou a palavra secreta \"" << palavra_secreta << "\" em " << tentativas << " tentativas.\n";
            break;
        }

        tentativas++;
    }

    return 0;
}

//roda no web