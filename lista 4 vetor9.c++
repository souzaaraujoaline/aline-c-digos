#include <iostream>
#include <string>
#include <vector>

// Função que retorna uma string com as letras adivinhadas corretamente e "_" para as letras desconhecidas
std::string obterResposta(const std::string& palavra, const std::vector<bool>& respostas) {
    std::string resposta;
    for (size_t i = 0; i < palavra.length(); i++) {
        if (respostas[i]) {
            resposta += palavra[i];
        } else {
            resposta += '_';
        }
        resposta += ' ';
    }
    return resposta;
}

int main() {
    std::string palavraSecreta;
    std::cout << "Digite a palavra secreta: ";
    std::cin >> palavraSecreta;

    std::vector<bool> respostas(palavraSecreta.length(), false);
    int tentativas = 0;

    std::cout << "A palavra secreta foi definida. Agora é a vez do jogador adivinhar.\n";

    while (true) {
        char letra;
        std::cout << "Palavra: " << obterResposta(palavraSecreta, respostas) << std::endl;
        std::cout << "Digite uma letra: ";
        std::cin >> letra;

        bool acertou = false;
        for (size_t i = 0; i < palavraSecreta.length(); i++) {
            if (palavraSecreta[i] == letra) {
                respostas[i] = true;
                acertou = true;
            }
        }

        if (acertou) {
            std::cout << "Acertou! A letra '" << letra << "' está na palavra.\n";
        } else {
            std::cout << "Errou! A letra '" << letra << "' não está na palavra.\n";
        }

        tentativas++;

        if (obterResposta(palavraSecreta, respostas) == palavraSecreta) {
            std::cout << "Parabéns! Você acertou a palavra secreta: " << palavraSecreta << std::endl;
            break;
        }
    }

    std::cout << "Número de tentativas: " << tentativas << std::endl;

    return 0;
}


//roda na web