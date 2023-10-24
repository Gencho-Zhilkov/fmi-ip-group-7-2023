#include <iostream>

int main() {
    int number;
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cerr << "Error: Input is not a four-digit number." << std::endl;
        return 1;
    }

    int firstDigit = number / 1000;
    int secondDigit = (number / 100) % 10;
    int thirdDigit = (number / 10) % 10;
    int fourthDigit = number % 10;

    int sum = firstDigit + secondDigit + thirdDigit + fourthDigit;
    int product = firstDigit * secondDigit * thirdDigit * fourthDigit;

    std::cout << "Sum of digits: " << sum << std::endl;
    std::cout << "Product of digits: " << product << std::endl;

    return 0;
}
