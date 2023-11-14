#include <iostream>
#include <cmath>

// Function to check if a number is a perfect square
bool isPerfectSquare(unsigned n) {
    unsigned root = sqrt(n);
    return n == root * root;
}

// Function to check if a number can be expressed
// as a sum of two perfect squares
bool isSumOfSquares(unsigned n) {
    for (unsigned i = 0; i <= sqrt(n); ++i) {
        if (isPerfectSquare(n - i * i)) {
            return true;
        }
    }
    return false;
}

int main() {
    int number, largest = 0;
    std::cout << "Enter positive numbers (0 or less to end): " << std::endl;

    while (true) {
        std::cin >> number;
        if (number <= 0) {
            break;
        }
        if (number > largest && isSumOfSquares(number)) {
            largest = number;
        }
    }

    if (largest != 0) {
        std::cout << "The largest number that can be expressed as a sum of two perfect squares is: " << largest << std::endl;
        return 0;
    } else {
        std::cerr << "No number entered can be expressed as a sum of two perfect squares." << std::endl;
        return 1;
    }
}
