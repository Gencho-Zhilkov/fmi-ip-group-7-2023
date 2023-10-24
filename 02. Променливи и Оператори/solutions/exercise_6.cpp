#include <iostream>

int main() {
    unsigned n;
    std::cin >> n;

    // Числото ще се промени, ако последнатам му цифра е нула,
    // освен когато самото число е нула.
    const bool change = (n != 0) && (n % 10 == 0);
    std::cout << change << std::endl;

    return 0;
}
