 //Trabalho Aline e Gabriel Rodrigues
#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include <limits>  

// sorteia um numero aleatório entre 1 e 60
std::vector<int> realizarSorteio() {
    std::vector<int> numerosSorteados;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, 60);

    while (numerosSorteados.size() < 6) {
        int numero = dis(gen);
        if (std::find(numerosSorteados.begin(), numerosSorteados.end(), numero) == numerosSorteados.end()) {
            numerosSorteados.push_back(numero);
        }
    }

    return numerosSorteados;
}

int main() {
    int tentativas = 0;
    std::vector<int> numerosEscolhidos;
    std::vector<int> numerosSorteados;

    std::cout << "Bem-vindo ao Mega Senai!\n";

    do {
        // pede que o jogador coloque os 6 números
        std::cout << "\nTentativa " << (tentativas + 1) << "\n";
        numerosEscolhidos.clear();
        for (int i = 0; i < 6; ++i) {
            int numero;
            do {
                std::cout << "Escolha o " << (i + 1) << "° numero (entre 1 e 60): ";
                if (!(std::cin >> numero)) {
                    std::cout << "Entrada inválida. Tente novamente.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    continue;
                }
                if (numero < 1 || numero > 60) {
                    std::cout << "Digite APENAS números entre 1 e 60.\n";
                }
            } while (numero < 1 || numero > 60 || std::find(numerosEscolhidos.begin(), numerosEscolhidos.end(), numero) != numerosEscolhidos.end());
            numerosEscolhidos.push_back(numero);
        }

        // realiza o sorteio dos numeros
        numerosSorteados = realizarSorteio();

        // faz a comparação dos números
        int acertos = 0;
        for (int escolhido : numerosEscolhidos) {
            if (std::find(numerosSorteados.begin(), numerosSorteados.end(), escolhido) != numerosSorteados.end()) {
                acertos++;
            }
        }

        // mostra os resultados dos números
        std::cout << "\nNumeros escolhidos:";
        for (int escolhido : numerosEscolhidos) {
            std::cout << " " << escolhido;
        }
        std::cout << "\nNumeros sorteados:";
        for (int sorteado : numerosSorteados) {
            std::cout << " " << sorteado;
        }
        std::cout << "\nAcertos: " << acertos << " de 6\n";

        //verifica se o jogador acertou os numeros
        if (acertos == 6) {
            std::cout << "Parabens! Voce acertou todos os numeros em " << (tentativas + 1) << " tentativas.\n";
            break;
        }

        tentativas++;

        // da opção do jogador querer continuar jogando
        char continuar;
        std::cout << "Deseja tentar novamente? (S (para sim) /(qualquer tecla EXCETO S para nao): ";
        std::cin >> continuar;

        if (continuar != 'S' && continuar != 's') {
            std::cout << "Obrigado por jogar o Mega Senai! Volte sempre!!\n";
            break;
        }
    } while (true);

    return 0;
}

//Trabalho Aline e Gabriel Rodrigues