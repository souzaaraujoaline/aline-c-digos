#include <iostream>
#include <string>
#include <vector>

std::vector<bool> encontrarLetra(const std::string &palavra, char letra) {
    std::vector<bool> posicoes(palavra.size(), false);

    for (size_t i = 0; i < palavra.size(); i++) {
        if (palavra[i] == letra) {
            posicoes[i] = true;
        }
    }

    return posicoes;
}

int main() {
    std::string palavra_secreta = "banana";
    char letra = 'a';

    std::vector<bool> posicoes_letra = encontrarLetra(palavra_secreta, letra);

    std::cout << "Palavra secreta: " << palavra_secreta << std::endl;
    std::cout << "Letra procurada: " << letra << std::endl;
    std::cout << "Posições da letra na palavra: ";
    for (bool posicao : posicoes_letra) {
        std::cout << (posicao ? "true " : "false ");
    }
    std::cout << std::endl;

    return 0;
}

//roda na web