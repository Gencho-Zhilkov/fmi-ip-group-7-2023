#include <iostream>


void printArray(const int arr[], const size_t size) {
    // Обхождане на елементите на масива
    for (size_t i = 0; i < size; i++) {
        // Отпечатване на текущия елемент
        std::cout << arr[i];
        // Добавяне на интервал между елементите, освен след последния
        if (i < size - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}


// Примерно извикване на функцията
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    const size_t size = 5;

    printArray(arr, size);

    return 0;
}
