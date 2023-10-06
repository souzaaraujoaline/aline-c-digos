#include <iostream>

int findIndexOfMinElement(int arr[], int start, int end) {
    int minIndex = start;

    for (int i = start + 1; i <= end; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    return minIndex;
}

void selectionSortFirstK(int arr[], int size, int k) {
    for (int i = 0; i < k && i < size - 1; ++i) {
        int minIndex = findIndexOfMinElement(arr, i, size - 1);
        
        if (minIndex != i) {
            // Trocar o elemento atual com o menor elemento encontrado
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    int k = 3; // Ordenar os primeiros 3 elementos

    std::cout << "Array antes da ordenacao:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    selectionSortFirstK(arr, size, k);

    std::cout << "Primeiros " << k << " elementos apos a ordenacao usando Selection Sort:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
