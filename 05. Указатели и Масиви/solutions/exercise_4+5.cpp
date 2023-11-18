#include <iostream>


// Проверява дали поне един елемент от масива е true
bool any(const bool arr[], const size_t size) {
    for (size_t i = 0; i < size; i++) {
        if (arr[i]) {
            return true;
        }
    }
    return false;
}

// Проверява дали всички елементи на масива са true
bool all(const bool arr[], const size_t size) {
    for (size_t i = 0; i < size; i++) {
        if (!arr[i]) {
            return false;
        }
    }
    return true;
}

// Връща индекса на първия `true` елемент в масива
int firstTrueIndex(const bool arr[], const size_t size) {
    for (size_t i = 0; i < size; i++) {
        if (arr[i]) {
            return i;
        }
    }
    return -1; // Връща -1, ако няма `true` елемент
}


// Примерни извиквания на функциите
int main() {
    bool arr[] = {false, false, true, false, true};
    size_t size = 5;

    std::cout << std::boolalpha;
    std::cout << "Any true: " << any(arr, size) << std::endl;
    std::cout << "All true: " << all(arr, size) << std::endl;
    std::cout << "First true at: " << firstTrueIndex(arr, size) << std::endl;

    return 0;
}
