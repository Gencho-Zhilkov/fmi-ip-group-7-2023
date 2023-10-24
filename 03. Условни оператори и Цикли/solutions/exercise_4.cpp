#include <iostream>

int main() {
    int number;
    std::cin >> number;

    int originalNumber = number;
    int digitCount = (number == 0);
    int digitSum = 0;
    int maxDigit = 0;
    int product = 1;
    int position = 0;
    bool divisibleByAllDigits = true;

    while (number > 0) {
        int currentDigit = number % 10;

        // Брой на цифрите
        digitCount++;

        // Сбор на цифрите
        digitSum += currentDigit;

        // Най-голяма цифра
        if (currentDigit > maxDigit) {
            maxDigit = currentDigit;
        }

        // Проверка дали числото се дели на всяка от цифрите си
        if (currentDigit != 0 && originalNumber % currentDigit != 0) {
            divisibleByAllDigits = false;
        }

        // Произведение на цифрите на четна позиция, които се делят на 3
        if (position % 2 == 0 && currentDigit % 3 == 0) {
            product *= currentDigit;
        }

        number /= 10;
        position++;
    }

    std::cout << "Number of digits: " << digitCount << std::endl;
    std::cout << "Sum of digits: " << digitSum << std::endl;
    std::cout << "Largest digit: " << maxDigit << std::endl;
    std::cout << "Divisible by all its digits: " << divisibleByAllDigits << std::endl;
    std::cout << "Product of even-positioned digits divisible by 3: " << product << std::endl;

    return 0;
}
