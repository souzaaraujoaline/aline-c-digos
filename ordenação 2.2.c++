#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> lista = {"maçã", "alface", "mamão", "feijão", "arroz", "limão"};
    
    std::cout << "Lista antes da ordenacao:" << std::endl;
    for (const std::string& item : lista) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
    
    std::sort(lista.begin(), lista.end());
    
    std::cout << "Lista apos a ordenacao:" << std::endl;
    for (const std::string& item : lista) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}
