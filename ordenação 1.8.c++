#include <iostream>

void merge(int arr[], int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Criação de arrays temporários
    int tempLeft[n1];
    int tempRight[n2];

    // Copiar dados para arrays temporários tempLeft[] e tempRight[]
    for (int i = 0; i < n1; ++i) {
        tempLeft[i] = arr[left + i];
    }
    for (int j = 0; j < n2; ++j) {
        tempRight[j] = arr[middle + 1 + j];
    }

    // Índices iniciais dos subarrays temporários
    int i = 0;
    int j = 0;

    // Índice inicial do array fundido
    int k = left;

    // Mesclar os subarrays temporários de volta ao array original
    while (i < n1 && j < n2) {
        if (tempLeft[i] <= tempRight[j]) {
            arr[k] = tempLeft[i];
            ++i;
        } else {
            arr[k] = tempRight[j];
            ++j;
        }
        ++k;
    }

    // Copiar os elementos restantes de tempLeft[], se houver
    while (i < n1) {
        arr[k] = tempLeft[i];
        ++i;
        ++k;
    }

    // Copiar os elementos restantes de tempRight[], se houver
    while (j < n2) {
        arr[k] = tempRight[j];
        ++j;
        ++k;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        // Chamar a função mergeSort para a primeira metade
        mergeSort(arr, left, middle);
        
        // Chamar a função mergeSort para a segunda metade
        mergeSort(arr, middle + 1, right);
        
        // Mesclar as metades ordenadas
        merge(arr, left, middle, right);
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array antes da ordenacao:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    mergeSort(arr, 0, size - 1);

    std::cout << "Array apos a ordenacao usando Merge Sort:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
