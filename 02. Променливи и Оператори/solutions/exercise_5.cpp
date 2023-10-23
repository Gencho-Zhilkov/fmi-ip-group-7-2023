#include <iostream>

int main() {
    unsigned n;
    std::cin >> n;

    unsigned multiple = n * (1 + n % 2);
    std::cout << "The smallest number divisible by both " << n << " and 2 is: "
        << multiple << std::endl;

    return 0;
}
