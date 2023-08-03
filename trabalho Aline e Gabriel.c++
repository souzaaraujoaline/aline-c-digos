#include <iostream>     //controla a leitura (cabeçalho)
#include <string>       //serve para manipular, juntar, comparar e acessar caracteres
#include <sstream>      //serve para realizar operaçôes de leitura e gravação 
// Definindo a estrutura para a ficha de personagem
struct Character {      //struct serve para o armazenamento de dados em uma única variável
    std::string name;       //serve para indicar o nome do personagem (armazena texto)
    std::string characterClass;     //serve para indicar a classe do personagem (guerreiro, mago, arqueiro...)
    int level;      //serve para mostrar o nivel do personagem
    std::string skills;     //serve para mostrar a habilidade do personagem
    std::string equipment;      //serve para mostrar os equipamentos do personagem
     // Função para criar uma nova ficha de personagem
    static Character createCharacter() {
        Character newCharacter;

        std::cout << "Digite o nome do personagem (apenas letras): ";       //cout representa a saída de caracteres
        std::string nameInput;

// Loop para ler o nome e verificar se contém apenas letras
while (true) {
    std::getline(std::cin, nameInput);       //getline é a função que permite que possamos ler a linha inteira

    bool onlyLetters = true;                //bool indica as opções de verdadeiro ou falso
    for (char c : nameInput) {              //char indica o uso de apenas letras
        if (!std::isalpha(c)) {             
            onlyLetters = false;
            break;
        }
    }

    if (onlyLetters) {                      //if = se
        break; // Nome válido, sair do loop
    } else {                            //else = se não
        std::cout << "Nome inválido. Digite apenas letras: ";
    }
}

        std::cout << "Digite a classe do personagem (apenas letras): ";
        std::string classInput;

// Loop para ler a classe e verificar se contém apenas letras
while (true) {
    std::getline(std::cin, classInput);

    bool onlyLetters = true;
    for (char c : classInput) {
        if (!std::isalpha(c)) {
            onlyLetters = false;
            break;
        }
    }

    if (onlyLetters) {
        break; // Classe válida, sair do loop
    } else {
        std::cout << "Classe inválida. Digite apenas letras: ";
    }
}
        std::cout << "Digite o nivel do personagem (apenas numeros): ";
        std::string levelInput;

// Loop para ler o nivel e verificar se contém apenas números
while (true) {
    std::getline(std::cin, levelInput);

    bool onlyDigits = true;
    for (char c : levelInput) {
        if (!std::isdigit(c)) {
            onlyDigits = false;
            break;
        }
    }

    if (onlyDigits) {
        break; // Nível válido, sair do loop
    } else {
        std::cout << "Nivel inválido. Digite apenas numeros: ";
    }
}
        std::cout << "Digite as habilidades do personagem (apenas letras): ";
        std::string skillsInput;

// Loop para ler as habilidades e verificar se contém apenas letras
while (true) {
    std::getline(std::cin, skillsInput);

    bool onlyLetters = true;
    for (char c : skillsInput) {
        if (!std::isalpha(c)) {
            onlyLetters = false;
            break;
        }
    }

    if (onlyLetters) {
        break; // Habilidades válidas, sair do loop
    } else {
        std::cout << "Habilidades inválidas. Digite apenas letras: ";
    }
}
        std::cout << "Digite o equipamento epico do personagem (apenas letras): ";
        std::string equipmentInput;

// Loop para ler o equipamento épico e verificar se contém apenas letras
while (true) {
    std::getline(std::cin, equipmentInput);

    bool onlyLetters = true;
    for (char c : equipmentInput) {
        if (!std::isalpha(c)) {
            onlyLetters = false;
            break;
        }
    }

    if (onlyLetters) {
        break; // Equipamento épico válido, sair do loop
    } else {
        std::cout << "Equipamento inválido. Digite apenas letras: ";
    }
}

        return newCharacter;
}

    void displayCharacter() const {                 //a palavra void especifica que a função não retorna um valor
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

    std::cout << "\nEscolha uma opcao:\n";
    std::cout << "1. Adicionar item ao equipamento\n";
    std::cout << "2. Remover item do equipamento\n";
    std::cout << "3. Exibir equipamento\n";
    std::cout << "4. Buscar item no equipamento\n";
    std::cout << "Digite o numero da opcao: ";

    int choice;
    std::cin >> choice;
    std::cin.ignore();

    switch (choice) {                   //a palavra switch serve para fazer testes
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
        default: {
            std::cout << "Opcao invalida. Saindo...\n";
            break;
        }
    }

    return 0;               //retorno ao início
}