#include <iostream>
#include <cmath>


// Функцията `all` от Зад. 4
bool all(const bool arr[], const size_t size) {
    for (size_t i = 0; i < size; i++) {
        if (!arr[i]) {
            return false;
        }
    }
    return true;
}


bool containsAllDigits(long long number) {
    // Масив за отбелязване на срещнатите цифри
    bool digits[10] = {false};

    do {
        // Отбелязваме цифрата
        digits[abs(number % 10)] = true;
        number /= 10;
    } while (number);

    // Проверяваме дали всички цифри са срещнати
    return all(digits, 10);
}

int main() {
    long long a = 1234567890, b = 123456789;

    std::cout << std::boolalpha;
    std::cout << a << " " << containsAllDigits(a) << std::endl;
    std::cout << b << " " << containsAllDigits(b) << std::endl;

    return 0;
}
