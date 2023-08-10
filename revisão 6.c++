#include <iostream>
using namespace std;

int main() {
    char letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    // Verifica se a letra é uma vogal
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        cout << "A letra '" << letra << "' e uma vogal." << endl;
    }
    // Verifica se a letra é uma consoante
    else if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        cout << "Dica: A letra '" << letra << "' e uma consoante." << endl;
    }
    // Caso a entrada não seja uma letra válida
    else {
        cout << "Dica: Isso nao e uma letra valida." << endl;
    }

    return 0;
}
