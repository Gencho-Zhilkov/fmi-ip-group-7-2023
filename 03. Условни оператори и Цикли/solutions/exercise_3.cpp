#include <iostream>
#include <cmath>


int main() {
    unsigned n;
    std::cin >> n;

    bool isPrime = (n > 1);
    if (n > 2) {
        for (unsigned i = 2; i <= (unsigned)(sqrt(n)); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    std::cout << isPrime << std::endl;
    return 0;
}
