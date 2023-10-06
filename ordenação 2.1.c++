#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos arr[j] e arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    std::vector<int> lista = {10, 4, 76, 99, 1, -1, 90, -10};
    
    std::cout << "Lista antes da ordenacao:" << std::endl;
    for (int num : lista) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    bubbleSort(lista);
    
    std::cout << "Lista apos a ordenacao:" << std::endl;
    for (int num : lista) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
