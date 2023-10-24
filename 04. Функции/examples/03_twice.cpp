#include <iostream>
#include <stdexcept>


int twice(int x) {
    if (x < 0) {
        throw std::invalid_argument("x must be positive!");
    }
    return 2*x;
}

int main(void) {
    try {
        int n;
        std::cin >> n;
        std::cout << twice(n) << std::endl;
        return 0;
    } catch(std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}
