#include <iostream>
#include <string>
#include <sstream>

struct Character {
    std::string name;
    std::string characterClass;
    int level;
    std::string skills;
    std::string equipment;

    static Character createCharacter() {
        Character newCharacter;

        std::cout << "Digite o nome do personagem: ";
        std::getline(std::cin, newCharacter.name);

        std::cout << "Digite a classe do personagem: ";
        std::getline(std::cin, newCharacter.characterClass);

        std::cout << "Digite o nivel do personagem: ";
        std::cin >> newCharacter.level;
        std::cin.ignore();

        std::cout << "Digite as habilidades do personagem: ";
        std::getline(std::cin, newCharacter.skills);

        std::cout << "Digite o equipamento epico do personagem: ";
        std::getline(std::cin, newCharacter.equipment);

        return newCharacter;
    }

    void displayCharacter() const {
        std::cout << "Nome: " << name << std::endl;
        std::cout << "Classe: " << characterClass << std::endl;
        std::cout << "Nivel: " << level << std::endl;
        std::cout << "Habilidades: " << skills << std::endl;
        std::cout << "Equipamento epico: " << equipment << std::endl;
    }

    void addItemToEquipment(const std::string& item) {
        if (equipment.empty()) {
            equipment = item;
        } else {
            equipment += ", " + item;
        }
    }

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

void addEquipmentItem(Character& character) {
    std::cout << "Digite o nome do item a ser adicionado: ";
    std::string newItem;
    std::getline(std::cin, newItem);
    character.addItemToEquipment(newItem);
    std::cout << "Item adicionado com sucesso!\n";
}

void removeEquipmentItem(Character& character) {
    std::cout << "Digite o nome do item a ser removido: ";
    std::string itemToRemove;
    std::getline(std::cin, itemToRemove);
    character.removeItemFromEquipment(itemToRemove);
    std::cout << "Item removido com sucesso!\n";
}

void displayCharacterEquipment(const Character& character) {
    std::cout << "Equipamento do personagem:\n";
    character.displayEquipment();
}

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

    Character playerCharacter = Character::createCharacter();

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
