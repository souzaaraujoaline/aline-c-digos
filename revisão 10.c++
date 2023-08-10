#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<string> palavras = {"programacao", "computador", "linguagem", "desenvolvimento", "algoritmo"};

string escolherPalavraAleatoria() {
    srand(time(0));
    int indice = rand() % palavras.size();
    return palavras[indice];
}

bool letraJaEscolhida(char letra, const string& letrasEscolhidas) {
    return letrasEscolhidas.find(letra) != string::npos;
}

void mostrarForca(int tentativas) {
    if (tentativas == 0) {
        cout << "   ________" << endl;
        cout << "  |        |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "__|__" << endl;
    } else if (tentativas == 1) {
        cout << "   ________" << endl;
        cout << "  |        |" << endl;
        cout << "  |        O" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "__|__" << endl;
    } else if (tentativas == 2) {
        cout << "   ________" << endl;
        cout << "  |        |" << endl;
        cout << "  |        O" << endl;
        cout << "  |        |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "__|__" << endl;
    } else if (tentativas == 3) {
        cout << "   ________" << endl;
        cout << "  |        |" << endl;
        cout << "  |        O" << endl;
        cout << "  |       /|" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "__|__" << endl;
    } else if (tentativas == 4) {
        cout << "   ________" << endl;
        cout << "  |        |" << endl;
        cout << "  |        O" << endl;
        cout << "  |       /|\\" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "__|__" << endl;
    } else if (tentativas == 5) {
        cout << "   ________" << endl;
        cout << "  |        |" << endl;
        cout << "  |        O" << endl;
        cout << "  |       /|\\" << endl;
        cout << "  |       /" << endl;
        cout << "  |" << endl;
        cout << "__|__" << endl;
    } else {
        cout << "   ________" << endl;
        cout << "  |        |" << endl;
        cout << "  |        O" << endl;
        cout << "  |       /|\\" << endl;
        cout << "  |       / \\" << endl;
        cout << "  |" << endl;
        cout << "__|__" << endl;
    }
}

void mostrarPalavraEscondida(const string& palavra, const string& letrasEscolhidas) {
    for (char letra : palavra) {
        if (letraJaEscolhida(letra, letrasEscolhidas)) {
            cout << letra << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

int main() {
    string palavra = escolherPalavraAleatoria();
    string letrasEscolhidas;
    int tentativas = 0;
    int maxTentativas = 6;

    cout << "Bem-vindo ao jogo Super Forca!" << endl;

    while (tentativas < maxTentativas) {
        mostrarForca(tentativas);
        mostrarPalavraEscondida(palavra, letrasEscolhidas);

        char letra;
        cout << "Digite uma letra: ";
        cin >> letra;

        if (letraJaEscolhida(letra, letrasEscolhidas)) {
            cout << "Você já escolheu essa letra." << endl;
        } else {
            letrasEscolhidas += letra;

            if (palavra.find(letra) != string::npos) {
                cout << "Parabéns! A letra '" << letra << "' está na palavra." << endl;
            } else {
                cout << "Ops! A letra '" << letra << "' não está na palavra." << endl;
                tentativas++;
            }
        }

        bool palavraCompleta = true;
        for (char letra : palavra) {
            if (!letraJaEscolhida(letra, letrasEscolhidas)) {
                palavraCompleta = false;
                break;
            }
        }

        if (palavraCompleta) {
            mostrarForca(tentativas);
            mostrarPalavraEscondida(palavra, letrasEscolhidas);
            cout << "Parabéns! Você ganhou! A palavra era: " << palavra << endl;
            break;
        }
    }

    if (tentativas >= maxTentativas) {
        mostrarForca(tentativas);
        cout << "Game Over! A palavra era: " << palavra << endl;
    }

    return 0;
}
