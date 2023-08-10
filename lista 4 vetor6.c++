#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

std::string gerarPalavraSecretaAleatoria(const std::vector<std::string>& palavras) {
    srand(time(0)); // Configurando o gerador de números aleatórios com base no tempo atual

    // Gerando um índice aleatório entre 0 e o tamanho do vetor de palavras - 1
    int indiceAleatorio = rand() % palavras.size();

    // Acessando a palavra secreta correspondente ao índice aleatório
    std::string palavraSecreta = palavras[indiceAleatorio];

    return palavraSecreta;
}

int main() {
    // Exemplo de uso da função
    std::vector<std::string> palavras = {"abacaxi", "banana", "laranja", "morango", "uva"};

    std::string palavraSecreta = gerarPalavraSecretaAleatoria(palavras);

    std::cout << "Palavra secreta aleatória: " << palavraSecreta << std::endl;

    return 0;
}

//roda no web