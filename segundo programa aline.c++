int a = 5;
int b = 3;

int soma = a + b;                 // soma = 8
int subtracao = a - b;            // subtracao = 2
int multiplicacao = a * b;             // multiplicacao = 15
int divisao = a / b;   // divisao = 1

#include <iostream>

int main() {
    int a = 5;
    int b = 3;

    int soma = a + b;                // soma = 8
    int subtracao = a - b;           // subtracao = 2
    int multiplicacao = a * b;       // multiplicacao = 15
    int divisao = a / b;             // divisao = 1

    std::cout << "Soma: " << soma << std::endl;
    std::cout << "Subtração: " << subtracao << std::endl;
    std::cout << "Multiplicação: " << multiplicacao << std::endl;
    std::cout << "Divisão: " << divisao << std::endl;

    return 0;
}