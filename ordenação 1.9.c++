#include <iostream>

void merge(int arr[], int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    for (int i = 0; i < n1; ++i) {
        int temp = arr[left + i];
        arr[left + i] = arr[middle + 1 + i];
        arr[middle + 1 + i] = temp;
    }

    int i = 0;
    int j = middle + 1;

    int k = left;

    while (i < n1 && j <= right) {
        if (arr[left + i] <= arr[j]) {
            arr[k] = arr[left + i];
            ++i;
        } else {
            arr[k] = arr[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        arr[k] = arr[left + i];
        ++i;
        ++k;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

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

    std::cout << "Array apos a ordenacao usando Merge Sort in-place:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
