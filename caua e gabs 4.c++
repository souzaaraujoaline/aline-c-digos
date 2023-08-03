#include <iostream>

int main() {
   int opcao;

   std::cout << "Digite uma opção (1-6): ";
   std::cin >> opcao;

   switch (opcao) {
      case 1:
         std::cout << "Opcao 1 selecionada." << std::endl;
         break;
      case 2:
        std::cout << "Opcao 2 selecionada." << std::endl;
      case 3:

        std::cout << "Opcao 3 selecionada." << std::endl;
        break;
      case 4:
        std::cout << "Sou um garoto de programa" << std::endl;
         case 5:
        std::cout << "Faço computaria" << std::endl;
         case 6:
        std::cout << "Sou um programador JR" << std::endl;
    default:
        std::cout << "Opcao invalida." << std::endl;       
   } 

   return 0;
}
