#include <iostream>
#include <string>

int contarOcorrencias(const std::string& palavraSecreta, char letra) {
    int ocorrencias = 0;

    for (char ch : palavraSecreta) {
        if (ch == letra) {
            ocorrencias++;
        }
    }

    return ocorrencias;
}

int main() {
    // Exemplo de uso da função
    std::string palavraSecreta = "abacaxi";
    char letraProcurada = 'a';

    int numeroOcorrencias = contarOcorrencias(palavraSecreta, letraProcurada);

    std::cout << "Número de vezes que a letra '" << letraProcurada << "' aparece na palavra secreta: "
              << numeroOcorrencias << std::endl;

    return 0;
}


//roda na web