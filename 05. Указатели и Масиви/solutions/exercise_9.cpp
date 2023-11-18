#include <iostream>

// Функция, връщаша колко пъти `digit` се среща в `number`.
size_t countDigit(int number, int digit) {
    size_t count = 0;
    do {
        count += (abs(number % 10) == digit);
        number /= 10;
    } while (number);
    return count;
}

// Функция за броене на срещанията на цифра в масив
size_t countDigitInArray(const int arr[], const size_t size, int digit) {
    size_t totalCount = 0;
    for (size_t i = 0; i < size; i++) {
        totalCount += countDigit(arr[i], digit);
    }
    return totalCount;
}

int main() {
    int arr[] = {1, 2, -33, 73};
    size_t size = 4;

    std::cout << "Count of 1: " << countDigitInArray(arr, size, 1) << std::endl;
    std::cout << "Count of 3: " << countDigitInArray(arr, size, 3) << std::endl;

    return 0;
}
