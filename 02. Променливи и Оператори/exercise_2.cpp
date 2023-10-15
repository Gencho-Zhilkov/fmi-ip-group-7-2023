#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    const int max = (a >= b) * a + (a < b) * b;
    std::cout << "The larger number is: " << max << std::endl;

    return 0;
}
