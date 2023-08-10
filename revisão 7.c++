#include <iostream>
using namespace std;

int main() {
    char letter;
    
    cout << "Digite uma letra entre 'a' e 'z': ";
    cin >> letter;

    if (letter >= 'a' && letter <= 'z') {
        cout << "Dica: As letras do alfabeto estao entre 'a' e 'z'." << endl;
    } else {
        cout << "Voce nao digitou uma letra valida." << endl;
    }
    
    return 0;
}
