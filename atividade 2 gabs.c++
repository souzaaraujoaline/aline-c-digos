#include <iostream>

int main() {
   int numero;

   std::cout << "Digite um número inteiro: ";
   std::cin >> numero;

   int resultado = numero * 2;

   std::cout << "O triplo do número é: " << resultado << std::endl;

   return 0;
}
