#include <iostream>
#include <string>
#include <vector>

std::string obterResposta(const std::string& palavraSecreta, const std::vector<bool>& respostas) {
    std::string resposta;

    for (size_t i = 0; i < palavraSecreta.length(); i++) {
        if (respostas[i]) {
            resposta += palavraSecreta[i];
        } else {
            resposta += "_";
        }
    }

    return resposta;
}

int main() {
    // Exemplo de uso da função
    std::string palavraSecreta = "abacaxi";
    std::vector<bool> respostas = {false, true, false, false, true, false, false};

    std::string respostaJogador = obterResposta(palavraSecreta, respostas);

    std::cout << "Palavra secreta: " << palavraSecreta << std::endl;
    std::cout << "Resposta do jogador: " << respostaJogador << std::endl;

    return 0;
}

//roda no web