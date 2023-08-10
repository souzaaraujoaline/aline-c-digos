#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int totalGuesses = 0;
    int correctGuesses = 0;
    int wrongGuesses = 0;

    srand(time(0)); // Seed para a geração de números aleatórios baseada no tempo atual

    cout << "Bem-vindo ao jogo de letras!" << endl;

    while (true) {
        int numLetters;
        cout << "\nDigite a quantidade de letras a serem sorteadas (0 para sair): ";
        cin >> numLetters;

        if (numLetters == 0) {
            break;
        }

        for (int i = 0; i < numLetters; i++) {
            char randomLetter = 'a' + rand() % 26; // Gera uma letra aleatória entre 'a' e 'z'
            char guess;

            cout << "Tente adivinhar a letra sorteada: ";
            cin >> guess;

            totalGuesses++;

            if (guess == randomLetter) {
                cout << "Parabens! Voce acertou." << endl;
                correctGuesses++;
            } else {
                cout << "Ops! A letra correta era: " << randomLetter << endl;
                wrongGuesses++;
            }
        }

        cout << "\nPlacar:" << endl;
        cout << "Total de palpites: " << totalGuesses << endl;
        cout << "Acertos: " << correctGuesses << endl;
        cout << "Erros: " << wrongGuesses << endl;
    }

    cout << "\nObrigado por jogar!" << endl;

    return 0;
}
