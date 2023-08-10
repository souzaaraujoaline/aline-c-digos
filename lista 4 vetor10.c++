#include <iostream>
#include <string>
#include <vector>

bool verificarVitoria(const std::string& palavraSecreta, const std::vector<bool>& respostas) {
    for (size_t i = 0; i < palavraSecreta.length(); i++) {
        if (!respostas[i] && palavraSecreta[i] != '_') {
            return false;
        }
    }
    return true;
}

int main() {
    // Exemplo de uso da função
    std::string palavraSecreta = "abacaxi";
    std::vector<bool> respostas = {false, true, false, false, true, false, false};

    bool jogadorVenceu = verificarVitoria(palavraSecreta, respostas);

    if (jogadorVenceu) {
        std::cout << "Parabéns! Você acertou a palavra secreta.\n";
    } else {
        std::cout << "Você não acertou a palavra secreta.\n";
    }

    return 0;
}

//roda na web