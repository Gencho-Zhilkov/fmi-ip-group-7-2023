#include <iostream>

int main() {
    unsigned x;
    std::cin >> x;

    while (x != 1) {
        std::cout << x << " ";
        if (x % 2 == 0) {
            x /= 2;
        } else {
            x = 3 * x + 1;
        }
    }
    std::cout << 1 << std::endl;

    return 0;
}
