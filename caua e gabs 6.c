#include <stdio.h>

// Adição
float soma(int a, int b) {
    return a + b;
}

// Subtracao
float subtracao(int a, int b) {
    return a - b;
}


// Multiplicacao
float multiplicacao(int a, int b) {
    return a * b;
}

int main() {
    int resultado = soma(5, 3); // Chamada da função
    printf("Resultado da soma: %d\n", resultado);
    
     resultado = subtracao(5, 3); // Chamada da função
    printf("Resultado da subtracao: %d\n", resultado);
    
     resultado = multiplicacao(5, 3); // Chamada da função
    printf("Resultado da multiplicacao: %d\n", resultado);

    return 0;
}
