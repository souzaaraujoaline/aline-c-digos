#include <iostream>

const int BUBBLE_SORT_THRESHOLD = 10; // Tamanho limite para usar o Bubble Sort

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void merge(int arr[], int left, int middle, int right) {
    // ... (mesma implementação do merge anterior)
}

void mergeSortWithBubbleSort(int arr[], int left, int right) {
    if (right - left <= BUBBLE_SORT_THRESHOLD) {
        // Usar Bubble Sort para subarrays pequenos
        bubbleSort(arr + left, right - left + 1);
    } else if (left < right) {
        int middle = left + (right - left) / 2;

        mergeSortWithBubbleSort(arr, left, middle);
        mergeSortWithBubbleSort(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}

int main() {
    int size = 1000; // Tamanho do array
    int arr[size];

    // Inicializar o array com valores aleatórios
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 1000; // Valores entre 0 e 999
    }

    std::cout << "Array antes da ordenacao:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    mergeSortWithBubbleSort(arr, 0, size - 1);

    std::cout << "Array apos a ordenacao usando Merge Sort e Bubble Sort:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
