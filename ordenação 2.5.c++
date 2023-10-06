#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime> // Para geração de números aleatórios baseados no tempo

//Função para comparar e ordenar de forma decrescente
bool compareDescending(int a, int b) {
    return a > b;
}

int main () {
    //Inicialização do gerador de números aleatórios
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    const int numCount = 10; // Número de elementos na lista

    std::vector<int> numeros;

    //Preenche a lista com números aleatórios no intervalo de 0 a 50
    for (int i = 0; i < numCount; ++i) {
        numeros.push_back(std::rand() % 51); // Gera um número aleatório entre 0 e 50
    }

    std::cout << "Lista original:" << std::endl;
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Ordena a lista de forma decrescente usando a função de comparação personalizada
    std::sort(numeros.begin(), numeros.end(), compareDescending);

    std::cout << "Lista ordenada de forma decrescente:" << std::endl;
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
