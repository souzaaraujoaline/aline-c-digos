#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Solicita os números ao usuário
    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    cout << "Digite o terceiro número: ";
    cin >> num3;

    // Verifica o maior número
    int maior = num1;

    if (num2 > maior) {
        maior = num2;
    }

    if (num3 > maior) {
        maior = num3;
    }

    // Exibe o maior número
    cout << "O maior número é: " << maior << endl;

    return 0;
}
