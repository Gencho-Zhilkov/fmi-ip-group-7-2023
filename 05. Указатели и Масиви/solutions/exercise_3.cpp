#include <iostream>


// Проверява дали елементите на масива са подредени в нарастващ ред
bool isAscending(const int arr[], size_t size) {
    // Ако масивът е празен или съдържа само един елемент,
    // то той се счита за подреден
    if (size <= 1) {
        return true;
    }

    // Обхождане на масива и проверка за нарастващ ред
    for (size_t i = 0; i < size - 1; i++) {
        // Ако текущият елемент е по-голям от следващия,
        // масивът не е в нарастващ ред
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

// Примерно извикване на функцията
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 4, 3, 5};
    size_t size = 5;

    std::cout << std::boolalpha;
    std::cout << isAscending(arr1, size) << std::endl;
    std::cout << isAscending(arr2, size) << std::endl;

    return 0;
}
