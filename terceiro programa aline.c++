int a = 5;
int b = 3;

bool igual = (a == b);        // igual = false
bool diferente = (a !=b);     // diferente = true
bool maior = (a > b);         // maior = true
bool menor = (a < b);         // menor = false
bool maiorOuIgual = (a >= b); // maiorOuIgual = true
bool menorOuIgual = (a <= b); // menorOuIgual = false

#include <iostream>

int main() {
    int a = 5;
    int b = 3;

    bool igual = (a == b);
    bool diferente = (a != b);
    bool maior = (a > b);
    bool menor = (a < b);
    bool maiorOuIgual = (a >= b);
    bool menorOuIgual = (a <= b);

    std::cout << "igual = " << std::boolalpha << igual << std::endl;
    std::cout << "diferente = " << std::boolalpha << diferente << std::endl;
    std::cout << "maior = " << std::boolalpha << maior << std::endl;
    std::cout << "menor = " << std::boolalpha << menor << std::endl;
    std::cout << "maiorOuIgual = " << std::boolalpha << maiorOuIgual << std::endl;
    std::cout << "menorOuIgual = " << std::boolalpha << menorOuIgual << std::endl;

    return 0;
}
