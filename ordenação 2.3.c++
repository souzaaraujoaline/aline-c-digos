#include <iostream>
#include <algorithm> // Para std::sort

// Função para ordenar o array usando Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            // Se o elemento atual for maior que o próximo, troque-os
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j]; // Adicione ponto-e-vírgula aqui
                arr[j] = arr[j + 1]; // Adicione ponto-e-vírgula aqui
                arr[j + 1] = temp; // Adicione ponto-e-vírgula aqui
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Mostrar o array original
    std::cout << "Array original: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Chamar a função de ordenação
    bubbleSort(arr, size);

    // Mostrar o array ordenado
    std::cout << "Array ordenado: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0; // Adicione ponto-e-vírgula aqui
}

