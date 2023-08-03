#include <iostream>

int main() {  
    bool expressao1 = true;
    bool expressao2 = false;

    bool resultadoAND = (expressao1 && expressao2);
    bool resultadoOR = (expressao1 || expressao2);
    bool resultadoNOT = !expressao1;

    std::cout << "Resultado é " <<resultadoAND << std::endl;
    std::cout << "Resultado é " <<resultadoOR << std::endl;
    std::cout << "Resultado é " <<resultadoNOT << std::endl;

    return 0;
}
