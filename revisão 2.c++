#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype>

int main() {

    char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
    char letra;

    while (true) {
        std::cout << "Digite uma letra aleatoria: ";
        std::cin >> letra;

        if (std::isalpha(letra)) {
            letra = std::tolower(letra);

            bool letra_adivinhada = false;

            for (size_t i = 0; i < sizeof(alfabeto) - 1; i++) {
                if (alfabeto[i] == letra) {
                    letra_adivinhada = true;
                    break;
                }
            }

            if (letra_adivinhada) {
                std::cout << "A letra esta no alfabeto!\n";
            } else {
                std::cout << "A letra nao esta no alfabeto. Tente novamente!\n";
            }
        } else {
            std::cout << "Por favor, digite apenas letras.\n";
        }
    }

    return 0;
}
