#include <iostream>
#include <cmath>

// Função para verificar se um número é um quadrado perfeito
bool isPerfectSquare(int num) {
    int root = sqrt(num);
    return root * root == num;
}

// Função para verificar se a soma dos dígitos de um número é menor ou igual a 10
bool hasDigitSumLessThanOrEqualTo10(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum <= 10;
}

int main() {
    int lowerLimit, upperLimit;

    // Solicitar ao usuário o limite inferior e superior do intervalo
    std::cout << "Digite o limite inferior do intervalo: ";
    std::cin >> lowerLimit;
    std::cout << "Digite o limite superior do intervalo: ";
    std::cin >> upperLimit;

    int magicNumber = -1;  // Inicializa o número mágico como -1 (indicando que não foi encontrado)

    // Procurar pelo menor número mágico dentro do intervalo
    for (int i = lowerLimit; i <= upperLimit; i++) {
        if (i % 3 == 0 && isPerfectSquare(i) && hasDigitSumLessThanOrEqualTo10(i)) {
            magicNumber = i;
            break;
        }
    }

    // Exibir o resultado
    if (magicNumber != -1) {
        std::cout << "O menor número mágico no intervalo [" << lowerLimit << ", " << upperLimit << "] é: " << magicNumber << std::endl;
    } else {
        std::cout << "Não foi encontrado nenhum número mágico no intervalo [" << lowerLimit << ", " << upperLimit << "]." << std::endl;
    }

    return 0;
}
