#include <iostream>

int main() {
    int escolha;

    do {
        // Mostrar o menu
        std::cout << "Menu de Opcoes:" << std::endl;
        std::cout << "1. Adicionar Cliente" << std::endl;
        std::cout << "2. Remover Cliente" << std::endl;
        std::cout << "3. Consultar Cliente" << std::endl;
        std::cout << "0. Sair" << std::endl;
        std::cout << "Escolha uma opcao: ";
        std::cin >> escolha;

        // Processar a escolha do usuário
        switch (escolha) {
            case 1:
                // Fluxo para adicionar um novo cliente
                std::cout << "Opcao escolhida: Adicionar Cliente" << std::endl;
                // Aqui você pode implementar o código para receber as informações do novo cliente a ser adicionado.
                break;
            case 2:
                // Fluxo para remover um cliente
                std::cout << "Opcao escolhida: Remover Cliente" << std::endl;
                // Aqui você pode implementar o código para receber o identificador do cliente a ser removido.
                break;
            case 3:
                // Fluxo para consultar um cliente
                std::cout << "Opcao escolhida: Consultar Cliente" << std::endl;
                // Aqui você pode implementar o código para receber o identificador do cliente a ser consultado.
                break;
            case 0:
                // Encerrar o programa
                std::cout << "Saindo do programa..." << std::endl;
                break;
            default:
                std::cout << "Opcao invalida. Escolha novamente." << std::endl;
        }
    } while (escolha != 0);

    return 0;
}
