#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char gerarLetraAleatoria() {
    return 'a' + rand() % 26; // Gera uma letra aleatória entre 'a' e 'z'
}

int main() {
    srand(time(0)); // Seed para a geração de números aleatórios baseada no tempo atual

    cout << "Gerando 10 letras aleatorias do alfabeto:" << endl;

    for (int i = 0; i < 10; i++) {
        char letra = gerarLetraAleatoria();
        cout << "Letra " << i + 1 << ": " << letra << endl;
    }

    return 0;
}
