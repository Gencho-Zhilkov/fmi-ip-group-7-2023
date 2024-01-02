#include <iostream>


// Функция за сортиране на масива (Bubble Sort)
void sortArray(int* arr, size_t n) {
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Размяна на елементите
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    size_t n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Динамично заделяне на памет за масив
    int* arr = new int[n];

    // Въвеждане на елементите на масива
    std::cout << "Enter " << n << " integers: ";
    for (size_t i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Сортиране на масива
    sortArray(arr, n);

    // Извеждане на сортирания масив
    std::cout << "Sorted array in descending order: ";
    for (size_t i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Освобождаване на динамично заделената памет
    delete[] arr;

    return 0;
}
