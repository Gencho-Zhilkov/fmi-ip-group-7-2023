#include <iostream>
#include <cmath>

// Намира най-често срещаната цифра в числото
int mostFrequentDigit(long long number) {
    // Масив за броене на срещанията на всяка цифра
    int digitCount[10] = {0};
    do {
        // Увеличаваме брояча за съответната цифра
        digitCount[abs(number % 10)]++;
        number /= 10;
    } while (number);

    int maxCount = 0, mostFrequent = 0;
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequent = i;
        }
    }
    return mostFrequent;
}

int main() {
    long long n = 122333445566788889;
    std::cout << n << ' ' << mostFrequentDigit(n) << std::endl;
    return 0;
}
