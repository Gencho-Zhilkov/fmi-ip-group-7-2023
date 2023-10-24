#include <iostream>

int main() {
    unsigned num, exp;
    std::cin >> num >> exp;

    unsigned pow = 1;
    while (pow < num) {
        pow *= exp;
    }

    std::cout << (pow == num) << std::endl;
    return 0;
}
