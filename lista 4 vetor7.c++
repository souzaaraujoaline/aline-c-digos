#include <iostream>
#include <vector>
#include <string>
#include <fstream>

std::vector<std::string> lerDicasDoArquivo(const std::string& nomeArquivo) {
    std::vector<std::string> dicas;
    std::ifstream arquivo(nomeArquivo);

    if (arquivo.is_open()) {
        std::string linha;
        while (std::getline(arquivo, linha)) {
            dicas.push_back(linha);
        }
        arquivo.close();
    } else {
        std::cout << "Erro ao abrir o arquivo de dicas: " << nomeArquivo << std::endl;
    }

    return dicas;
}

int main() {
    // Exemplo de uso da função
    std::string nomeArquivo = "dicas.txt";
    std::vector<std::string> dicas = lerDicasDoArquivo(nomeArquivo);

    if (!dicas.empty()) {
        std::cout << "Dicas do jogo:\n";
        for (const std::string& dica : dicas) {
            std::cout << "- " << dica << std::endl;
        }
    }

    return 0;
}


//roda na web