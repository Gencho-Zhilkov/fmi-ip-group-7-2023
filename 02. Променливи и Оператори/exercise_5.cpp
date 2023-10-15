#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int multiple = n * (1 + n % 2);
    std::cout << "The smallest number divisible by both " << n << " and 2 is: "
        << multiple << std::endl;

    return 0;
}
