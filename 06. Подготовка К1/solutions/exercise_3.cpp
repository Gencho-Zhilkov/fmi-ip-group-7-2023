#include <iostream>

// Use unsigned long for result to avoid numeric overflow
unsigned long largestPermutation(unsigned n) {
    // Array to store the frequency of each digit
    unsigned frequency[10] = {};

    // Count the frequency of each digit in the number
    do {
        const int digit = n % 10;
        frequency[digit]++;
        n /= 10;
    } while (n > 0);

    // Reconstruct the largest number by appending
    // the digits in descending order
    unsigned long result = 0;
    for (int i = 9; i >= 0; i--) {
        while (frequency[i] > 0) {
            result = result * 10 + i;
            frequency[i]--;
        }
    }

    return result;
}

int main() {
    unsigned n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    std::cout << "The largest permutation is: " << largestPermutation(n) << std::endl;

    return 0;
}
