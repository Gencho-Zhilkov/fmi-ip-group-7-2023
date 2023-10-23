#include <iostream>

int main() {
    unsigned n;
    std::cin >> n;

    const unsigned sum = n * (n + 1) / 2;
    std::cout << "Sum from 1 to " << n << " is: " << sum << std::endl;

    return 0;
}
