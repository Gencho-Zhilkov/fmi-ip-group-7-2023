#include <iostream>

int main() {
    int number;
    std::cin >> number;

    bool hasRepeatingDigits = false;

    while (number > 10 && !hasRepeatingDigits) {
        int currentDigit = number % 10;
        int tempNumber = number / 10;

        while (tempNumber > 0) {
            if (tempNumber % 10 == currentDigit) {
                hasRepeatingDigits = true;
                break;
            }
            tempNumber /= 10;
        }

        number /= 10;
    }

    std::cout << hasRepeatingDigits << std::endl;
    return 0;
}
