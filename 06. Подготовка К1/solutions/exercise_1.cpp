#include <iostream>
#include <cmath>

bool isPrime(unsigned n) {
    if (n < 2) {
        return false;
    }
    for (unsigned i = 2; i <= (unsigned)sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    unsigned number;
    std::cout << "Enter an even positive number: ";
    std::cin >> number;

    if (number % 2 != 0) {
        std::cerr << "Not an even number." << std::endl;
        return 1;
    }

    for (unsigned i = 2; i <= number / 2; i++) {
        if (isPrime(i) && isPrime(number - i)) {
            std::cout << i << " + " << (number - i) << std::endl;
        }
    }

    return 0;
}
