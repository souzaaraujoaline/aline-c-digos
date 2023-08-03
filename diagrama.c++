#include <iostream>
#include <string>
#include <sstream>

int main() {
    // Receber os dois números de entrada
    double numeroA, numeroB;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> numeroA;
    std::cout << "Digite o segundo numero: ";
    std::cin >> numeroB;

    // Receber a escolha da operação matemática
    char operacao;
    std::cout << "Escolha a operacao matematica (+, -, *, /): ";
    std::cin >> operacao;

    // Realizar a operação selecionada e exibir o resultado
    double resultado;
    switch (operacao) {
        case '+':
            resultado = numeroA + numeroB;
            break;
        case '-':
            resultado = numeroA - numeroB;
            break;
        case '*':
            resultado = numeroA * numeroB;
            break;
        case '/':
            if (numeroB != 0) {
                resultado = numeroA / numeroB;
            } else {
                std::cout << "Erro: Divisao por zero nao e permitida.\n";
                return 1; // Código de erro
            }
            break;
        default:
            std::cout << "Operacao invalida.\n";
            return 1; // Código de erro
    }

    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}
