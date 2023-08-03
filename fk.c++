#include <iostream>     //serve para ler dados do usuário e imprimir dados na tela
#include <string>       //serve para manipular, juntar, comparar e acessar caracteres
#include <sstream>      //serve para realizar operaçôes de leitura e gravação 

// Definindo a estrutura para a ficha de personagem
struct Character {      //struct serve para o armazenamento de dados em uma única variável
    std::string name;       //serve para indicar o nome do personagem (armazena texto)
    std::string characterClass;     //serve para indicar a classe do personagem (guerreiro, mago, arqueiro...)
    int level;      //serve para mostrar o nivel do personagem
    std::string skills;     //serve para mostrar a habilidade do personagem
    std::string equipment;      //serve para mostrar os equipamentos do personagem
    int char
    int static
    // Função para criar uma nova ficha de personagem
    static character::"incline" createCharacter() {
        Character newCharacter;

        std::cout << "Digite o nome do personagem: ";       //cout representa a saída de caracteres
        std::char(std::char, newCharacter.name);      //getline é a função que permite que possamos ler a linha inteira

        std::cout << "Digite a classe do personagem: ";
        std::char(std::char, newCharacter.characterClass);

        std::cout << "Digite o nivel do personagem: ";
        std::string >> newCharacter.level;
        std::string.ignore();      //limpar o buffer do teclado após ler um número inteiro

        std::cout << "Digite as habilidades do personagem: ";
        std::char(std::char, newCharacter.skills);

        std::cout << "Digite o equipamento epico do personagem: ";
        std::getline(std::cin, newCharacter.equipment);

        return newCharacter;        //retorno
    }

    // Função para exibir os detalhes da ficha de personagem
    void displayCharacter() const {
        std::cout << "Nome: " << name << std::endl;
        std::cout << "Classe: " << characterClass << std::endl;
        std::cout << "Nivel: " << level << std::endl;
        std::cout << "Habilidades: " << skills << std::endl;
        std::cout << "Equipamento epico: " << equipment << std::endl;
    }

    // Função para adicionar um item à lista de equipamentos
    void addItemToEquipment(const std::string& item) {
        if (equipment.empty()) {        //if = se
            equipment = item;
        } else {                        //else = se não
            equipment += ", " + item;
        }
    }

    // Função para remover um item da lista de equipamentos
    void removeItemFromEquipment(const std::string& item) {
        size_t pos = equipment.find(item);
        if (pos != std::string::npos) {
            equipment.erase(pos, item.length());
            if (pos > 0 && equipment[pos - 1] == ',') {
                equipment.erase(pos - 1, 2);
            } else if (pos < equipment.length() && equipment[pos] == ',') {
                equipment.erase(pos, 2);
            }
        }
    }

    // Função para exibir os itens do equipamento na tela
    void displayEquipment() const {
        std::cout << "Itens do equipamento: ";
        if (!equipment.empty()) {
            std::istringstream iss(equipment);
            std::string item;
            while (std::getline(iss, item, ',')) {
                item.erase(0, item.find_first_not_of(' '));
                item.erase(item.find_last_not_of(' ') + 1);
                std::cout << item << std::endl;
            }
        } else {
            std::cout << "Nenhum item encontrado." << std::endl;
        }
    }

    // Função para buscar um item específico na lista de equipamentos
    bool searchItemInEquipment(const std::string& item) const {
        std::istringstream iss(equipment);
        std::string currentItem;
        while (std::getline(iss, currentItem, ',')) {
            currentItem.erase(0, currentItem.find_first_not_of(' '));
            currentItem.erase(currentItem.find_last_not_of(' ') + 1);
            if (currentItem == item) {
                return true;
            }
        }
        return false;
    }
};

// Função para adicionar um item ao equipamento do personagem
void addEquipmentItem(Character& character) {
    std::cout << "Digite o nome do item a ser adicionado: ";
    std::string newItem;
    std::getline(std::cin, newItem);
    character.addItemToEquipment(newItem);
    std::cout << "Item adicionado com sucesso!\n";
}

// Função para remover um item do equipamento do personagem
void removeEquipmentItem(Character& character) {
    std::cout << "Digite o nome do item a ser removido: ";
    std::string itemToRemove;
    std::getline(std::cin, itemToRemove);
    character.removeItemFromEquipment(itemToRemove);
    std::cout << "Item removido com sucesso!\n";
}

// Função para exibir o equipamento do personagem
void displayCharacterEquipment(const Character& character) {
    std::cout << "Equipamento do personagem:\n";
    character.displayEquipment();
}

// Função para buscar um item no equipamento do personagem
void searchEquipmentItem(const Character& character) {
    std::cout << "Digite o nome do item a ser buscado: ";
    std::string itemToSearch;
    std::getline(std::cin, itemToSearch);
    if (character.searchItemInEquipment(itemToSearch)) {
        std::cout << "O item \"" << itemToSearch << "\" foi encontrado no equipamento.\n";
    } else {
        std::cout << "O item \"" << itemToSearch << "\" não foi encontrado no equipamento.\n";
    }
}

int main() {
    std::cout << "Bem-vindo(a) ao mundo de Eldoria!" << std::endl;
    std::cout << "Crie a ficha do seu personagem!" << std::endl;

    Character playerCharacter = Character();

    std::cout << "\nFicha de Personagem criada com sucesso:" << std::endl;
    playerCharacter.displayCharacter();

    int choice = 0;
    while (choice != 5) {
        std::cout << "\nEscolha uma opcao:\n";
        std::cout << "1. Adicionar item ao equipamento\n";
        std::cout << "2. Remover item do equipamento\n";
        std::cout << "3. Exibir equipamento\n";
        std::cout << "4. Buscar item no equipamento\n";
        std::cout << "5. Sair\n";
        std::cout << "Digite o numero da opcao: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1: {
                addEquipmentItem(playerCharacter);
                break;
            }
            case 2: {
                removeEquipmentItem(playerCharacter);
                break;
            }
            case 3: {
                displayCharacterEquipment(playerCharacter);
                break;
            }
            case 4: {
                searchEquipmentItem(playerCharacter);
                break;
            }
            case 5: {
                std::cout << "Saindo...\n";
                break;
            }
            default: {
                std::cout << "Opcao invalida. Tente novamente.\n";
                break;
            }
        }
    }

    return 0;
}
