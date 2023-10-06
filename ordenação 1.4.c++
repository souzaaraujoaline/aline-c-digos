#include <iostream>

int findIndexOfMinElement(int arr[], int start, int end) {
    int minIndex = start; // Assume que o primeiro elemento é o menor

    for (int i = start + 1; i <= end; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i; // Atualiza o índice do menor elemento
        }
    }

    return minIndex;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    int startIndex = 1;
    int endIndex = 5;

    int minIndex = findIndexOfMinElement(arr, startIndex, endIndex);

    std::cout << "O menor elemento no subarray [" << startIndex << ", " << endIndex << "] esta no indice: " << minIndex << std::endl;

    return 0;
}
